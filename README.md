# SkinChanger

*All credit to *cazz* <br>
Check out his Github and follow [@cazz](https://github.com/cazzwastaken)<br>
Sub to his Youtube Channel [here](https://www.youtube.com/@cazz) to see more about game hacking<br>
#
> [!NOTE]
> Your offsets might be different from these ones so you are advised to dump them yourself.<br>
> You can do that by following *cazz's* tutorial [here](https://www.youtube.com/watch?v=x0aRYH5StZI)<br>

<details>

<summary>Offset Dump</summary>

```
constexpr ::std::ptrdiff_t cs_gamerules_data = 0x0;
constexpr ::std::ptrdiff_t m_ArmorValue = 0x117CC;
constexpr ::std::ptrdiff_t m_Collision = 0x320;
constexpr ::std::ptrdiff_t m_CollisionGroup = 0x474;
constexpr ::std::ptrdiff_t m_Local = 0x2FCC;
constexpr ::std::ptrdiff_t m_MoveType = 0x25C;
constexpr ::std::ptrdiff_t m_OriginalOwnerXuidHigh = 0x31D4;
constexpr ::std::ptrdiff_t m_OriginalOwnerXuidLow = 0x31D0;
constexpr ::std::ptrdiff_t m_SurvivalGameRuleDecisionTypes = 0x1328;
constexpr ::std::ptrdiff_t m_SurvivalRules = 0xD00;
constexpr ::std::ptrdiff_t m_aimPunchAngle = 0x303C;
constexpr ::std::ptrdiff_t m_aimPunchAngleVel = 0x3048;
constexpr ::std::ptrdiff_t m_angEyeAnglesX = 0x117D0;
constexpr ::std::ptrdiff_t m_angEyeAnglesY = 0x117D4;
constexpr ::std::ptrdiff_t m_bBombDefused = 0x29C0;
constexpr ::std::ptrdiff_t m_bBombPlanted = 0x9A5;
constexpr ::std::ptrdiff_t m_bBombTicking = 0x2990;
constexpr ::std::ptrdiff_t m_bFreezePeriod = 0x20;
constexpr ::std::ptrdiff_t m_bGunGameImmunity = 0x9990;
constexpr ::std::ptrdiff_t m_bHasDefuser = 0x117DC;
constexpr ::std::ptrdiff_t m_bHasHelmet = 0x117C0;
constexpr ::std::ptrdiff_t m_bInReload = 0x32B5;
constexpr ::std::ptrdiff_t m_bIsDefusing = 0x997C;
constexpr ::std::ptrdiff_t m_bIsQueuedMatchmaking = 0x74;
constexpr ::std::ptrdiff_t m_bIsScoped = 0x9974;
constexpr ::std::ptrdiff_t m_bIsValveDS = 0x7C;
constexpr ::std::ptrdiff_t m_bSpotted = 0x93D;
constexpr ::std::ptrdiff_t m_bSpottedByMask = 0x980;
constexpr ::std::ptrdiff_t m_bStartedArming = 0x3400;
constexpr ::std::ptrdiff_t m_bUseCustomAutoExposureMax = 0x9D9;
constexpr ::std::ptrdiff_t m_bUseCustomAutoExposureMin = 0x9D8;
constexpr ::std::ptrdiff_t m_bUseCustomBloomScale = 0x9DA;
constexpr ::std::ptrdiff_t m_clrRender = 0x70;
constexpr ::std::ptrdiff_t m_dwBoneMatrix = 0x26A8;
constexpr ::std::ptrdiff_t m_fAccuracyPenalty = 0x3340;
constexpr ::std::ptrdiff_t m_fFlags = 0x104;
constexpr ::std::ptrdiff_t m_flC4Blow = 0x29A0;
constexpr ::std::ptrdiff_t m_flCustomAutoExposureMax = 0x9E0;
constexpr ::std::ptrdiff_t m_flCustomAutoExposureMin = 0x9DC;
constexpr ::std::ptrdiff_t m_flCustomBloomScale = 0x9E4;
constexpr ::std::ptrdiff_t m_flDefuseCountDown = 0x29BC;
constexpr ::std::ptrdiff_t m_flDefuseLength = 0x29B8;
constexpr ::std::ptrdiff_t m_flFallbackWear = 0x31E0;
constexpr ::std::ptrdiff_t m_flFlashDuration = 0x10470;
constexpr ::std::ptrdiff_t m_flFlashMaxAlpha = 0x1046C;
constexpr ::std::ptrdiff_t m_flLastBoneSetupTime = 0x2928;
constexpr ::std::ptrdiff_t m_flLowerBodyYawTarget = 0x9ADC;
constexpr ::std::ptrdiff_t m_flNextAttack = 0x2D80;
constexpr ::std::ptrdiff_t m_flNextPrimaryAttack = 0x3248;
constexpr ::std::ptrdiff_t m_flSimulationTime = 0x268;
constexpr ::std::ptrdiff_t m_flTimerLength = 0x29A4;
constexpr ::std::ptrdiff_t m_hActiveWeapon = 0x2F08;
constexpr ::std::ptrdiff_t m_hBombDefuser = 0x29C4;
constexpr ::std::ptrdiff_t m_hMyWeapons = 0x2E08;
constexpr ::std::ptrdiff_t m_hObserverTarget = 0x339C;
constexpr ::std::ptrdiff_t m_hOwner = 0x29DC;
constexpr ::std::ptrdiff_t m_hOwnerEntity = 0x14C;
constexpr ::std::ptrdiff_t m_hViewModel = 0x3308;
constexpr ::std::ptrdiff_t m_iAccountID = 0x2FD8;
constexpr ::std::ptrdiff_t m_iClip1 = 0x3274;
constexpr ::std::ptrdiff_t m_iCompetitiveRanking = 0x1A84;
constexpr ::std::ptrdiff_t m_iCompetitiveWins = 0x1B88;
constexpr ::std::ptrdiff_t m_iCrosshairId = 0x11838;
constexpr ::std::ptrdiff_t m_iDefaultFOV = 0x333C;
constexpr ::std::ptrdiff_t m_iEntityQuality = 0x2FBC;
constexpr ::std::ptrdiff_t m_iFOV = 0x31F4;
constexpr ::std::ptrdiff_t m_iFOVStart = 0x31F8;
constexpr ::std::ptrdiff_t m_iGlowIndex = 0x10488;
constexpr ::std::ptrdiff_t m_iHealth = 0x100;
constexpr ::std::ptrdiff_t m_iItemDefinitionIndex = 0x2FBA;
constexpr ::std::ptrdiff_t m_iItemIDHigh = 0x2FD0;
constexpr ::std::ptrdiff_t m_iMostRecentModelBoneCounter = 0x2690;
constexpr ::std::ptrdiff_t m_iObserverMode = 0x3388;
constexpr ::std::ptrdiff_t m_iShotsFired = 0x103E0;
constexpr ::std::ptrdiff_t m_iState = 0x3268;
constexpr ::std::ptrdiff_t m_iTeamNum = 0xF4;
constexpr ::std::ptrdiff_t m_lifeState = 0x25F;
constexpr ::std::ptrdiff_t m_nBombSite = 0x2994;
constexpr ::std::ptrdiff_t m_nFallbackPaintKit = 0x31D8;
constexpr ::std::ptrdiff_t m_nFallbackSeed = 0x31DC;
constexpr ::std::ptrdiff_t m_nFallbackStatTrak = 0x31E4;
constexpr ::std::ptrdiff_t m_nForceBone = 0x268C;
constexpr ::std::ptrdiff_t m_nModelIndex = 0x258;
constexpr ::std::ptrdiff_t m_nTickBase = 0x3440;
constexpr ::std::ptrdiff_t m_nViewModelIndex = 0x29D0;
constexpr ::std::ptrdiff_t m_rgflCoordinateFrame = 0x444;
constexpr ::std::ptrdiff_t m_szCustomName = 0x304C;
constexpr ::std::ptrdiff_t m_szLastPlaceName = 0x35C4;
constexpr ::std::ptrdiff_t m_thirdPersonViewAngles = 0x31E8;
constexpr ::std::ptrdiff_t m_vecOrigin = 0x138;
constexpr ::std::ptrdiff_t m_vecVelocity = 0x114;
constexpr ::std::ptrdiff_t m_vecViewOffset = 0x108;
constexpr ::std::ptrdiff_t m_viewPunchAngle = 0x3030;
constexpr ::std::ptrdiff_t m_zoomLevel = 0x33E0;
constexpr ::std::ptrdiff_t anim_overlays = 0x2990;
constexpr ::std::ptrdiff_t clientstate_choked_commands = 0x4D30;
constexpr ::std::ptrdiff_t clientstate_delta_ticks = 0x174;
constexpr ::std::ptrdiff_t clientstate_last_outgoing_command = 0x4D2C;
constexpr ::std::ptrdiff_t clientstate_net_channel = 0x9C;
constexpr ::std::ptrdiff_t convar_name_hash_table = 0x301A0;
constexpr ::std::ptrdiff_t dwClientState = 0x59F19C;
constexpr ::std::ptrdiff_t dwClientState_GetLocalPlayer = 0x180;
constexpr ::std::ptrdiff_t dwClientState_IsHLTV = 0x4D48;
constexpr ::std::ptrdiff_t dwClientState_Map = 0x28C;
constexpr ::std::ptrdiff_t dwClientState_MapDirectory = 0x188;
constexpr ::std::ptrdiff_t dwClientState_MaxPlayer = 0x388;
constexpr ::std::ptrdiff_t dwClientState_PlayerInfo = 0x52C0;
constexpr ::std::ptrdiff_t dwClientState_State = 0x108;
constexpr ::std::ptrdiff_t dwClientState_ViewAngles = 0x4D90;
constexpr ::std::ptrdiff_t dwEntityList = 0x4E051DC;
constexpr ::std::ptrdiff_t dwForceAttack = 0x3233024;
constexpr ::std::ptrdiff_t dwForceAttack2 = 0x3233030;
constexpr ::std::ptrdiff_t dwForceBackward = 0x3233078;
constexpr ::std::ptrdiff_t dwForceForward = 0x323306C;
constexpr ::std::ptrdiff_t dwForceJump = 0x52C0F50;
constexpr ::std::ptrdiff_t dwForceLeft = 0x3233084;
constexpr ::std::ptrdiff_t dwForceRight = 0x3233090;
constexpr ::std::ptrdiff_t dwGameDir = 0x63AE00;
constexpr ::std::ptrdiff_t dwGameRulesProxy = 0x5334764;
constexpr ::std::ptrdiff_t dwGetAllClasses = 0xE10F84;
constexpr ::std::ptrdiff_t dwGlobalVars = 0x59EE60;
constexpr ::std::ptrdiff_t dwGlowObjectManager = 0x535FCB8;
constexpr ::std::ptrdiff_t dwInput = 0x52627B0;
constexpr ::std::ptrdiff_t dwInterfaceLinkList = 0x99F7D4;
constexpr ::std::ptrdiff_t dwLocalPlayer = 0xDEF97C;
constexpr ::std::ptrdiff_t dwMouseEnable = 0x523E410;
constexpr ::std::ptrdiff_t dwMouseEnablePtr = 0x523E3E0;
constexpr ::std::ptrdiff_t dwPlayerResource = 0x3231380;
constexpr ::std::ptrdiff_t dwRadarBase = 0x523BCB4;
constexpr ::std::ptrdiff_t dwSensitivity = 0xDF3B98;
constexpr ::std::ptrdiff_t dwSensitivityPtr = 0xDF3B98;
constexpr ::std::ptrdiff_t dwSetClanTag = 0x8DAB0;
constexpr ::std::ptrdiff_t dwViewMatrix = 0x4DF6024;
constexpr ::std::ptrdiff_t dwWeaponTable = 0x526388C;
constexpr ::std::ptrdiff_t dwWeaponTableIndex = 0x326C;
constexpr ::std::ptrdiff_t dwYawPtr = 0xDF3928;
constexpr ::std::ptrdiff_t dwZoomSensitivityRatioPtr = 0xDF9398;
constexpr ::std::ptrdiff_t dwbSendPackets = 0xDD2D2;
constexpr ::std::ptrdiff_t dwppDirect3DDevice9 = 0xA62C0;
constexpr ::std::ptrdiff_t find_hud_element = 0x5BC13A40;
constexpr ::std::ptrdiff_t force_update_spectator_glow = 0x3DD09A;
constexpr ::std::ptrdiff_t interface_engine_cvar = 0x3FA9C;
constexpr ::std::ptrdiff_t is_c4_owner = 0x3EA8A0;
constexpr ::std::ptrdiff_t m_bDormant = 0xED;
constexpr ::std::ptrdiff_t m_bIsLocalPlayer = 0x3628;
constexpr ::std::ptrdiff_t m_flSpawnTime = 0x103C0;
constexpr ::std::ptrdiff_t m_pStudioHdr = 0x2950;
constexpr ::std::ptrdiff_t m_pitchClassPtr = 0x523E308;
constexpr ::std::ptrdiff_t m_yawClassPtr = 0xDF3928;
constexpr ::std::ptrdiff_t model_ambient_min = 0x5A1194;
constexpr ::std::ptrdiff_t set_abs_angles = 0x1EA950;
constexpr ::std::ptrdiff_t set_abs_origin = 0x1EA790;
```

</details>

# Weapons
<details>

<summary>Weapon IDs</summary>

```
    	WEAPON_DEAGLE = 1,
    	WEAPON_ELITE = 2,
    	WEAPON_FIVESEVEN = 3,
    	WEAPON_GLOCK = 4,
    	WEAPON_AK47 = 7,
    	WEAPON_AUG = 8,
    	WEAPON_AWP = 9,
    	WEAPON_FAMAS = 10,
    	WEAPON_G3SG1 = 11,
    	WEAPON_GALILAR = 13,
    	WEAPON_M249 = 14,
    	WEAPON_M4A1 = 16,
    	WEAPON_MAC10 = 17,
    	WEAPON_P90 = 19,
    	WEAPON_MP5SD = 23,
    	WEAPON_UMP45 = 24,
    	WEAPON_XM1014 = 25,
    	WEAPON_BIZON = 26,
    	WEAPON_MAG7 = 27,
    	WEAPON_NEGEV = 28,
    	WEAPON_SAWEDOFF = 29,
    	WEAPON_TEC9 = 30,
    	WEAPON_TASER = 31,
    	WEAPON_HKP2000 = 32,
    	WEAPON_MP7 = 33,
    	WEAPON_MP9 = 34,
    	WEAPON_NOVA = 35,
    	WEAPON_P250 = 36,
    	WEAPON_SHIELD = 37,
    	WEAPON_SCAR20 = 38,
    	WEAPON_SG556 = 39,
    	WEAPON_SSG08 = 40,
    	WEAPON_KNIFEGG = 41,
    	WEAPON_KNIFE = 42,
    	WEAPON_FLASHBANG = 43,
    	WEAPON_HEGRENADE = 44,
    	WEAPON_SMOKEGRENADE = 45,
    	WEAPON_MOLOTOV = 46,
    	WEAPON_DECOY = 47,
    	WEAPON_INCGRENADE = 48,
    	WEAPON_C4 = 49,
    	WEAPON_HEALTHSHOT = 57,
    	WEAPON_KNIFE_T = 59,
    	WEAPON_M4A1_SILENCER = 60,
    	WEAPON_USP_SILENCER = 61,
    	WEAPON_CZ75A = 63,
    	WEAPON_REVOLVER = 64,
    	WEAPON_TAGRENADE = 68,
    	WEAPON_FISTS = 69,
    	WEAPON_BREACHCHARGE = 70,
    	WEAPON_TABLET = 72,
    	WEAPON_MELEE = 74,
    	WEAPON_AXE = 75,
    	WEAPON_HAMMER = 76,
    	WEAPON_SPANNER = 78,
    	WEAPON_KNIFE_GHOST = 80,
    	WEAPON_FIREBOMB = 81,
    	WEAPON_DIVERSION = 82,
    	WEAPON_FRAG_GRENADE = 83,
    	WEAPON_SNOWBALL = 84,
    	WEAPON_BUMPMINE = 85,
    	WEAPON_BAYONET = 500,
    	WEAPON_KNIFE_FLIP = 505,
    	WEAPON_KNIFE_GUT = 506,
    	WEAPON_KNIFE_KARAMBIT = 507,
    	WEAPON_KNIFE_M9_BAYONET = 508,
    	WEAPON_KNIFE_TACTICAL = 509,
    	WEAPON_KNIFE_FALCHION = 512,
    	WEAPON_KNIFE_SURVIVAL_BOWIE = 514,
    	WEAPON_KNIFE_BUTTERFLY = 515,
    	WEAPON_KNIFE_PUSH = 516,
    	WEAPON_KNIFE_URSUS = 519,
    	WEAPON_KNIFE_GYPSY_JACKKNIFE = 520,
    	WEAPON_KNIFE_STILETTO = 522,
    	WEAPON_KNIFE_WIDOWMAKER = 523,
    	STUDDED_BLOODHOUND_GLOVES = 5027,
    	T_GLOVES = 5028,
    	CT_GLOVES = 5029,
    	SPORTY_GLOVES = 5030,
    	SLICK_GLOVES = 5031,
    	LEATHER_HANDWRAPS = 5032,
    	MOTORCYCLE_GLOVES = 5033,
    	SPECIALIST_GLOVES = 5034,
    	STUDDED_HYDRA_GLOVES = 5035,
```
</details>

# Skins
<details>

<summary>Skin IDs</summary>

Go to [csgostash](https://csgostash.com/)<br>
Find a skin you want.<br>
Click on it and there should be a *"Finish Catalog"* property listed to the right.<br>
That is the Skin ID.<br>

Alternatively <br>
You can go copy the whole list [here](https://totalcsgo.com/codes/skin-ids)<br>
<details>
<summary>More Resources</summary>
  
> [!IMPORTANT]
> The Kilowatt case might not work on CS:GO since it was released for CS2 right after Valve ceased supporting CS:GO that New Year.
>
<br>

![G3SG1](https://github.com/PETROUNKNOWN/SkinChanger/assets/112712989/0ee928ac-298d-4529-99b7-ba526b874562)
![Five-SeveN](https://github.com/PETROUNKNOWN/SkinChanger/assets/112712989/ff90569c-50bc-45ea-adff-0465f84ef0e9)
![FAMAS](https://github.com/PETROUNKNOWN/SkinChanger/assets/112712989/38c779a2-099b-4d9d-bc75-4c562f261866)
![DEAGLE](https://github.com/PETROUNKNOWN/SkinChanger/assets/112712989/894f9b0f-500a-4d49-8265-1e60f98997b8)
![CZ75](https://github.com/PETROUNKNOWN/SkinChanger/assets/112712989/ecc8ef49-f2fe-469d-b368-c3ec14f66728)
![BERETTAS](https://github.com/PETROUNKNOWN/SkinChanger/assets/112712989/3f5b148b-62cc-4223-8c06-34353cdd1a3b)
![AWP](https://github.com/PETROUNKNOWN/SkinChanger/assets/112712989/48631524-eced-4b4f-9c2d-68695ce2891e)
![AUG](https://github.com/PETROUNKNOWN/SkinChanger/assets/112712989/40de9fab-4616-40e0-a846-736c7c6e8a65)
![AK-47](https://github.com/PETROUNKNOWN/SkinChanger/assets/112712989/20e55530-c8c2-41d5-924c-d18568d0c3bd)
![XM1014](https://github.com/PETROUNKNOWN/SkinChanger/assets/112712989/e1a14cbf-f362-4329-8a11-1b8edb81b1c0)
![USP-S](https://github.com/PETROUNKNOWN/SkinChanger/assets/112712989/2bc4d0d9-9093-4d02-9b15-5b510dfcd753)
![UMP-45](https://github.com/PETROUNKNOWN/SkinChanger/assets/112712989/7b65b7e5-b53d-4637-a040-4abb0cac7075)
![TEC-9](https://github.com/PETROUNKNOWN/SkinChanger/assets/112712989/e7163334-4358-4c1d-a972-a3c5e4081c34)
![SSG 08](https://github.com/PETROUNKNOWN/SkinChanger/assets/112712989/9fe03179-98c5-40ad-8938-28ccc29b6073)
![SG 553](https://github.com/PETROUNKNOWN/SkinChanger/assets/112712989/d885cb61-2ceb-4d8e-ba8b-edb3e309bb6b)
![SCAR-20](https://github.com/PETROUNKNOWN/SkinChanger/assets/112712989/ea0aa843-d490-465d-b0bb-e6dd3d55bf7b)
![SAWED-OFF](https://github.com/PETROUNKNOWN/SkinChanger/assets/112712989/42f29088-465f-4f89-95f7-d3172152bc09)
![R8](https://github.com/PETROUNKNOWN/SkinChanger/assets/112712989/ca5ad285-2521-4a62-8a38-98c3ddada814)
![PP-BIZON](https://github.com/PETROUNKNOWN/SkinChanger/assets/112712989/17986ae5-2746-41eb-b110-24e2a84529fa)
![P250](https://github.com/PETROUNKNOWN/SkinChanger/assets/112712989/65719b7c-8b42-4862-81be-451e07f559c2)
![P90](https://github.com/PETROUNKNOWN/SkinChanger/assets/112712989/d2bf97bc-85be-4f83-bf6e-dbcfc89cd1a4)
![P2K](https://github.com/PETROUNKNOWN/SkinChanger/assets/112712989/183c3196-1d30-4c01-8f2b-9545b6bc5b42)
![NOVA](https://github.com/PETROUNKNOWN/SkinChanger/assets/112712989/417997f6-1185-4b40-baf7-c9283e6781e1)
![NEGEV](https://github.com/PETROUNKNOWN/SkinChanger/assets/112712989/b3531438-04b9-4f54-97e0-f65097a1da59)
![MP9](https://github.com/PETROUNKNOWN/SkinChanger/assets/112712989/d45e7250-1697-4079-8681-cc6a7a97828d)
![MP7](https://github.com/PETROUNKNOWN/SkinChanger/assets/112712989/cf794041-e2f8-4a17-8cb5-035ab5240237)
![MP5-SD](https://github.com/PETROUNKNOWN/SkinChanger/assets/112712989/5eb40dbd-3c46-4835-ac89-586695980ca5)
![MAG-7](https://github.com/PETROUNKNOWN/SkinChanger/assets/112712989/9b3a5d8f-7b84-419f-85b3-50224f3be28c)
![MAC-10](https://github.com/PETROUNKNOWN/SkinChanger/assets/112712989/823bd8db-2b6a-41d2-92cf-b08717c2dcb5)
![M249](https://github.com/PETROUNKNOWN/SkinChanger/assets/112712989/17c99336-fad9-4424-95e7-f75b9b3f3675)
![M4A4](https://github.com/PETROUNKNOWN/SkinChanger/assets/112712989/79253765-effb-4d50-a7bb-6b84ba5d2ac7)
![M4A1-S](https://github.com/PETROUNKNOWN/SkinChanger/assets/112712989/65222343-a258-4317-8419-3803db4d53f3)
![Kilowatt](https://github.com/PETROUNKNOWN/SkinChanger/assets/112712989/c8211cb7-6fe6-4ae6-b591-0cb3eabe8946)
![GLOCK-18](https://github.com/PETROUNKNOWN/SkinChanger/assets/112712989/c4ade38f-c008-4df2-a2f8-ae6ca5df75b6)
![GALIL AR](https://github.com/PETROUNKNOWN/SkinChanger/assets/112712989/b198a07b-7a10-4f85-9a3f-3912fc1b2fe3)

</details>

</details>












**valve pls return csgo*