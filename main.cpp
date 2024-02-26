#include "memory.h"

#include <thread>
#include <array>

namespace offset
{
	// client
	constexpr ::std::ptrdiff_t dwLocalPlayer = 0xDEF97C;
	constexpr ::std::ptrdiff_t dwEntityList = 0x4E051DC;
	constexpr ::std::ptrdiff_t dwClientState = 0x59F19C;

	// player
	constexpr ::std::ptrdiff_t m_hMyWeapons = 0x2E08;

	// base attributable
	constexpr ::std::ptrdiff_t m_flFallbackWear = 0x31E0;
	constexpr ::std::ptrdiff_t m_nFallbackPaintKit = 0x31D8;
	constexpr ::std::ptrdiff_t m_nFallbackSeed = 0x31DC;
	constexpr ::std::ptrdiff_t m_nFallbackStatTrak = 0x31E4;
	constexpr ::std::ptrdiff_t m_iItemDefinitionIndex = 0x2FBA;
	constexpr ::std::ptrdiff_t m_iItemIDHigh = 0x2FD0;
	constexpr ::std::ptrdiff_t m_iEntityQuality = 0x2FBC;
	constexpr ::std::ptrdiff_t m_iAccountID = 0x2FD8;
	constexpr ::std::ptrdiff_t m_OriginalOwnerXuidLow = 0x31D0;
}

// set skins to apply here
static constexpr const int GetWeaponPaint(const short& itemDefinition)
{
	switch (itemDefinition)
	{
	case 1: return 962; // DEAGLE
	//case 2: return 544; // ELITE
	//case 3: return 1093; // FIVESEVEN
	//case 4: return 799; // GLOCK
	case 7: return 600; // AK47
	//case 8: return 305; // AUG
	case 9: return 1144; // AWP
	//case 10: return 529; // FAMAS
	//case 11: return 628; // G3SG1
	//case 13: return 297; // GALILAR
	//case 14: return 401; // M249
	case 16: return 1041; // M4A1
	//case 17: return 433; // MAC10
	//case 19: return 283; // P90
	//case 23: return 915; // MP5SD
	//case 24: return 37; // UMP45
	//case 25: return 557; // XM1014
	//case 26: return 526; // BIZON
	//case 27: return 39; // MAG7
	//case 28: return 514; // NEGEV
	//case 29: return 596; // SAWEDOFF
	//case 30: return 889; // TEC9
	//case 32: return 000; // HKP2000
	//case 33: return 481; // MP7
	case 34: return 734; // MP9
	//case 35: return 3; // NOVA
	//case 36: return 102; // P250
	//case 38: return 312; // SCAR20
	//case 39: return 487; // SG556
	//case 40: return 956; // SSG08
	case 60: return 644; // M4A1_SILENCER
	case 61: return 1142; // USP_SILENCER
	//case 63: return 000; // CZ75A
	case 523: return 416; // WIDOWMAKER aka TALON
	//case 515: return 619; // BUTTERFLY
	default: return 0;
	}
}

int main()
{
	const auto memory = Memory{ "csgo.exe" };

	// get our module addresses
	const auto client = memory.GetModuleAddress("client.dll");
	const auto engine = memory.GetModuleAddress("engine.dll");

	// hack loop
	while (true)
	{
		std::this_thread::sleep_for(std::chrono::milliseconds(2));

		const auto& localPlayer = memory.Read<std::uintptr_t>(client + offset::dwLocalPlayer);
		const auto& weapons = memory.Read<std::array<unsigned long, 8>>(localPlayer + offset::m_hMyWeapons);

		// local player weapon iteration
		for (const auto& handle : weapons)
		{
			const auto& weapon = memory.Read<std::uintptr_t>((client + offset::dwEntityList + (handle & 0xFFF) * 0x10) - 0x10);

			// make sure weapon is valid
			if (!weapon)
				continue;

			// see if we want to apply a skin
			if (const auto paint = GetWeaponPaint(memory.Read<short>(weapon + offset::m_iItemDefinitionIndex)))
			{
				const bool shouldUpdate = memory.Read<std::int32_t>(weapon + offset::m_nFallbackPaintKit) != paint;

				// force weapon to use fallback values
				memory.Write<std::int32_t>(weapon + offset::m_iItemIDHigh, -1);

				memory.Write<std::int32_t>(weapon + offset::m_nFallbackPaintKit, paint);
				memory.Write<float>(weapon + offset::m_flFallbackWear, 0.1f);

				//memory.Write<std::int32_t>(weapon + offset::m_nFallbackSeed, 0);
				//memory.Write<std::int32_t>(weapon + offset::m_nFallbackStatTrak, 999);
				//memory.Write<std::int32_t>(weapon + offset::m_iAccountID, memory.Read<std::int32_t>(weapon + offset::m_OriginalOwnerXuidLow));

				if (shouldUpdate)
					memory.Write<std::int32_t>(memory.Read<std::uintptr_t>(engine + offset::dwClientState) + 0x174, -1);

			}

		}
	}

	return 0;
}
