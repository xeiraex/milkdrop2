#ifndef _LANG_GUIDS_H_
#define _LANG_GUIDS_H_
#ifdef __cplusplus
extern "C"
{
#endif

// this is just the stringtable id and the
// stringtable block where the guid is stored
#define LANG_DLL_GUID_STRING_ID    65535
#define LANG_DLL_GUID_BLOCK_ID     4096

// this is the stringtable id in winamp.exe's lng file where
// the language of the lang pack is declared.
// the actual string is defined as language_code-country_code
// e.g.
//   en-US - US English
//   en-GB - UK English
#define LANG_PACK_LANG_ID    65534

// this is the indentifiers required as of 5.57+ for the localisation
// 'about page' shown in supporting language packs in the 'about' box
#define LANG_DLL_AUTHOR_HOMEPAGE             65533
#define LANG_DLL_AUTHOR_HOMEPAGE2            65532
#define LANG_DLL_LOCALIZED_HOMEPAGE			 65531
#define LANG_DLL_ABOUT_TRANSLATION_DLG_ID    1378

// this holds all of the guids that will be used in modules lng files
// using these will allow you to make use of the language resources
// between plugins / for 3rd party plugins for compatability support

// {A0099AA7-F980-45cf-818D-64EAA9F4EF4B}
static const GUID WinampLangGUID = 
{ 0xa0099aa7, 0xf980, 0x45cf, { 0x81, 0x8d, 0x64, 0xea, 0xa9, 0xf4, 0xef, 0x4b } };

// {0E844B2A-70E8-4007-A73A-E9C05DB3F06D}
static const GUID WinampALangGUID = 
{ 0xe844b2a, 0x70e8, 0x4007, { 0xa7, 0x3a, 0xe9, 0xc0, 0x5d, 0xb3, 0xf0, 0x6d } };

// {250FAA3C-20CD-49db-A932-67B1C0191B0E}
static const GUID GenHotkeysLangGUID = 
{ 0x250faa3c, 0x20cd, 0x49db, { 0xa9, 0x32, 0x67, 0xb1, 0xc0, 0x19, 0x1b, 0xe } };

// {25B50046-5B31-418b-B77E-1B0D140D64ED}
static const GUID GenTrayLangGUID = 
{ 0x25b50046, 0x5b31, 0x418b, { 0xb7, 0x7e, 0x1b, 0xd, 0x14, 0xd, 0x64, 0xed } };

// {3D968813-F245-40ad-8589-5599C754B924}
static const GUID GenMlLangGUID = 
{ 0x3d968813, 0xf245, 0x40ad, { 0x85, 0x89, 0x55, 0x99, 0xc7, 0x54, 0xb9, 0x24 } };

// {A3A1E7C0-761B-4391-A08A-F0D7AF38931C}
static const GUID MlBookmarkLangGUID = 
{ 0xa3a1e7c0, 0x761b, 0x4391, { 0xa0, 0x8a, 0xf0, 0xd7, 0xaf, 0x38, 0x93, 0x1c } };

// {40450D34-E85A-428c-A01C-B2546BF23CE0}
static const GUID MlDashboardLangGUID = 
{ 0x40450d34, 0xe85a, 0x428c, { 0xa0, 0x1c, 0xb2, 0x54, 0x6b, 0xf2, 0x3c, 0xe0 } };

// {168BA411-7E26-4749-98F0-FF02810D9B51}
static const GUID MlADDONSLangGUID = 
{ 0x168ba411, 0x7e26, 0x4749, { 0x98, 0xf0, 0xff, 0x2, 0x81, 0xd, 0x9b, 0x51 } };

// {7F31F590-6602-45c9-B3F8-F61AE05BD1D3}
static const GUID MlNowPlayingLangGUID = 
{ 0x7f31f590, 0x6602, 0x45c9, { 0xb3, 0xf8, 0xf6, 0x1a, 0xe0, 0x5b, 0xd1, 0xd3 } };

// {F8756C00-11D2-4857-8C50-163AE4A57783}
static const GUID MlHistoryLangGUID = 
{ 0xf8756c00, 0x11d2, 0x4857, { 0x8c, 0x50, 0x16, 0x3a, 0xe4, 0xa5, 0x77, 0x83 } };

// {5E766B4F-818E-4f14-9C42-0902B2C571DC}
static const GUID MlPlaylistsLangGUID = 
{ 0x5e766b4f, 0x818e, 0x4f14, { 0x9c, 0x42, 0x9, 0x2, 0xb2, 0xc5, 0x71, 0xdc } };

// {D006C700-557E-43c7-A580-B4C50C56957A}
static const GUID MlOnlineLangGUID = 
{ 0xd006c700, 0x557e, 0x43c7, { 0xa5, 0x80, 0xb4, 0xc5, 0xc, 0x56, 0x95, 0x7a } };

// {5F633543-148D-48cc-B683-DA82F592CF28}
static const GUID MlReplayGainLangGUID = 
{ 0x5f633543, 0x148d, 0x48cc, { 0xb6, 0x83, 0xda, 0x82, 0xf5, 0x92, 0xcf, 0x28 } };

// {699B8BA5-B292-4aba-8047-D46B0DF4E1D6}
static const GUID MlTranscodeLangGUID = 
{ 0x699b8ba5, 0xb292, 0x4aba, { 0x80, 0x47, 0xd4, 0x6b, 0xd, 0xf4, 0xe1, 0xd6 } };

// {34DF1A2D-7EAD-41ab-B1A7-9AFA6DE2AFF1}
static const GUID EncWavLangGUID = 
{ 0x34df1a2d, 0x7ead, 0x41ab, { 0xb1, 0xa7, 0x9a, 0xfa, 0x6d, 0xe2, 0xaf, 0xf1 } };

// {33BC12FD-E7F7-42ec-8FE3-2D8BD3A977C2}
static const GUID EncWMALangGUID = 
{ 0x33bc12fd, 0xe7f7, 0x42ec, { 0x8f, 0xe3, 0x2d, 0x8b, 0xd3, 0xa9, 0x77, 0xc2 } };

// {8FBADBBB-B4D5-47d9-A723-5C8C8E88EE73}
static const GUID EncAACLangGUID = 
{ 0x8fbadbbb, 0xb4d5, 0x47d9, { 0xa7, 0x23, 0x5c, 0x8c, 0x8e, 0x88, 0xee, 0x73 } };

// {F1534ECA-6E64-42c2-9781-812E61154515}
static const GUID EncLameLangGUID = 
{ 0xf1534eca, 0x6e64, 0x42c2, { 0x97, 0x81, 0x81, 0x2e, 0x61, 0x15, 0x45, 0x15 } };

// deprecated enc_flac.dll based on FLAKE
// {5C0BA1EE-5A59-47cc-BC28-5B9F0C5EA1B7}
static const GUID EncFlakeLangGUID = 
{ 0x5c0ba1ee, 0x5a59, 0x47cc, { 0xbc, 0x28, 0x5b, 0x9f, 0xc, 0x5e, 0xa1, 0xb7 } };

// {A23C2B70-C66B-475e-8A67-E0F33FD5BD12}
static const GUID EncVorbisLangGUID = 
{ 0xa23c2b70, 0xc66b, 0x475e, { 0x8a, 0x67, 0xe0, 0xf3, 0x3f, 0xd5, 0xbd, 0x12 } };

// {D40620FB-E44B-47b3-98EE-8E5A089C0C94}
static const GUID tagzLangGUID = 
{ 0xd40620fb, 0xe44b, 0x47b3, { 0x98, 0xee, 0x8e, 0x5a, 0x8, 0x9c, 0xc, 0x94 } };

// {06A3F81D-043D-4b5c-B341-590ED7053492}
static const GUID MlLocalLangGUID = 
{ 0x6a3f81d, 0x43d, 0x4b5c, { 0xb3, 0x41, 0x59, 0xe, 0xd7, 0x5, 0x34, 0x92 } };

// {706549D3-D813-45dd-9A0B-E3793A1B63A8}
static const GUID MlDownloadsLangGUID = 
{ 0x706549d3, 0xd813, 0x45dd, { 0x9a, 0xb, 0xe3, 0x79, 0x3a, 0x1b, 0x63, 0xa8 } };

// {1FF327B2-A41D-4c67-A58A-EB09BA1470D3}
static const GUID MlWireLangGUID = 
{ 0x1ff327b2, 0xa41d, 0x4c67, { 0xa5, 0x8a, 0xeb, 0x9, 0xba, 0x14, 0x70, 0xd3 } };

// {04C986EE-9CE3-4369-820D-A64394C63D60}
static const GUID MlPMPLangGUID = 
{ 0x4c986ee, 0x9ce3, 0x4369, { 0x82, 0xd, 0xa6, 0x43, 0x94, 0xc6, 0x3d, 0x60 } };

// {E553C1A4-5DE2-4838-8000-FDF8DC377DD4}
static const GUID PmpUSBLangGUID = 
{ 0xe553c1a4, 0x5de2, 0x4838, { 0x80, 0x0, 0xfd, 0xf8, 0xdc, 0x37, 0x7d, 0xd4 } };

// {01C3E74C-261E-45e2-AA30-ED4039DCD3A2}
static const GUID PmpP4SLangGUID = 
{ 0x1c3e74c, 0x261e, 0x45e2, { 0xaa, 0x30, 0xed, 0x40, 0x39, 0xdc, 0xd3, 0xa2 } };

// {4F5B2300-19D1-4390-BE04-89019441100B}
static const GUID PmpNJBLangGUID = 
{ 0x4f5b2300, 0x19d1, 0x4390, { 0xbe, 0x4, 0x89, 0x1, 0x94, 0x41, 0x10, 0xb } };

// {B81F32B8-4AA4-4eba-8798-95F13812F638}
static const GUID PmpACTIVESYNCLangGUID = 
{ 0xb81f32b8, 0x4aa4, 0x4eba, { 0x87, 0x98, 0x95, 0xf1, 0x38, 0x12, 0xf6, 0x38 } };

// {C2EE3DA5-B29B-42a0-AB5E-B202393435D6}
static const GUID PmpIPODLangGUID = 
{ 0xc2ee3da5, 0xb29b, 0x42a0, { 0xab, 0x5e, 0xb2, 0x2, 0x39, 0x34, 0x35, 0xd6 } };

// {2C913A2F-CD49-40a1-8F1A-8EF7C2A22229}
static const GUID MlDiscLangGUID = 
{ 0x2c913a2f, 0xcd49, 0x40a1, { 0x8f, 0x1a, 0x8e, 0xf7, 0xc2, 0xa2, 0x22, 0x29 } };

// {1A710E67-5180-49ac-8102-105856ED0A2F}
static const GUID OutDiskLangGUID = 
{ 0x1a710e67, 0x5180, 0x49ac, { 0x81, 0x2, 0x10, 0x58, 0x56, 0xed, 0xa, 0x2f } };

// {858FBF71-9878-4d86-BFDD-8FEA8361238C}
static const GUID VisNFSFLangGUID = 
{ 0x858fbf71, 0x9878, 0x4d86, { 0xbf, 0xdd, 0x8f, 0xea, 0x83, 0x61, 0x23, 0x8c } };

// {BE608673-B723-4a59-9EBA-52DC77109E10}
static const GUID VisAVSLangGUID = 
{ 0xbe608673, 0xb723, 0x4a59, { 0x9e, 0xba, 0x52, 0xdc, 0x77, 0x10, 0x9e, 0x10 } };

// {226275F6-3318-4d4b-A6B3-5B1B5B077BE8}
static const GUID VisMilkdropLangGUID = 
{ 0x226275f6, 0x3318, 0x4d4b, { 0xa6, 0xb3, 0x5b, 0x1b, 0x5b, 0x7, 0x7b, 0xe8 } };

// {C5D175F1-E4E4-47ee-B85C-4EDC6B026A35}
static const GUID VisMilk2LangGUID = 
{ 0xc5d175f1, 0xe4e4, 0x47ee, { 0xb8, 0x5c, 0x4e, 0xdc, 0x6b, 0x2, 0x6a, 0x35 } };

// {87DCEEC2-1EC3-4c59-BED4-E8F42232C7D8}
static const GUID InCDDALangGUID = 
{ 0x87dceec2, 0x1ec3, 0x4c59, { 0xbe, 0xd4, 0xe8, 0xf4, 0x22, 0x32, 0xc7, 0xd8 } };

// {20395FD0-AC67-446d-B8D0-D88BFD3174FC}
static const GUID IndshowLangGUID = 
{ 0x20395fd0, 0xac67, 0x446d, { 0xb8, 0xd0, 0xd8, 0x8b, 0xfd, 0x31, 0x74, 0xfc } };

// {9475116B-F8C4-4dff-BC19-9601B238557D}
static const GUID InFlacLangGUID = 
{ 0x9475116b, 0xf8c4, 0x4dff, { 0xbc, 0x19, 0x96, 0x1, 0xb2, 0x38, 0x55, 0x7d } };

// {EA1C197A-D227-474c-A9FD-1C79DE722BDD}
static const GUID InLineInLangGUID = 
{ 0xea1c197a, 0xd227, 0x474c, { 0xa9, 0xfd, 0x1c, 0x79, 0xde, 0x72, 0x2b, 0xdd } };

// {96374982-0142-41a5-AEDE-244505C45D30}
static const GUID InWavLangGUID = 
{ 0x96374982, 0x142, 0x41a5, { 0xae, 0xde, 0x24, 0x45, 0x5, 0xc4, 0x5d, 0x30 } };

// {5C5BCA4E-279E-4867-8E24-58C8B186959A}
static const GUID InVorbisLangGUID = 
{ 0x5c5bca4e, 0x279e, 0x4867, { 0x8e, 0x24, 0x58, 0xc8, 0xb1, 0x86, 0x95, 0x9a } };

// {A786C0B0-69DE-49e2-9461-4F592808B0B3}
static const GUID ndeLangGUID = 
{ 0xa786c0b0, 0x69de, 0x49e2, { 0x94, 0x61, 0x4f, 0x59, 0x28, 0x8, 0xb0, 0xb3 } };

// {11B847DB-29A7-47ac-B386-43B40385B817}
static const GUID InNSVLangGUID = 
{ 0x11b847db, 0x29a7, 0x47ac, { 0xb3, 0x86, 0x43, 0xb4, 0x3, 0x85, 0xb8, 0x17 } };

// {5F24DF00-C163-4eaa-AB9D-22F106588C25}
static const GUID MLOrbLangGUID = 
{ 0x5f24df00, 0xc163, 0x4eaa, { 0xab, 0x9d, 0x22, 0xf1, 0x6, 0x58, 0x8c, 0x25 } };

// {0FED0FEE-C995-4499-AB47-E2482336C046}
static const GUID InMidiLangGUID = 
{ 0xfed0fee, 0xc995, 0x4499, { 0xab, 0x47, 0xe2, 0x48, 0x23, 0x36, 0xc0, 0x46 } };

// {F30C75C1-D284-4cd5-9CED-2BD9E7869438}
static const GUID InMp4LangGUID = 
{ 0xf30c75c1, 0xd284, 0x4cd5, { 0x9c, 0xed, 0x2b, 0xd9, 0xe7, 0x86, 0x94, 0x38 } };

// {CD3EEF98-011C-4213-BC16-3F91C937B9B8}
static const GUID InMp3LangGUID = 
{ 0xcd3eef98, 0x11c, 0x4213, { 0xbc, 0x16, 0x3f, 0x91, 0xc9, 0x37, 0xb9, 0xb8 } };

// {A1A39D49-671A-4c2f-AE42-BEA134EAF6A9}
static const GUID InModLangGUID = 
{ 0xa1a39d49, 0x671a, 0x4c2f, { 0xae, 0x42, 0xbe, 0xa1, 0x34, 0xea, 0xf6, 0xa9 } };

// {4B567AEB-89CE-4881-9D7D-B31D7B65979A}
static const GUID DspSpsLangGUID = 
{ 0x4b567aeb, 0x89ce, 0x4881, { 0x9d, 0x7d, 0xb3, 0x1d, 0x7b, 0x65, 0x97, 0x9a } };

// {004A91D9-CCD6-44e5-973A-4B7045C4662B}
static const GUID OutWaveLangGUID = 
{ 0x4a91d9, 0xccd6, 0x44e5, { 0x97, 0x3a, 0x4b, 0x70, 0x45, 0xc4, 0x66, 0x2b } };

// {A812F3D3-633B-4af6-8749-3BA75290BAC0}
static const GUID OutDSLangGUID = 
{ 0xa812f3d3, 0x633b, 0x4af6, { 0x87, 0x49, 0x3b, 0xa7, 0x52, 0x90, 0xba, 0xc0 } };

// {C5B78F09-3222-4a64-AA98-F1ABC5A9E355}
static const GUID InWmLangGUID = 
{ 0xc5b78f09, 0x3222, 0x4a64, { 0xaa, 0x98, 0xf1, 0xab, 0xc5, 0xa9, 0xe3, 0x55 } };

// {C14FAE1D-B410-459f-B008-1A8BE3633000}
static const GUID burnlibLangGUID = 
{ 0xc14fae1d, 0xb410, 0x459f, { 0xb0, 0x8, 0x1a, 0x8b, 0xe3, 0x63, 0x30, 0x0 } };

// {ACD05A75-030B-4943-A100-540DAD98FB00}
static const GUID GenFFLangGUID = 
{ 0xacd05a75, 0x30b, 0x4943, { 0xa1, 0x0, 0x54, 0xd, 0xad, 0x98, 0xfb, 0x0 } };

// {0CE0174D-8334-479e-B322-9D80D48FC74D}
static const GUID MlPlgLangGUID = 
{ 0xce0174d, 0x8334, 0x479e, { 0xb3, 0x22, 0x9d, 0x80, 0xd4, 0x8f, 0xc7, 0x4d } };

// {9E398E5F-EDEC-4dd8-A40D-E29B385A88C0}
static const GUID playlistLangGUID = 
{ 0x9e398e5f, 0xedec, 0x4dd8, { 0xa4, 0xd, 0xe2, 0x9b, 0x38, 0x5a, 0x88, 0xc0 } };

// {092A97EF-7DC0-41a7-80D1-90DEEB18F12D}
static const GUID GenCrasherLangGUID = 
{ 0x92a97ef, 0x7dc0, 0x41a7, { 0x80, 0xd1, 0x90, 0xde, 0xeb, 0x18, 0xf1, 0x2d } };

// {D8DBA660-90BD-431d-8F4E-189D6ACB407E}
static const GUID MlAutoTagLangGUID = 
{ 0xd8dba660, 0x90bd, 0x431d, { 0x8f, 0x4e, 0x18, 0x9d, 0x6a, 0xcb, 0x40, 0x7e } };

// {EC959D43-9122-4807-B928-7B46207AFA49}
static const GUID InFlvLangGUID = 
{ 0xec959d43, 0x9122, 0x4807, { 0xb9, 0x28, 0x7b, 0x46, 0x20, 0x7a, 0xfa, 0x49 } };

// {2430A7AC-317D-4d64-B33C-E1452A6384A2}
static const GUID InSwfLangGUID = 
{ 0x2430a7ac, 0x317d, 0x4d64, { 0xb3, 0x3c, 0xe1, 0x45, 0x2a, 0x63, 0x84, 0xa2 } };

// {22661553-8D22-4012-8D3B-0FF8FE57A9ED}
static const GUID MlImpexLangGUID = 
{ 0x22661553, 0x8d22, 0x4012, { 0x8d, 0x3b, 0xf, 0xf8, 0xfe, 0x57, 0xa9, 0xed } };

// {73760073-560C-433b-BC59-3FCC94CDEA4A}
static const GUID EncFlacLangGUID = 
{ 0x73760073, 0x560c, 0x433b, { 0xbc, 0x59, 0x3f, 0xcc, 0x94, 0xcd, 0xea, 0x4a } };

// {95C65BA3-3C34-40ec-AE74-8D2C60AAE3C8}
static const GUID authLangGUID = 
{ 0x95c65ba3, 0x3c34, 0x40ec, { 0xae, 0x74, 0x8d, 0x2c, 0x60, 0xaa, 0xe3, 0xc8 } };

// {CA36E14A-3742-4edc-A40F-2BC87F26B347}
static const GUID InAviLangGUID = 
{ 0xca36e14a, 0x3742, 0x4edc, { 0xa4, 0xf, 0x2b, 0xc8, 0x7f, 0x26, 0xb3, 0x47 } };

// {5BDA8055-292D-4fcd-8404-884C2A34A8F9}
static const GUID InMkvLangGUID = 
{ 0x5bda8055, 0x292d, 0x4fcd, { 0x84, 0x4, 0x88, 0x4c, 0x2a, 0x34, 0xa8, 0xf9 } };

// {0233DC7B-7060-43e5-8354-D2F2C7C7611D}
static const GUID GenMudLangGUID = 
{ 0x233dc7b, 0x7060, 0x43e5, { 0x83, 0x54, 0xd2, 0xf2, 0xc7, 0xc7, 0x61, 0x1d } };

// {DCCF5A41-D16B-452b-8B7A-CFCA3360D8E8}
static const GUID omBrowserLangGUID = 
{ 0xdccf5a41, 0xd16b, 0x452b, { 0x8b, 0x7a, 0xcf, 0xca, 0x33, 0x60, 0xd8, 0xe8 } };

// Winamp Android plugin (pmp_android.dll)
// {EBFF6E00-39D8-45e6-B3EC-E3B07A45E6B0}
static const GUID PmpAndroidLangGUID = 
{ 0xebff6e00, 0x39d8, 0x45e6, { 0xb3, 0xec, 0xe3, 0xb0, 0x7a, 0x45, 0xe6, 0xb0 } };

// Winamp Wifi plugin (pmp_wifi.dll)
// {3066887B-CA40-4683-897F-4416FE349D7E}
static const GUID PmpWifiLangGUID = 
{ 0x3066887b, 0xca40, 0x4683, { 0x89, 0x7f, 0x44, 0x16, 0xfe, 0x34, 0x9d, 0x7e } };

// Fraunhofer AAC Encoder plugin (enc_fhgaac.dll)
// {E1763EF4-08AD-44a3-914A-8302748AB975}
static const GUID EncFhgAacLangGUID = 
{ 0xe1763ef4, 0x8ad, 0x44a3, { 0x91, 0x4a, 0x83, 0x2, 0x74, 0x8a, 0xb9, 0x75 } };

// Nullsoft Ogg Demuxer (in_ogg.dll)
// {90B01366-39C1-47b2-99DC-BBAE2D4DC5BF}
static const GUID InOggLangGUID = 
{ 0x90b01366, 0x39c1, 0x47b2, { 0x99, 0xdc, 0xbb, 0xae, 0x2d, 0x4d, 0xc5, 0xbf } };

// Winamp Cloud plugin (ml_cloud.dll)
// {0253CD84-4BB1-415b-B95B-B13EBD7EA6FD}
static const GUID MlCloudLangGUID = 
{ 0x253cd84, 0x4bb1, 0x415b, { 0xb9, 0x5b, 0xb1, 0x3e, 0xbd, 0x7e, 0xa6, 0xfd } };

// Winamp Cloud Device plugin (pmp_cloud.dll)
// {5F99429F-43B0-4544-ABA0-DE5D9DA65283}
static const GUID PmpCloudLangGUID = 
{ 0x5f99429f, 0x43b0, 0x4544, { 0xab, 0xa0, 0xde, 0x5d, 0x9d, 0xa6, 0x52, 0x83 } };


/*
** These are guids for known 3rd party lng files
*/

// WavPack Input plugin (in_wv.dll)
// {6DE2E465-690E-4df1-B6E2-2A9B33ED3DBB}
static const GUID InWvLangGuid = 
{ 0x6de2e465, 0x690e, 0x4df1, { 0xb6, 0xe2, 0x2a, 0x9b, 0x33, 0xed, 0x3d, 0xbb } };

// Nullsoft Waveform Wrapper plugin (in_wav.dll)
// {1CED00E8-4B1B-4e10-A188-9A7C6BBEB421}
static const GUID InWavLangGuid = 
{ 0x1ced00e8, 0x4b1b, 0x4e10, { 0xa1, 0x88, 0x9a, 0x7c, 0x6b, 0xbe, 0xb4, 0x21 } };

// Jump To File Extra (JTFE) plugin (gen_jumpex.dll)
// Note: this used to be {243355FE-8B16-48d2-89C3-FD80B3902875} but was changed with
//       v1.1 (the build in 5.58) due to mass of changes to the file to ensure that
//       this will work correctly if an old / partial file is present in the langpack
// {4693FA7D-2055-4b36-A239-0AD998B5A884}
static const GUID GenJTFELangGUID = 
{ 0x4693fa7d, 0x2055, 0x4b36, { 0xa2, 0x39, 0xa, 0xd9, 0x98, 0xb5, 0xa8, 0x84 } };

// Time Restore & Autoplay (TRAP) plugin (gen_timerestore.dll)
// {75854C46-1F1A-4fae-B3FA-EEA6B253490E}
static const GUID GenTRAPLangGUID = 
{ 0x75854c46, 0x1f1a, 0x4fae, { 0xb3, 0xfa, 0xee, 0xa6, 0xb2, 0x53, 0x49, 0xe } };

// Playlist File Remover (PLFR) plugin (gen_play_remove.dll)
// {58D8276F-12DD-44a7-A930-AA336BC8BA9A}
static const GUID GenPLFRLangGUID = 
{ 0x58d8276f, 0x12dd, 0x44a7, { 0xa9, 0x30, 0xaa, 0x33, 0x6b, 0xc8, 0xba, 0x9a } };

// Skin Manager plugin (gen_skinmanager.dll)
// {D877C116-0201-44b2-A003-335C0600BF7A}
static const GUID GenSkinManagerGUID = 
{ 0xd877c116, 0x201, 0x44b2, { 0xa0, 0x3, 0x33, 0x5c, 0x6, 0x0, 0xbf, 0x7a } };

// Playlist Undo plugin (gen_undo.dll)
// {3050F3A7-DADB-459f-900A-A8A224B7F32D}
static const GUID GenUndoLangGUID = 
{ 0x3050f3a7, 0xdadb, 0x459f, { 0x90, 0xa, 0xa8, 0xa2, 0x24, 0xb7, 0xf3, 0x2d } };

// Playlist Separator plugin (in_text.dll)
// {505CAF53-D00E-4580-AA67-B31DEA6FE946}
static const GUID InTextLangGUID = 
{ 0x505caf53, 0xd00e, 0x4580, { 0xaa, 0x67, 0xb3, 0x1d, 0xea, 0x6f, 0xe9, 0x46 } };

// One for Nunz plugin (gen_nunzio.dll)
// {CB659857-7468-40ef-BC51-844449253780}
static const GUID GenOne4NunzLangGUID = 
{ 0xcb659857, 0x7468, 0x40ef, { 0xbc, 0x51, 0x84, 0x44, 0x49, 0x25, 0x37, 0x80 } };

// Save File As plugin (gen_saveas.dll)
// {71174948-4965-4f61-90F5-E53FF30E6578}
static const GUID GenSaveAsLangGUID = 
{ 0x71174948, 0x4965, 0x4f61, { 0x90, 0xf5, 0xe5, 0x3f, 0xf3, 0xe, 0x65, 0x78 } };

// Yar-matey! Playlist Copier plugin (gen_yar.dll)
// {9725C8BF-B577-4d72-93EF-5FB41D88FFC2}
static const GUID GenYarLangGUID = 
{ 0x9725c8bf, 0xb577, 0x4d72, { 0x93, 0xef, 0x5f, 0xb4, 0x1d, 0x88, 0xff, 0xc2 } };

// Album Art plugin (gen_classicart.dll)
// {EAD1E933-6D75-4c2c-B9C4-B4D7F06B7D8D}
static const GUID GenClasicArtGUID = 
{ 0xead1e933, 0x6d75, 0x4c2c, { 0xb9, 0xc4, 0xb4, 0xd7, 0xf0, 0x6b, 0x7d, 0x8d } };

// Windows 7 Taskbar Integration plugin (gen_win7shell.dll)
// {7204A532-5D37-415d-B431-272C953B7459}
static const GUID GenWin7ShellLangGUID = 
{ 0x7204a532, 0x5d37, 0x415d, { 0xb4, 0x31, 0x27, 0x2c, 0x95, 0x3b, 0x74, 0x59 } };

// Find File on Disk plugin (gen_find_on_disk.dll)
// {8CCF206C-1EA0-484e-88A3-943B4C4AF272}
static const GUID GenFFODLangGUID = 
{ 0x8ccf206c, 0x1ea0, 0x484e, { 0x88, 0xa3, 0x94, 0x3b, 0x4c, 0x4a, 0xf2, 0x72 } };

// ML Bookmark Categoriser plugin (ml_bkmk.dll)
// {C3BC5F81-B400-4c64-BCC5-3B758D6BE2E1}
static const GUID MlBkCatLangGUID = 
{ 0xc3bc5f81, 0xb400, 0x4c64, { 0xbc, 0xc5, 0x3b, 0x75, 0x8d, 0x6b, 0xe2, 0xe1 } };

// Lite'n Winamp Preferences plugin (gen_nopro.dll)
// {E6C98DDD-FC99-4ccc-B845-79A81B8C1959}
static const GUID GenNoProLangGUID = 
{ 0xe6c98ddd, 0xfc99, 0x4ccc, { 0xb8, 0x45, 0x79, 0xa8, 0x1b, 0x8c, 0x19, 0x59 } };

// ML Enqueue & Play plugin (ml_enqplay.dll)
// {0DF6B872-74C3-4236-BE78-E1EAE665C62D}
static const GUID MlEnqPlayLangGUID = 
{ 0xdf6b872, 0x74c3, 0x4236, { 0xbe, 0x78, 0xe1, 0xea, 0xe6, 0x65, 0xc6, 0x2d } };

// YMAMP (in_ym.dll)
// {C5F9EFFA-4727-4075-9017-A6BAE72B848C}
static const GUID InYMAMPLangGUID = 
{ 0xc5f9effa, 0x4727, 0x4075, { 0x90, 0x17, 0xa6, 0xba, 0xe7, 0x2b, 0x84, 0x8c } };

// SNESAmp wrapper (in_snes.dll + in_snes.trb + in_snes_trb.lng)
// {7B2084F6-B7A7-449b-A133-12F1916F188E}
static const GUID InSNESWrapperLangGUID = 
{ 0x7b2084f6, 0xb7a7, 0x449b, { 0xa1, 0x33, 0x12, 0xf1, 0x91, 0x6f, 0x18, 0x8e } };

// View Current File Information Hotkey (gen_wolfgang) plugin
// {E16E2C50-71AB-4188-9193-B9D5FB127F97}
static const GUID GenWolfgangLangGUID = 
{ 0xe16e2c50, 0x71ab, 0x4188, { 0x91, 0x93, 0xb9, 0xd5, 0xfb, 0x12, 0x7f, 0x97 } };

// Mute Hotkey (gen_mute) plugin
// {E87B8C7F-51DA-442c-BB2A-D5F941318853}
static const GUID GenMuteLangGUID = 
{ 0xe87b8c7f, 0x51da, 0x442c, { 0xbb, 0x2a, 0xd5, 0xf9, 0x41, 0x31, 0x88, 0x53 } };

// Play Random Song Hotkey (gen_prs) plugin
// {1112230B-6928-4f20-BD0E-F559FE6AD66E}
static const GUID GenPRSLangGUID = 
{ 0x1112230b, 0x6928, 0x4f20, { 0xbd, 0xe, 0xf5, 0x59, 0xfe, 0x6a, 0xd6, 0x6e } };

// Randomise Playlist Hotkey (gen_grp) plugin
// {554151CC-ADEC-4bdc-8A96-7812BF69058D}
static const GUID GenRandPLLangGUID = 
{ 0x554151cc, 0xadec, 0x4bdc, { 0x8a, 0x96, 0x78, 0x12, 0xbf, 0x69, 0x5, 0x8d } };

// Clear Current Playlist Hotkey (gen_gcp) plugin
// {1C71FF32-D2E1-403b-B39C-897AF7F4B4AE}
static const GUID GenCleardPLLangGUID = 
{ 0x1c71ff32, 0xd2e1, 0x403b, { 0xb3, 0x9c, 0x89, 0x7a, 0xf7, 0xf4, 0xb4, 0xae } };

// EQ Hotkeys (gen_eq_hotkeys) plugin
// {4EA319B6-955A-4519-807E-A36EEDDC6224}
static const GUID GenEQGHKLangGUID = 
{ 0x4ea319b6, 0x955a, 0x4519, { 0x80, 0x7e, 0xa3, 0x6e, 0xed, 0xdc, 0x62, 0x24 } };

// Auto EQ (gen_autoeq) plugin
// {5A2E5855-239A-44a6-A49B-1F495BBFD0D6}
static const GUID GenAutoEQLangGUID = 
{ 0x5a2e5855, 0x239a, 0x44a6, { 0xa4, 0x9b, 0x1f, 0x49, 0x5b, 0xbf, 0xd0, 0xd6 } };

// CD Menu Tweaker (gen_cd_menu.dll)
// {A609C17B-44F3-47d8-9B76-C660FF5D3739}
static const GUID GenCDMenuTweakLangGUID = 
{ 0xa609c17b, 0x44f3, 0x47d8, { 0x9b, 0x76, 0xc6, 0x60, 0xff, 0x5d, 0x37, 0x39 } };

// Three Mode Repeat (gen_3mode.dll)
// {81EE2A10-80E9-4d22-B363-AEA820AE988F}
static const GUID Gen3ModeLangGUID = 
{ 0x81ee2a10, 0x80e9, 0x4d22, { 0xb3, 0x63, 0xae, 0xa8, 0x20, 0xae, 0x98, 0x8f } };

// Taskbar Text Mod (gen_ttm.dll)
// {BBFD3662-DBDF-417a-AAAC-23914D55F24B}
static const GUID GenTTMLangGUID = 
{ 0xbbfd3662, 0xdbdf, 0x417a, { 0xaa, 0xac, 0x23, 0x91, 0x4d, 0x55, 0xf2, 0x4b } };

// OS Pos Restorer (gen_os_diag.dll)
// {B5A3AD19-2180-45d7-AFFE-80D2B7575CD1}
static const GUID GenOSDiagLangGUID = 
{ 0xb5a3ad19, 0x2180, 0x45d7, { 0xaf, 0xfe, 0x80, 0xd2, 0xb7, 0x57, 0x5c, 0xd1 } };

// Shuffle Restorer (gen_shuffle_restorer.dll)
// {B13ED906-B8E9-4753-B03F-351B05A6E250}
static const GUID GenShuffleRestorerLangGUID = 
{ 0xb13ed906, 0xb8e9, 0x4753, { 0xb0, 0x3f, 0x35, 0x1b, 0x5, 0xa6, 0xe2, 0x50 } };

// Shuffle Change Blocker (gen_shufblock.dll)
// {FCCFABF2-6EF3-4651-A43C-F7CA38176889}
static const GUID GenShuffleBlockerLangGUID = 
{ 0xfccfabf2, 0x6ef3, 0x4651, { 0xa4, 0x3c, 0xf7, 0xca, 0x38, 0x17, 0x68, 0x89 } };

// Single Click 'n' Play (gen_singleclick.dll)
// {AF67A1E2-8827-4fa3-9F9F-3A3DE2886022}
static const GUID GenSingleClickLangGUID = 
{ 0xaf67a1e2, 0x8827, 0x4fa3, { 0x9f, 0x9f, 0x3a, 0x3d, 0xe2, 0x88, 0x60, 0x22 } };

// No Minimise (gen_no_min.dll)
// {8BCF7C51-6F88-455f-88FD-0B6911650997}
static const GUID GenNoMinimiseLangGUID = 
{ 0x8bcf7c51, 0x6f88, 0x455f, { 0x88, 0xfd, 0xb, 0x69, 0x11, 0x65, 0x9, 0x97 } };

// Repeater (gen_repeater.dll)
// {1C4C8774-8BBC-4f11-851E-936BF5C85E96}
static const GUID GenRepeaterLangGUID = 
{ 0x1c4c8774, 0x8bbc, 0x4f11, { 0x85, 0x1e, 0x93, 0x6b, 0xf5, 0xc8, 0x5e, 0x96 } };

// Alt Close (gen_alt_close.dll)
// {0FD70024-FA0E-4f4f-A0D4-CD560913C146}
static const GUID GenAltCloseLangGUID = 
{ 0xfd70024, 0xfa0e, 0x4f4f, { 0xa0, 0xd4, 0xcd, 0x56, 0x9, 0x13, 0xc1, 0x46 } };

// ML Exporter (ml_exporter.dll)
// {3B441F40-E8E9-46bf-B399-556FB6CD4295}
static const GUID MLExporterLangGUID = 
{ 0x3b441f40, 0xe8e9, 0x46bf, { 0xb3, 0x99, 0x55, 0x6f, 0xb6, 0xcd, 0x42, 0x95 } };

// Silence Detector DSP (dsp_silence_detect.dll)
// {15CCEBE6-C1F5-4246-A7B0-A6E66025C01C}
static const GUID DspSilenceDetectLangGUID = 
{ 0x15ccebe6, 0xc1f5, 0x4246, { 0xa7, 0xb0, 0xa6, 0xe6, 0x60, 0x25, 0xc0, 0x1c } };

// Skinned Preferences (gen_prefs_skin.dll)
// {AE99B23F-0E51-4a99-9AB0-21AEA7B4B3CA}
static const GUID GenSkinPrefsLangGUID = 
{ 0xae99b23f, 0xe51, 0x4a99, { 0x9a, 0xb0, 0x21, 0xae, 0xa7, 0xb4, 0xb3, 0xca } };

// Jump to Track (gen_jtt.dll)
// {D7D804A3-0794-4761-B43B-4873E5B41873}
static const GUID GenJTTLangGUID = 
{ 0xd7d804a3, 0x794, 0x4761, { 0xb4, 0x3b, 0x48, 0x73, 0xe5, 0xb4, 0x18, 0x73 } };

// Jump to Time Extra (gen_jumptotime.dll)
// {9B5DC220-F06A-44cc-909E-D2157513F280}
static const GUID GenJumpToTimeLangGUID = 
{ 0x9b5dc220, 0xf06a, 0x44cc, { 0x90, 0x9e, 0xd2, 0x15, 0x75, 0x13, 0xf2, 0x80 } };

// Jumper (gen_jumper.dll)
// {5D793BF9-0903-4bc9-A78D-D10AB92C7EE5}
static const GUID GenJumperLangGUID = 
{ 0x5d793bf9, 0x903, 0x4bc9, { 0xa7, 0x8d, 0xd1, 0xa, 0xb9, 0x2c, 0x7e, 0xe5 } };

// One Click Show and Hide (gen_one_click.dll)
// {8F3FCFB3-1F5A-43c6-A71E-891026479301}
static const GUID GenOneClickLangGUID = 
{ 0x8f3fcfb3, 0x1f5a, 0x43c6, { 0xa7, 0x1e, 0x89, 0x10, 0x26, 0x47, 0x93, 0x1 } };

// Playback Excluder (gen_exclude.dll)
// {15C44197-EBC5-4cc7-B935-EDE40C9C1AF6}
static const GUID GenPlaybackExluderLangGUID = 
{ 0x15c44197, 0xebc5, 0x4cc7, { 0xb9, 0x35, 0xed, 0xe4, 0xc, 0x9c, 0x1a, 0xf6 } };

// Close to Notification Area (gen_d3x7r0.dll)
// {2A3BC93A-99FF-469a-A94B-576218CF6265}
static const GUID GenCloseToNotAreaLangGUID = 
{ 0x2a3bc93a, 0x99ff, 0x469a, { 0xa9, 0x4b, 0x57, 0x62, 0x18, 0xcf, 0x62, 0x65 } };

// Crop Die (gen_crop_die.dll)
// {9E79066C-58C5-41b9-9361-C1951DA989CD}
static const GUID GenCropDieLangGUID = 
{ 0x9e79066c, 0x58c5, 0x41b9, { 0x93, 0x61, 0xc1, 0x95, 0x1d, 0xa9, 0x89, 0xcd } };

// Play Selected Song Hotkey (gen_gpss.dll)
// {94E8B2B6-685F-484b-9938-EC929F6874EC}
static const GUID GenPlaySelGHKLangGUID = 
{ 0x94e8b2b6, 0x685f, 0x484b, { 0x99, 0x38, 0xec, 0x92, 0x9f, 0x68, 0x74, 0xec } };

// Close After Current (gen_cac.dll)
// {8B6A33FB-A6C5-49a0-A52A-0A0F14913BB2}
static const GUID GenCACLangGUID = 
{ 0x8b6a33fb, 0xa6c5, 0x49a0, { 0xa5, 0x2a, 0xa, 0xf, 0x14, 0x91, 0x3b, 0xb2 } };

// Enhancer Wrapper DSP (dsp_enhancer.dll)
// {78842EF6-CCA2-410c-9E23-C498ABB24373}
static const GUID DspEnhancerLangGUID = 
{ 0x78842ef6, 0xcca2, 0x410c, { 0x9e, 0x23, 0xc4, 0x98, 0xab, 0xb2, 0x43, 0x73 } };

// Shutdown on Close (gen_soc.dll)
// {CAE88304-4A0B-46e5-8B50-BEDFAE00FA6A}
static const GUID GenSOCLangGUID = 
{ 0xcae88304, 0x4a0b, 0x46e5, { 0x8b, 0x50, 0xbe, 0xdf, 0xae, 0x0, 0xfa, 0x6a } };

// Mouse Wheel Blocker (gen_mwblock.dll)
// {C9D6697C-4C7B-4aec-A4C7-45395F0771EA}
static const GUID GenMouseWheelBlockLangGUID = 
{ 0xc9d6697c, 0x4c7b, 0x4aec, { 0xa4, 0xc7, 0x45, 0x39, 0x5f, 0x7, 0x71, 0xea } };

// ML Icon Control plugin (ml_icon_control.dll)
// {4A55AE4D-B3CB-42df-A94E-53588FD761BA}
static const GUID MlIconControlLangGUID= 
{ 0x4a55ae4d, 0xb3cb, 0x42df, { 0xa9, 0x4e, 0x53, 0x58, 0x8f, 0xd7, 0x61, 0xba } };

// File Copier plug-in (gen_copy.dll)
// {A2121FC9-6FC3-4a56-88F2-A36FF64D10EA}
static const GUID GenFileCopierLangGUID = 
{ 0xa2121fc9, 0x6fc3, 0x4a56, { 0x88, 0xf2, 0xa3, 0x6f, 0xf6, 0x4d, 0x10, 0xea } };

// Shoutcast Source DSP plug-in
// Note: this used to be {FD4D4A01-C337-4144-85D7-00678B3B2D2D} but was changed with
//       v2.3.0 due to mass of changes to the file to ensure that this will work
//       correctly if an old / partial file is present in the langpack
// {88380E65-4068-49BA-8EA4-3F2AF12D0A4F}
static const GUID DspShoutcastLangGUID = 
{ 0x88380e65, 0x4068, 0x49ba, { 0x8e, 0xa4, 0x3f, 0x2a, 0xf1, 0x2d, 0xa, 0x4f } };

#ifdef __cplusplus
} // extern "C"
#endif
#endif