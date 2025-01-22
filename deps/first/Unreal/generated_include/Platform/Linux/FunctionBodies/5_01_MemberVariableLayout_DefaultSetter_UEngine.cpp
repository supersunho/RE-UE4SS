if (auto it = UEngine::MemberOffsets.find(STR("TinyFont")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("TinyFont"), 0x30);
}

if (auto it = UEngine::MemberOffsets.find(STR("TinyFontName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("TinyFontName"), 0x38);
}

if (auto it = UEngine::MemberOffsets.find(STR("SmallFont")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("SmallFont"), 0x58);
}

if (auto it = UEngine::MemberOffsets.find(STR("SmallFontName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("SmallFontName"), 0x60);
}

if (auto it = UEngine::MemberOffsets.find(STR("MediumFont")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("MediumFont"), 0x80);
}

if (auto it = UEngine::MemberOffsets.find(STR("MediumFontName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("MediumFontName"), 0x88);
}

if (auto it = UEngine::MemberOffsets.find(STR("LargeFont")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("LargeFont"), 0xa8);
}

if (auto it = UEngine::MemberOffsets.find(STR("LargeFontName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("LargeFontName"), 0xb0);
}

if (auto it = UEngine::MemberOffsets.find(STR("SubtitleFont")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("SubtitleFont"), 0xd0);
}

if (auto it = UEngine::MemberOffsets.find(STR("SubtitleFontName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("SubtitleFontName"), 0xd8);
}

if (auto it = UEngine::MemberOffsets.find(STR("AdditionalFonts")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("AdditionalFonts"), 0xf8);
}

if (auto it = UEngine::MemberOffsets.find(STR("AdditionalFontNames")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("AdditionalFontNames"), 0x108);
}

if (auto it = UEngine::MemberOffsets.find(STR("ConsoleClass")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("ConsoleClass"), 0x118);
}

if (auto it = UEngine::MemberOffsets.find(STR("ConsoleClassName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("ConsoleClassName"), 0x120);
}

if (auto it = UEngine::MemberOffsets.find(STR("GameViewportClientClass")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("GameViewportClientClass"), 0x140);
}

if (auto it = UEngine::MemberOffsets.find(STR("GameViewportClientClassName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("GameViewportClientClassName"), 0x148);
}

if (auto it = UEngine::MemberOffsets.find(STR("LocalPlayerClass")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("LocalPlayerClass"), 0x168);
}

if (auto it = UEngine::MemberOffsets.find(STR("LocalPlayerClassName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("LocalPlayerClassName"), 0x170);
}

if (auto it = UEngine::MemberOffsets.find(STR("WorldSettingsClass")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("WorldSettingsClass"), 0x190);
}

if (auto it = UEngine::MemberOffsets.find(STR("WorldSettingsClassName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("WorldSettingsClassName"), 0x198);
}

if (auto it = UEngine::MemberOffsets.find(STR("NavigationSystemClassName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("NavigationSystemClassName"), 0x1b8);
}

if (auto it = UEngine::MemberOffsets.find(STR("NavigationSystemClass")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("NavigationSystemClass"), 0x1d8);
}

if (auto it = UEngine::MemberOffsets.find(STR("NavigationSystemConfigClassName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("NavigationSystemConfigClassName"), 0x1e0);
}

if (auto it = UEngine::MemberOffsets.find(STR("NavigationSystemConfigClass")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("NavigationSystemConfigClass"), 0x200);
}

if (auto it = UEngine::MemberOffsets.find(STR("AvoidanceManagerClassName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("AvoidanceManagerClassName"), 0x208);
}

if (auto it = UEngine::MemberOffsets.find(STR("AvoidanceManagerClass")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("AvoidanceManagerClass"), 0x228);
}

if (auto it = UEngine::MemberOffsets.find(STR("AIControllerClassName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("AIControllerClassName"), 0x230);
}

if (auto it = UEngine::MemberOffsets.find(STR("PhysicsCollisionHandlerClass")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("PhysicsCollisionHandlerClass"), 0x250);
}

if (auto it = UEngine::MemberOffsets.find(STR("PhysicsCollisionHandlerClassName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("PhysicsCollisionHandlerClassName"), 0x258);
}

if (auto it = UEngine::MemberOffsets.find(STR("GameUserSettingsClassName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("GameUserSettingsClassName"), 0x278);
}

if (auto it = UEngine::MemberOffsets.find(STR("GameUserSettingsClass")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("GameUserSettingsClass"), 0x298);
}

if (auto it = UEngine::MemberOffsets.find(STR("GameUserSettings")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("GameUserSettings"), 0x2a0);
}

if (auto it = UEngine::MemberOffsets.find(STR("LevelScriptActorClass")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("LevelScriptActorClass"), 0x2a8);
}

if (auto it = UEngine::MemberOffsets.find(STR("LevelScriptActorClassName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("LevelScriptActorClassName"), 0x2b0);
}

if (auto it = UEngine::MemberOffsets.find(STR("DefaultBlueprintBaseClassName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("DefaultBlueprintBaseClassName"), 0x2d0);
}

if (auto it = UEngine::MemberOffsets.find(STR("GameSingletonClassName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("GameSingletonClassName"), 0x2f0);
}

if (auto it = UEngine::MemberOffsets.find(STR("GameSingleton")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("GameSingleton"), 0x310);
}

if (auto it = UEngine::MemberOffsets.find(STR("AssetManagerClassName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("AssetManagerClassName"), 0x318);
}

if (auto it = UEngine::MemberOffsets.find(STR("AssetManager")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("AssetManager"), 0x338);
}

if (auto it = UEngine::MemberOffsets.find(STR("DefaultTexture")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("DefaultTexture"), 0x340);
}

if (auto it = UEngine::MemberOffsets.find(STR("DefaultTextureName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("DefaultTextureName"), 0x348);
}

if (auto it = UEngine::MemberOffsets.find(STR("DefaultDiffuseTexture")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("DefaultDiffuseTexture"), 0x368);
}

if (auto it = UEngine::MemberOffsets.find(STR("DefaultDiffuseTextureName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("DefaultDiffuseTextureName"), 0x370);
}

if (auto it = UEngine::MemberOffsets.find(STR("DefaultBSPVertexTexture")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("DefaultBSPVertexTexture"), 0x390);
}

if (auto it = UEngine::MemberOffsets.find(STR("DefaultBSPVertexTextureName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("DefaultBSPVertexTextureName"), 0x398);
}

if (auto it = UEngine::MemberOffsets.find(STR("HighFrequencyNoiseTexture")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("HighFrequencyNoiseTexture"), 0x3b8);
}

if (auto it = UEngine::MemberOffsets.find(STR("HighFrequencyNoiseTextureName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("HighFrequencyNoiseTextureName"), 0x3c0);
}

if (auto it = UEngine::MemberOffsets.find(STR("DefaultBokehTexture")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("DefaultBokehTexture"), 0x3e0);
}

if (auto it = UEngine::MemberOffsets.find(STR("DefaultBokehTextureName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("DefaultBokehTextureName"), 0x3e8);
}

if (auto it = UEngine::MemberOffsets.find(STR("DefaultBloomKernelTexture")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("DefaultBloomKernelTexture"), 0x408);
}

if (auto it = UEngine::MemberOffsets.find(STR("DefaultBloomKernelTextureName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("DefaultBloomKernelTextureName"), 0x410);
}

if (auto it = UEngine::MemberOffsets.find(STR("DefaultFilmGrainTexture")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("DefaultFilmGrainTexture"), 0x430);
}

if (auto it = UEngine::MemberOffsets.find(STR("DefaultFilmGrainTextureName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("DefaultFilmGrainTextureName"), 0x438);
}

if (auto it = UEngine::MemberOffsets.find(STR("WireframeMaterial")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("WireframeMaterial"), 0x458);
}

if (auto it = UEngine::MemberOffsets.find(STR("WireframeMaterialName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("WireframeMaterialName"), 0x460);
}

if (auto it = UEngine::MemberOffsets.find(STR("DebugMeshMaterial")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("DebugMeshMaterial"), 0x470);
}

if (auto it = UEngine::MemberOffsets.find(STR("DebugMeshMaterialName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("DebugMeshMaterialName"), 0x478);
}

if (auto it = UEngine::MemberOffsets.find(STR("EmissiveMeshMaterial")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("EmissiveMeshMaterial"), 0x498);
}

if (auto it = UEngine::MemberOffsets.find(STR("EmissiveMeshMaterialName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("EmissiveMeshMaterialName"), 0x4a0);
}

if (auto it = UEngine::MemberOffsets.find(STR("LevelColorationLitMaterial")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("LevelColorationLitMaterial"), 0x4c0);
}

if (auto it = UEngine::MemberOffsets.find(STR("LevelColorationLitMaterialName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("LevelColorationLitMaterialName"), 0x4c8);
}

if (auto it = UEngine::MemberOffsets.find(STR("LevelColorationUnlitMaterial")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("LevelColorationUnlitMaterial"), 0x4d8);
}

if (auto it = UEngine::MemberOffsets.find(STR("LevelColorationUnlitMaterialName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("LevelColorationUnlitMaterialName"), 0x4e0);
}

if (auto it = UEngine::MemberOffsets.find(STR("LightingTexelDensityMaterial")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("LightingTexelDensityMaterial"), 0x4f0);
}

if (auto it = UEngine::MemberOffsets.find(STR("LightingTexelDensityName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("LightingTexelDensityName"), 0x4f8);
}

if (auto it = UEngine::MemberOffsets.find(STR("ShadedLevelColorationLitMaterial")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("ShadedLevelColorationLitMaterial"), 0x508);
}

if (auto it = UEngine::MemberOffsets.find(STR("ShadedLevelColorationLitMaterialName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("ShadedLevelColorationLitMaterialName"), 0x510);
}

if (auto it = UEngine::MemberOffsets.find(STR("ShadedLevelColorationUnlitMaterial")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("ShadedLevelColorationUnlitMaterial"), 0x520);
}

if (auto it = UEngine::MemberOffsets.find(STR("ShadedLevelColorationUnlitMaterialName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("ShadedLevelColorationUnlitMaterialName"), 0x528);
}

if (auto it = UEngine::MemberOffsets.find(STR("RemoveSurfaceMaterial")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("RemoveSurfaceMaterial"), 0x538);
}

if (auto it = UEngine::MemberOffsets.find(STR("RemoveSurfaceMaterialName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("RemoveSurfaceMaterialName"), 0x540);
}

if (auto it = UEngine::MemberOffsets.find(STR("VertexColorMaterial")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("VertexColorMaterial"), 0x560);
}

if (auto it = UEngine::MemberOffsets.find(STR("VertexColorMaterialName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("VertexColorMaterialName"), 0x568);
}

if (auto it = UEngine::MemberOffsets.find(STR("VertexColorViewModeMaterial_ColorOnly")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("VertexColorViewModeMaterial_ColorOnly"), 0x578);
}

if (auto it = UEngine::MemberOffsets.find(STR("VertexColorViewModeMaterialName_ColorOnly")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("VertexColorViewModeMaterialName_ColorOnly"), 0x580);
}

if (auto it = UEngine::MemberOffsets.find(STR("VertexColorViewModeMaterial_AlphaAsColor")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("VertexColorViewModeMaterial_AlphaAsColor"), 0x590);
}

if (auto it = UEngine::MemberOffsets.find(STR("VertexColorViewModeMaterialName_AlphaAsColor")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("VertexColorViewModeMaterialName_AlphaAsColor"), 0x598);
}

if (auto it = UEngine::MemberOffsets.find(STR("VertexColorViewModeMaterial_RedOnly")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("VertexColorViewModeMaterial_RedOnly"), 0x5a8);
}

if (auto it = UEngine::MemberOffsets.find(STR("VertexColorViewModeMaterialName_RedOnly")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("VertexColorViewModeMaterialName_RedOnly"), 0x5b0);
}

if (auto it = UEngine::MemberOffsets.find(STR("VertexColorViewModeMaterial_GreenOnly")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("VertexColorViewModeMaterial_GreenOnly"), 0x5c0);
}

if (auto it = UEngine::MemberOffsets.find(STR("VertexColorViewModeMaterialName_GreenOnly")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("VertexColorViewModeMaterialName_GreenOnly"), 0x5c8);
}

if (auto it = UEngine::MemberOffsets.find(STR("VertexColorViewModeMaterial_BlueOnly")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("VertexColorViewModeMaterial_BlueOnly"), 0x5d8);
}

if (auto it = UEngine::MemberOffsets.find(STR("VertexColorViewModeMaterialName_BlueOnly")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("VertexColorViewModeMaterialName_BlueOnly"), 0x5e0);
}

if (auto it = UEngine::MemberOffsets.find(STR("DebugEditorMaterialName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("DebugEditorMaterialName"), 0x5f0);
}

if (auto it = UEngine::MemberOffsets.find(STR("ConstraintLimitMaterial")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("ConstraintLimitMaterial"), 0x610);
}

if (auto it = UEngine::MemberOffsets.find(STR("ConstraintLimitMaterialX")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("ConstraintLimitMaterialX"), 0x618);
}

if (auto it = UEngine::MemberOffsets.find(STR("ConstraintLimitMaterialXAxis")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("ConstraintLimitMaterialXAxis"), 0x620);
}

if (auto it = UEngine::MemberOffsets.find(STR("ConstraintLimitMaterialY")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("ConstraintLimitMaterialY"), 0x628);
}

if (auto it = UEngine::MemberOffsets.find(STR("ConstraintLimitMaterialYAxis")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("ConstraintLimitMaterialYAxis"), 0x630);
}

if (auto it = UEngine::MemberOffsets.find(STR("ConstraintLimitMaterialZ")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("ConstraintLimitMaterialZ"), 0x638);
}

if (auto it = UEngine::MemberOffsets.find(STR("ConstraintLimitMaterialZAxis")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("ConstraintLimitMaterialZAxis"), 0x640);
}

if (auto it = UEngine::MemberOffsets.find(STR("ConstraintLimitMaterialPrismatic")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("ConstraintLimitMaterialPrismatic"), 0x648);
}

if (auto it = UEngine::MemberOffsets.find(STR("InvalidLightmapSettingsMaterial")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("InvalidLightmapSettingsMaterial"), 0x650);
}

if (auto it = UEngine::MemberOffsets.find(STR("InvalidLightmapSettingsMaterialName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("InvalidLightmapSettingsMaterialName"), 0x658);
}

if (auto it = UEngine::MemberOffsets.find(STR("PreviewShadowsIndicatorMaterial")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("PreviewShadowsIndicatorMaterial"), 0x678);
}

if (auto it = UEngine::MemberOffsets.find(STR("PreviewShadowsIndicatorMaterialName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("PreviewShadowsIndicatorMaterialName"), 0x680);
}

if (auto it = UEngine::MemberOffsets.find(STR("ArrowMaterial")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("ArrowMaterial"), 0x6a0);
}

if (auto it = UEngine::MemberOffsets.find(STR("ArrowMaterialYellow")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("ArrowMaterialYellow"), 0x6a8);
}

if (auto it = UEngine::MemberOffsets.find(STR("ArrowMaterialName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("ArrowMaterialName"), 0x6b0);
}

if (auto it = UEngine::MemberOffsets.find(STR("LightingOnlyBrightness")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("LightingOnlyBrightness"), 0x6d0);
}

if (auto it = UEngine::MemberOffsets.find(STR("ShaderComplexityColors")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("ShaderComplexityColors"), 0x6e0);
}

if (auto it = UEngine::MemberOffsets.find(STR("QuadComplexityColors")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("QuadComplexityColors"), 0x6f0);
}

if (auto it = UEngine::MemberOffsets.find(STR("LightComplexityColors")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("LightComplexityColors"), 0x700);
}

if (auto it = UEngine::MemberOffsets.find(STR("StationaryLightOverlapColors")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("StationaryLightOverlapColors"), 0x710);
}

if (auto it = UEngine::MemberOffsets.find(STR("LODColorationColors")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("LODColorationColors"), 0x720);
}

if (auto it = UEngine::MemberOffsets.find(STR("HLODColorationColors")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("HLODColorationColors"), 0x730);
}

if (auto it = UEngine::MemberOffsets.find(STR("StreamingAccuracyColors")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("StreamingAccuracyColors"), 0x740);
}

if (auto it = UEngine::MemberOffsets.find(STR("GPUSkinCacheVisualizationExcludedColor")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("GPUSkinCacheVisualizationExcludedColor"), 0x750);
}

if (auto it = UEngine::MemberOffsets.find(STR("GPUSkinCacheVisualizationIncludedColor")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("GPUSkinCacheVisualizationIncludedColor"), 0x760);
}

if (auto it = UEngine::MemberOffsets.find(STR("GPUSkinCacheVisualizationRecomputeTangentsColor")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("GPUSkinCacheVisualizationRecomputeTangentsColor"), 0x770);
}

if (auto it = UEngine::MemberOffsets.find(STR("GPUSkinCacheVisualizationLowMemoryThresholdInMB")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("GPUSkinCacheVisualizationLowMemoryThresholdInMB"), 0x780);
}

if (auto it = UEngine::MemberOffsets.find(STR("GPUSkinCacheVisualizationHighMemoryThresholdInMB")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("GPUSkinCacheVisualizationHighMemoryThresholdInMB"), 0x784);
}

if (auto it = UEngine::MemberOffsets.find(STR("GPUSkinCacheVisualizationLowMemoryColor")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("GPUSkinCacheVisualizationLowMemoryColor"), 0x788);
}

if (auto it = UEngine::MemberOffsets.find(STR("GPUSkinCacheVisualizationMidMemoryColor")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("GPUSkinCacheVisualizationMidMemoryColor"), 0x798);
}

if (auto it = UEngine::MemberOffsets.find(STR("GPUSkinCacheVisualizationHighMemoryColor")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("GPUSkinCacheVisualizationHighMemoryColor"), 0x7a8);
}

if (auto it = UEngine::MemberOffsets.find(STR("GPUSkinCacheVisualizationRayTracingLODOffsetColors")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("GPUSkinCacheVisualizationRayTracingLODOffsetColors"), 0x7b8);
}

if (auto it = UEngine::MemberOffsets.find(STR("MaxPixelShaderAdditiveComplexityCount")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("MaxPixelShaderAdditiveComplexityCount"), 0x7c8);
}

if (auto it = UEngine::MemberOffsets.find(STR("MaxES3PixelShaderAdditiveComplexityCount")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("MaxES3PixelShaderAdditiveComplexityCount"), 0x7cc);
}

if (auto it = UEngine::MemberOffsets.find(STR("MinLightMapDensity")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("MinLightMapDensity"), 0x7d0);
}

if (auto it = UEngine::MemberOffsets.find(STR("IdealLightMapDensity")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("IdealLightMapDensity"), 0x7d4);
}

if (auto it = UEngine::MemberOffsets.find(STR("MaxLightMapDensity")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("MaxLightMapDensity"), 0x7d8);
}

if (auto it = UEngine::MemberOffsets.find(STR("bRenderLightMapDensityGrayscale")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("bRenderLightMapDensityGrayscale"), 0x7dc);
}

if (auto it = UEngine::MemberOffsets.find(STR("RenderLightMapDensityGrayscaleScale")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("RenderLightMapDensityGrayscaleScale"), 0x7e0);
}

if (auto it = UEngine::MemberOffsets.find(STR("RenderLightMapDensityColorScale")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("RenderLightMapDensityColorScale"), 0x7e4);
}

if (auto it = UEngine::MemberOffsets.find(STR("LightMapDensityVertexMappedColor")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("LightMapDensityVertexMappedColor"), 0x7e8);
}

if (auto it = UEngine::MemberOffsets.find(STR("LightMapDensitySelectedColor")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("LightMapDensitySelectedColor"), 0x7f8);
}

if (auto it = UEngine::MemberOffsets.find(STR("StatColorMappings")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("StatColorMappings"), 0x808);
}

if (auto it = UEngine::MemberOffsets.find(STR("DefaultPhysMaterial")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("DefaultPhysMaterial"), 0x818);
}

if (auto it = UEngine::MemberOffsets.find(STR("DefaultPhysMaterialName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("DefaultPhysMaterialName"), 0x820);
}

if (auto it = UEngine::MemberOffsets.find(STR("DefaultDestructiblePhysMaterial")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("DefaultDestructiblePhysMaterial"), 0x840);
}

if (auto it = UEngine::MemberOffsets.find(STR("DefaultDestructiblePhysMaterialName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("DefaultDestructiblePhysMaterialName"), 0x848);
}

if (auto it = UEngine::MemberOffsets.find(STR("ActiveGameNameRedirects")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("ActiveGameNameRedirects"), 0x868);
}

if (auto it = UEngine::MemberOffsets.find(STR("ActiveClassRedirects")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("ActiveClassRedirects"), 0x878);
}

if (auto it = UEngine::MemberOffsets.find(STR("ActivePluginRedirects")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("ActivePluginRedirects"), 0x888);
}

if (auto it = UEngine::MemberOffsets.find(STR("ActiveStructRedirects")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("ActiveStructRedirects"), 0x898);
}

if (auto it = UEngine::MemberOffsets.find(STR("PreIntegratedSkinBRDFTexture")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("PreIntegratedSkinBRDFTexture"), 0x8a8);
}

if (auto it = UEngine::MemberOffsets.find(STR("PreIntegratedSkinBRDFTextureName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("PreIntegratedSkinBRDFTextureName"), 0x8b0);
}

if (auto it = UEngine::MemberOffsets.find(STR("BlueNoiseScalarTexture")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("BlueNoiseScalarTexture"), 0x8d0);
}

if (auto it = UEngine::MemberOffsets.find(STR("BlueNoiseVec2Texture")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("BlueNoiseVec2Texture"), 0x8d8);
}

if (auto it = UEngine::MemberOffsets.find(STR("BlueNoiseScalarTextureName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("BlueNoiseScalarTextureName"), 0x8e0);
}

if (auto it = UEngine::MemberOffsets.find(STR("BlueNoiseVec2TextureName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("BlueNoiseVec2TextureName"), 0x900);
}

if (auto it = UEngine::MemberOffsets.find(STR("MiniFontTexture")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("MiniFontTexture"), 0x920);
}

if (auto it = UEngine::MemberOffsets.find(STR("MiniFontTextureName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("MiniFontTextureName"), 0x928);
}

if (auto it = UEngine::MemberOffsets.find(STR("WeightMapPlaceholderTexture")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("WeightMapPlaceholderTexture"), 0x948);
}

if (auto it = UEngine::MemberOffsets.find(STR("WeightMapPlaceholderTextureName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("WeightMapPlaceholderTextureName"), 0x950);
}

if (auto it = UEngine::MemberOffsets.find(STR("LightMapDensityTexture")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("LightMapDensityTexture"), 0x970);
}

if (auto it = UEngine::MemberOffsets.find(STR("LightMapDensityTextureName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("LightMapDensityTextureName"), 0x978);
}

if (auto it = UEngine::MemberOffsets.find(STR("EngineLoop")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("EngineLoop"), 0x998);
}

if (auto it = UEngine::MemberOffsets.find(STR("GameViewport")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("GameViewport"), 0x9a0);
}

if (auto it = UEngine::MemberOffsets.find(STR("DeferredCommands")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("DeferredCommands"), 0x9a8);
}

if (auto it = UEngine::MemberOffsets.find(STR("NearClipPlane")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("NearClipPlane"), 0x9b8);
}

if (auto it = UEngine::MemberOffsets.find(STR("bSubtitlesEnabled")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("bSubtitlesEnabled"), 0x9bc);
}

if (auto it = UEngine::MemberOffsets.find(STR("bSubtitlesForcedOff")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("bSubtitlesForcedOff"), 0x9bc);
}

if (auto it = UEngine::MemberOffsets.find(STR("MaximumLoopIterationCount")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("MaximumLoopIterationCount"), 0x9c0);
}

if (auto it = UEngine::MemberOffsets.find(STR("bCanBlueprintsTickByDefault")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("bCanBlueprintsTickByDefault"), 0x9c4);
}

if (auto it = UEngine::MemberOffsets.find(STR("bOptimizeAnimBlueprintMemberVariableAccess")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("bOptimizeAnimBlueprintMemberVariableAccess"), 0x9c4);
}

if (auto it = UEngine::MemberOffsets.find(STR("bAllowMultiThreadedAnimationUpdate")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("bAllowMultiThreadedAnimationUpdate"), 0x9c4);
}

if (auto it = UEngine::MemberOffsets.find(STR("bEnableEditorPSysRealtimeLOD")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("bEnableEditorPSysRealtimeLOD"), 0x9c4);
}

if (auto it = UEngine::MemberOffsets.find(STR("bForceDisableFrameRateSmoothing")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("bForceDisableFrameRateSmoothing"), 0x9c4);
}

if (auto it = UEngine::MemberOffsets.find(STR("bSmoothFrameRate")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("bSmoothFrameRate"), 0x9c4);
}

if (auto it = UEngine::MemberOffsets.find(STR("bUseFixedFrameRate")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("bUseFixedFrameRate"), 0x9c4);
}

if (auto it = UEngine::MemberOffsets.find(STR("FixedFrameRate")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("FixedFrameRate"), 0x9c8);
}

if (auto it = UEngine::MemberOffsets.find(STR("SmoothedFrameRateRange")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("SmoothedFrameRateRange"), 0x9cc);
}

if (auto it = UEngine::MemberOffsets.find(STR("CustomTimeStep")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("CustomTimeStep"), 0x9e0);
}

if (auto it = UEngine::MemberOffsets.find(STR("CustomTimeStepChangedEvent")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("CustomTimeStepChangedEvent"), 0x9e8);
}

if (auto it = UEngine::MemberOffsets.find(STR("bIsCurrentCustomTimeStepInitialized")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("bIsCurrentCustomTimeStepInitialized"), 0xa00);
}

if (auto it = UEngine::MemberOffsets.find(STR("CustomTimeStepClassName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("CustomTimeStepClassName"), 0xa08);
}

if (auto it = UEngine::MemberOffsets.find(STR("TimecodeProvider")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("TimecodeProvider"), 0xa28);
}

if (auto it = UEngine::MemberOffsets.find(STR("TimecodeProviderChangedEvent")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("TimecodeProviderChangedEvent"), 0xa30);
}

if (auto it = UEngine::MemberOffsets.find(STR("bIsCurrentTimecodeProviderInitialized")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("bIsCurrentTimecodeProviderInitialized"), 0xa48);
}

if (auto it = UEngine::MemberOffsets.find(STR("TimecodeProviderClassName")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("TimecodeProviderClassName"), 0xa50);
}

if (auto it = UEngine::MemberOffsets.find(STR("bGenerateDefaultTimecode")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("bGenerateDefaultTimecode"), 0xa70);
}

if (auto it = UEngine::MemberOffsets.find(STR("GenerateDefaultTimecodeFrameRate")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("GenerateDefaultTimecodeFrameRate"), 0xa74);
}

if (auto it = UEngine::MemberOffsets.find(STR("GenerateDefaultTimecodeFrameDelay")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("GenerateDefaultTimecodeFrameDelay"), 0xa7c);
}

if (auto it = UEngine::MemberOffsets.find(STR("bCheckForMultiplePawnsSpawnedInAFrame")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("bCheckForMultiplePawnsSpawnedInAFrame"), 0xa80);
}

if (auto it = UEngine::MemberOffsets.find(STR("NumPawnsAllowedToBeSpawnedInAFrame")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("NumPawnsAllowedToBeSpawnedInAFrame"), 0xa84);
}

if (auto it = UEngine::MemberOffsets.find(STR("bShouldGenerateLowQualityLightmaps_DEPRECATED")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("bShouldGenerateLowQualityLightmaps_DEPRECATED"), 0xa88);
}

if (auto it = UEngine::MemberOffsets.find(STR("C_WorldBox")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("C_WorldBox"), 0xa8c);
}

if (auto it = UEngine::MemberOffsets.find(STR("C_BrushWire")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("C_BrushWire"), 0xa90);
}

if (auto it = UEngine::MemberOffsets.find(STR("C_AddWire")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("C_AddWire"), 0xa94);
}

if (auto it = UEngine::MemberOffsets.find(STR("C_SubtractWire")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("C_SubtractWire"), 0xa98);
}

if (auto it = UEngine::MemberOffsets.find(STR("C_SemiSolidWire")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("C_SemiSolidWire"), 0xa9c);
}

if (auto it = UEngine::MemberOffsets.find(STR("C_NonSolidWire")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("C_NonSolidWire"), 0xaa0);
}

if (auto it = UEngine::MemberOffsets.find(STR("C_WireBackground")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("C_WireBackground"), 0xaa4);
}

if (auto it = UEngine::MemberOffsets.find(STR("C_ScaleBoxHi")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("C_ScaleBoxHi"), 0xaa8);
}

if (auto it = UEngine::MemberOffsets.find(STR("C_VolumeCollision")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("C_VolumeCollision"), 0xaac);
}

if (auto it = UEngine::MemberOffsets.find(STR("C_BSPCollision")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("C_BSPCollision"), 0xab0);
}

if (auto it = UEngine::MemberOffsets.find(STR("C_OrthoBackground")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("C_OrthoBackground"), 0xab4);
}

if (auto it = UEngine::MemberOffsets.find(STR("C_Volume")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("C_Volume"), 0xab8);
}

if (auto it = UEngine::MemberOffsets.find(STR("C_BrushShape")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("C_BrushShape"), 0xabc);
}

if (auto it = UEngine::MemberOffsets.find(STR("StreamingDistanceFactor")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("StreamingDistanceFactor"), 0xac0);
}

if (auto it = UEngine::MemberOffsets.find(STR("GameScreenshotSaveDirectory")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("GameScreenshotSaveDirectory"), 0xac8);
}

if (auto it = UEngine::MemberOffsets.find(STR("UseStaticMeshMinLODPerQualityLevels")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("UseStaticMeshMinLODPerQualityLevels"), 0xad8);
}

if (auto it = UEngine::MemberOffsets.find(STR("UseSkeletalMeshMinLODPerQualityLevels")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("UseSkeletalMeshMinLODPerQualityLevels"), 0xad9);
}

if (auto it = UEngine::MemberOffsets.find(STR("TransitionType")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("TransitionType"), 0xada);
}

if (auto it = UEngine::MemberOffsets.find(STR("TransitionDescription")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("TransitionDescription"), 0xae0);
}

if (auto it = UEngine::MemberOffsets.find(STR("TransitionGameMode")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("TransitionGameMode"), 0xaf0);
}

if (auto it = UEngine::MemberOffsets.find(STR("bAllowMatureLanguage")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("bAllowMatureLanguage"), 0xb00);
}

if (auto it = UEngine::MemberOffsets.find(STR("CameraRotationThreshold")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("CameraRotationThreshold"), 0xb04);
}

if (auto it = UEngine::MemberOffsets.find(STR("CameraTranslationThreshold")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("CameraTranslationThreshold"), 0xb08);
}

if (auto it = UEngine::MemberOffsets.find(STR("PrimitiveProbablyVisibleTime")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("PrimitiveProbablyVisibleTime"), 0xb0c);
}

if (auto it = UEngine::MemberOffsets.find(STR("MaxOcclusionPixelsFraction")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("MaxOcclusionPixelsFraction"), 0xb10);
}

if (auto it = UEngine::MemberOffsets.find(STR("bPauseOnLossOfFocus")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("bPauseOnLossOfFocus"), 0xb14);
}

if (auto it = UEngine::MemberOffsets.find(STR("MaxParticleResize")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("MaxParticleResize"), 0xb18);
}

if (auto it = UEngine::MemberOffsets.find(STR("MaxParticleResizeWarn")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("MaxParticleResizeWarn"), 0xb1c);
}

if (auto it = UEngine::MemberOffsets.find(STR("PendingDroppedNotes")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("PendingDroppedNotes"), 0xb20);
}

if (auto it = UEngine::MemberOffsets.find(STR("NetClientTicksPerSecond")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("NetClientTicksPerSecond"), 0xb30);
}

if (auto it = UEngine::MemberOffsets.find(STR("DisplayGamma")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("DisplayGamma"), 0xb34);
}

if (auto it = UEngine::MemberOffsets.find(STR("MinDesiredFrameRate")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("MinDesiredFrameRate"), 0xb38);
}

if (auto it = UEngine::MemberOffsets.find(STR("DefaultSelectedMaterialColor")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("DefaultSelectedMaterialColor"), 0xb3c);
}

if (auto it = UEngine::MemberOffsets.find(STR("SelectedMaterialColor")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("SelectedMaterialColor"), 0xb4c);
}

if (auto it = UEngine::MemberOffsets.find(STR("SelectionOutlineColor")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("SelectionOutlineColor"), 0xb5c);
}

if (auto it = UEngine::MemberOffsets.find(STR("SubduedSelectionOutlineColor")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("SubduedSelectionOutlineColor"), 0xb6c);
}

if (auto it = UEngine::MemberOffsets.find(STR("SelectedMaterialColorOverride")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("SelectedMaterialColorOverride"), 0xb7c);
}

if (auto it = UEngine::MemberOffsets.find(STR("bIsOverridingSelectedColor")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("bIsOverridingSelectedColor"), 0xb8c);
}

if (auto it = UEngine::MemberOffsets.find(STR("bEnableOnScreenDebugMessages")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("bEnableOnScreenDebugMessages"), 0xb8c);
}

if (auto it = UEngine::MemberOffsets.find(STR("bEnableOnScreenDebugMessagesDisplay")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("bEnableOnScreenDebugMessagesDisplay"), 0xb8c);
}

if (auto it = UEngine::MemberOffsets.find(STR("bSuppressMapWarnings")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("bSuppressMapWarnings"), 0xb8c);
}

if (auto it = UEngine::MemberOffsets.find(STR("bDisableAILogging")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("bDisableAILogging"), 0xb8c);
}

if (auto it = UEngine::MemberOffsets.find(STR("bEnableVisualLogRecordingOnStart")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("bEnableVisualLogRecordingOnStart"), 0xb90);
}

if (auto it = UEngine::MemberOffsets.find(STR("ScreenSaverInhibitorSemaphore")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("ScreenSaverInhibitorSemaphore"), 0xb94);
}

if (auto it = UEngine::MemberOffsets.find(STR("bLockReadOnlyLevels")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("bLockReadOnlyLevels"), 0xb98);
}

if (auto it = UEngine::MemberOffsets.find(STR("ParticleEventManagerClassPath")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("ParticleEventManagerClassPath"), 0xba0);
}

if (auto it = UEngine::MemberOffsets.find(STR("SelectionHighlightIntensity")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("SelectionHighlightIntensity"), 0xbb0);
}

if (auto it = UEngine::MemberOffsets.find(STR("BSPSelectionHighlightIntensity")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("BSPSelectionHighlightIntensity"), 0xbb4);
}

if (auto it = UEngine::MemberOffsets.find(STR("SelectionHighlightIntensityBillboards")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("SelectionHighlightIntensityBillboards"), 0xbb8);
}

if (auto it = UEngine::MemberOffsets.find(STR("BeginStreamingPauseDelegate")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("BeginStreamingPauseDelegate"), 0xbc0);
}

if (auto it = UEngine::MemberOffsets.find(STR("EndStreamingPauseDelegate")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("EndStreamingPauseDelegate"), 0xbc8);
}

if (auto it = UEngine::MemberOffsets.find(STR("PreRenderDelegate")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("PreRenderDelegate"), 0xbd0);
}

if (auto it = UEngine::MemberOffsets.find(STR("PreRenderDelegateEx")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("PreRenderDelegateEx"), 0xbe8);
}

if (auto it = UEngine::MemberOffsets.find(STR("PostRenderDelegate")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("PostRenderDelegate"), 0xc00);
}

if (auto it = UEngine::MemberOffsets.find(STR("PostRenderDelegateEx")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("PostRenderDelegateEx"), 0xc18);
}

if (auto it = UEngine::MemberOffsets.find(STR("TravelFailureEvent")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("TravelFailureEvent"), 0xc30);
}

if (auto it = UEngine::MemberOffsets.find(STR("NetworkFailureEvent")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("NetworkFailureEvent"), 0xc48);
}

if (auto it = UEngine::MemberOffsets.find(STR("NetworkLagStateChangedEvent")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("NetworkLagStateChangedEvent"), 0xc60);
}

if (auto it = UEngine::MemberOffsets.find(STR("NetworkDDoSEscalationEvent")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("NetworkDDoSEscalationEvent"), 0xc78);
}

if (auto it = UEngine::MemberOffsets.find(STR("bIsInitialized")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("bIsInitialized"), 0xc90);
}

if (auto it = UEngine::MemberOffsets.find(STR("LastGCFrame")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("LastGCFrame"), 0xc98);
}

if (auto it = UEngine::MemberOffsets.find(STR("TimeSinceLastPendingKillPurge")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("TimeSinceLastPendingKillPurge"), 0xca0);
}

if (auto it = UEngine::MemberOffsets.find(STR("bFullPurgeTriggered")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("bFullPurgeTriggered"), 0xca4);
}

if (auto it = UEngine::MemberOffsets.find(STR("bShouldDelayGarbageCollect")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("bShouldDelayGarbageCollect"), 0xca5);
}

if (auto it = UEngine::MemberOffsets.find(STR("LastDynamicResolutionEvent")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("LastDynamicResolutionEvent"), 0xca6);
}

if (auto it = UEngine::MemberOffsets.find(STR("DynamicResolutionState")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("DynamicResolutionState"), 0xca8);
}

if (auto it = UEngine::MemberOffsets.find(STR("NextDynamicResolutionState")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("NextDynamicResolutionState"), 0xcb8);
}

if (auto it = UEngine::MemberOffsets.find(STR("bIsDynamicResolutionPaused")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("bIsDynamicResolutionPaused"), 0xcc8);
}

if (auto it = UEngine::MemberOffsets.find(STR("bDynamicResolutionEnableUserSetting")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("bDynamicResolutionEnableUserSetting"), 0xcc9);
}

if (auto it = UEngine::MemberOffsets.find(STR("AudioDeviceManager")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("AudioDeviceManager"), 0xcd0);
}

if (auto it = UEngine::MemberOffsets.find(STR("MainAudioDeviceHandle")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("MainAudioDeviceHandle"), 0xcd8);
}

if (auto it = UEngine::MemberOffsets.find(STR("PriorityScreenMessages")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("PriorityScreenMessages"), 0xcf0);
}

if (auto it = UEngine::MemberOffsets.find(STR("ScreenMessages")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("ScreenMessages"), 0xd00);
}

if (auto it = UEngine::MemberOffsets.find(STR("StereoRenderingDevice")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("StereoRenderingDevice"), 0xd50);
}

if (auto it = UEngine::MemberOffsets.find(STR("XRSystem")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("XRSystem"), 0xd60);
}

if (auto it = UEngine::MemberOffsets.find(STR("ViewExtensions")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("ViewExtensions"), 0xd70);
}

if (auto it = UEngine::MemberOffsets.find(STR("EyeTrackingDevice")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("EyeTrackingDevice"), 0xd80);
}

if (auto it = UEngine::MemberOffsets.find(STR("OnHitchDetectedDelegate")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("OnHitchDetectedDelegate"), 0xd90);
}

if (auto it = UEngine::MemberOffsets.find(STR("PortalRpcClient")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("PortalRpcClient"), 0xda8);
}

if (auto it = UEngine::MemberOffsets.find(STR("PortalRpcLocator")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("PortalRpcLocator"), 0xdb8);
}

if (auto it = UEngine::MemberOffsets.find(STR("ServiceDependencies")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("ServiceDependencies"), 0xdc8);
}

if (auto it = UEngine::MemberOffsets.find(STR("ServiceLocator")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("ServiceLocator"), 0xdd8);
}

if (auto it = UEngine::MemberOffsets.find(STR("ActivePerformanceChart")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("ActivePerformanceChart"), 0xde8);
}

if (auto it = UEngine::MemberOffsets.find(STR("ActivePerformanceDataConsumers")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("ActivePerformanceDataConsumers"), 0xdf8);
}

if (auto it = UEngine::MemberOffsets.find(STR("RunningAverageDeltaTime")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("RunningAverageDeltaTime"), 0xe08);
}

if (auto it = UEngine::MemberOffsets.find(STR("WorldAddedEvent")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("WorldAddedEvent"), 0xe10);
}

if (auto it = UEngine::MemberOffsets.find(STR("WorldDestroyedEvent")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("WorldDestroyedEvent"), 0xe28);
}

if (auto it = UEngine::MemberOffsets.find(STR("ScreenSaverInhibitor")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("ScreenSaverInhibitor"), 0xe40);
}

if (auto it = UEngine::MemberOffsets.find(STR("ScreenSaverInhibitorRunnable")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("ScreenSaverInhibitorRunnable"), 0xe48);
}

if (auto it = UEngine::MemberOffsets.find(STR("GlobalNetTravelCount")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("GlobalNetTravelCount"), 0xe50);
}

if (auto it = UEngine::MemberOffsets.find(STR("NetDriverDefinitions")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("NetDriverDefinitions"), 0xe58);
}

if (auto it = UEngine::MemberOffsets.find(STR("IrisNetDriverConfigs")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("IrisNetDriverConfigs"), 0xe68);
}

if (auto it = UEngine::MemberOffsets.find(STR("ServerActors")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("ServerActors"), 0xe78);
}

if (auto it = UEngine::MemberOffsets.find(STR("RuntimeServerActors")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("RuntimeServerActors"), 0xe88);
}

if (auto it = UEngine::MemberOffsets.find(STR("NetErrorLogInterval")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("NetErrorLogInterval"), 0xe98);
}

if (auto it = UEngine::MemberOffsets.find(STR("bStartedLoadMapMovie")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("bStartedLoadMapMovie"), 0xe9c);
}

if (auto it = UEngine::MemberOffsets.find(STR("bIsVanillaProduct")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("bIsVanillaProduct"), 0xe9d);
}

if (auto it = UEngine::MemberOffsets.find(STR("WorldList")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("WorldList"), 0xea0);
}

if (auto it = UEngine::MemberOffsets.find(STR("NextWorldContextHandle")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("NextWorldContextHandle"), 0xeb0);
}

if (auto it = UEngine::MemberOffsets.find(STR("EngineSubsystemCollection")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("EngineSubsystemCollection"), 0xeb8);
}

if (auto it = UEngine::MemberOffsets.find(STR("EngineStats")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("EngineStats"), 0xf78);
}

if (auto it = UEngine::MemberOffsets.find(STR("ErrorsAndWarningsCollector")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("ErrorsAndWarningsCollector"), 0xf88);
}

if (auto it = UEngine::MemberOffsets.find(STR("HandleScreenshotCapturedDelegateHandle")); it == UEngine::MemberOffsets.end())
{
    UEngine::MemberOffsets.emplace(STR("HandleScreenshotCapturedDelegateHandle"), 0x1040);
}
