if (auto it = UGameViewportClient::MemberOffsets.find(STR("ViewportConsole")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("ViewportConsole"), 0x40);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("DebugProperties")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("DebugProperties"), 0x48);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("SplitscreenInfo")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("SplitscreenInfo"), 0x58);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("MaxSplitscreenPlayers")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("MaxSplitscreenPlayers"), 0x68);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("bShowTitleSafeZone")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("bShowTitleSafeZone"), 0x6c);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("bIsPlayInEditorViewport")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("bIsPlayInEditorViewport"), 0x6c);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("bDisableWorldRendering")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("bDisableWorldRendering"), 0x6c);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("ActiveSplitscreenType")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("ActiveSplitscreenType"), 0x6d);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("World")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("World"), 0x70);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("GameInstance")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("GameInstance"), 0x78);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("bSuppressTransitionMessage")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("bSuppressTransitionMessage"), 0x80);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("AudioDevice")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("AudioDevice"), 0x88);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("AudioDeviceDestroyedHandle")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("AudioDeviceDestroyedHandle"), 0xa0);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("ViewModeIndex")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("ViewModeIndex"), 0xa8);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("EngineShowFlags")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("EngineShowFlags"), 0xb0);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("Viewport")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("Viewport"), 0xe0);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("ViewportFrame")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("ViewportFrame"), 0xe8);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("AudioDeviceHandle")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("AudioDeviceHandle"), 0xf0);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("bHasAudioFocus")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("bHasAudioFocus"), 0xf4);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("Window")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("Window"), 0xf8);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("ViewportOverlayWidget")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("ViewportOverlayWidget"), 0x108);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("GameLayerManagerPtr")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("GameLayerManagerPtr"), 0x118);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("CurrentBufferVisualizationMode")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("CurrentBufferVisualizationMode"), 0x128);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("CurrentNaniteVisualizationMode")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("CurrentNaniteVisualizationMode"), 0x130);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("CurrentLumenVisualizationMode")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("CurrentLumenVisualizationMode"), 0x138);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("CurrentVirtualShadowMapVisualizationMode")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("CurrentVirtualShadowMapVisualizationMode"), 0x140);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("HighResScreenshotDialog")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("HighResScreenshotDialog"), 0x148);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("HardwareCursorCache")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("HardwareCursorCache"), 0x158);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("HardwareCursors")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("HardwareCursors"), 0x1a8);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("CursorWidgets")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("CursorWidgets"), 0x1f8);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("bUseSoftwareCursorWidgets")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("bUseSoftwareCursorWidgets"), 0x248);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("CloseRequestedDelegate")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("CloseRequestedDelegate"), 0x250);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("WindowCloseRequestedDelegate")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("WindowCloseRequestedDelegate"), 0x268);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("PlayerAddedDelegate")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("PlayerAddedDelegate"), 0x278);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("PlayerRemovedDelegate")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("PlayerRemovedDelegate"), 0x290);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("BeginDrawDelegate")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("BeginDrawDelegate"), 0x2a8);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("DrawnDelegate")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("DrawnDelegate"), 0x2c0);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("EndDrawDelegate")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("EndDrawDelegate"), 0x2d8);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("TickDelegate")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("TickDelegate"), 0x2f0);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("ToggleFullscreenDelegate")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("ToggleFullscreenDelegate"), 0x308);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("CustomNavigationEvent")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("CustomNavigationEvent"), 0x320);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("OnOverrideInputKeyEvent")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("OnOverrideInputKeyEvent"), 0x330);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("OnOverrideInputAxisEvent")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("OnOverrideInputAxisEvent"), 0x340);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("OnInputKeyEvent")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("OnInputKeyEvent"), 0x350);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("OnInputAxisEvent")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("OnInputAxisEvent"), 0x368);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("StatUnitData")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("StatUnitData"), 0x380);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("StatHitchesData")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("StatHitchesData"), 0x388);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("bDisableSplitScreenOverride")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("bDisableSplitScreenOverride"), 0x390);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("bIgnoreInput")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("bIgnoreInput"), 0x391);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("MouseCaptureMode")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("MouseCaptureMode"), 0x392);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("bHideCursorDuringCapture")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("bHideCursorDuringCapture"), 0x393);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("MouseLockMode")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("MouseLockMode"), 0x394);
}

if (auto it = UGameViewportClient::MemberOffsets.find(STR("bIsMouseOverClient")); it == UGameViewportClient::MemberOffsets.end())
{
    UGameViewportClient::MemberOffsets.emplace(STR("bIsMouseOverClient"), 0x395);
}
