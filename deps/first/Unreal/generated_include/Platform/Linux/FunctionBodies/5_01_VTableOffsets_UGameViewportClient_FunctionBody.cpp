if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("~UGameViewportClient")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("~UGameViewportClient"), 0x00);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("PostInitProperties")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("PostInitProperties"), 0x50);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("BeginDestroy")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("BeginDestroy"), 0xb8);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("GetWorld")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("GetWorld"), 0x190);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("SSSwapControllers")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("SSSwapControllers"), 0x2b8);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("ShowTitleSafeArea")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("ShowTitleSafeArea"), 0x2c0);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("SetConsoleTarget")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("SetConsoleTarget"), 0x2c8);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("CreateGameViewport")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("CreateGameViewport"), 0x2d0);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("Init")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("Init"), 0x2d8);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("RedrawRequested")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("RedrawRequested"), 0x2e0);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("InputKey")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("InputKey"), 0x2e8);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("InputAxis")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("InputAxis"), 0x2f0);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("InputAxis_1")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("InputAxis_1"), 0x2f8);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("InputChar")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("InputChar"), 0x300);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("InputTouch")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("InputTouch"), 0x308);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("InputMotion")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("InputMotion"), 0x310);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("GetCursor")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("GetCursor"), 0x318);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("MapCursor")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("MapCursor"), 0x320);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("Precache")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("Precache"), 0x328);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("Draw")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("Draw"), 0x330);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("ProcessScreenShots")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("ProcessScreenShots"), 0x338);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("QueryShowFocus")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("QueryShowFocus"), 0x340);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("LostFocus")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("LostFocus"), 0x348);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("ReceivedFocus")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("ReceivedFocus"), 0x350);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("IsFocused")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("IsFocused"), 0x358);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("Activated")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("Activated"), 0x360);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("Deactivated")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("Deactivated"), 0x368);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("IsInPermanentCapture")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("IsInPermanentCapture"), 0x370);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("WindowCloseRequested")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("WindowCloseRequested"), 0x378);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("CloseRequested")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("CloseRequested"), 0x380);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("RequiresHitProxyStorage")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("RequiresHitProxyStorage"), 0x388);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("IsOrtho")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("IsOrtho"), 0x390);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("MouseEnter")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("MouseEnter"), 0x398);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("MouseLeave")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("MouseLeave"), 0x3a0);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("SetIsSimulateInEditorViewport")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("SetIsSimulateInEditorViewport"), 0x3a8);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("FinalizeViews")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("FinalizeViews"), 0x3b0);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("Exec")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("Exec"), 0x3b8);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("RemapControllerInput")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("RemapControllerInput"), 0x3c0);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("AddViewportWidgetContent")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("AddViewportWidgetContent"), 0x3c8);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("RemoveViewportWidgetContent")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("RemoveViewportWidgetContent"), 0x3d0);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("AddViewportWidgetForPlayer")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("AddViewportWidgetForPlayer"), 0x3d8);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("RemoveViewportWidgetForPlayer")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("RemoveViewportWidgetForPlayer"), 0x3e0);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("DetachViewportClient")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("DetachViewportClient"), 0x3e8);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("Tick")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("Tick"), 0x3f0);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("RequiresUncapturedAxisInput")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("RequiresUncapturedAxisInput"), 0x3f8);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("SetViewportFrame")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("SetViewportFrame"), 0x400);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("SetViewport")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("SetViewport"), 0x408);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("SetDropDetail")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("SetDropDetail"), 0x410);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("ConsoleCommand")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("ConsoleCommand"), 0x418);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("GetMousePosition")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("GetMousePosition"), 0x420);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("SetupInitialLocalPlayer")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("SetupInitialLocalPlayer"), 0x428);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("UpdateActiveSplitscreenType")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("UpdateActiveSplitscreenType"), 0x430);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("LayoutPlayers")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("LayoutPlayers"), 0x438);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("GetSubtitleRegion")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("GetSubtitleRegion"), 0x440);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("DrawTitleSafeArea")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("DrawTitleSafeArea"), 0x448);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("PostRender")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("PostRender"), 0x450);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("DrawTransition")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("DrawTransition"), 0x458);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("DrawTransitionMessage")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("DrawTransitionMessage"), 0x460);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("NotifyPlayerAdded")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("NotifyPlayerAdded"), 0x468);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("NotifyPlayerRemoved")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("NotifyPlayerRemoved"), 0x470);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("PeekTravelFailureMessages")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("PeekTravelFailureMessages"), 0x478);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("PeekNetworkFailureMessages")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("PeekNetworkFailureMessages"), 0x480);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("VerifyPathRenderingComponents")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("VerifyPathRenderingComponents"), 0x488);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("GetEngineShowFlags")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("GetEngineShowFlags"), 0x490);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("ShouldDPIScaleSceneCanvas")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("ShouldDPIScaleSceneCanvas"), 0x498);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("UpdateViewportClientWindowDPIScale")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("UpdateViewportClientWindowDPIScale"), 0x4a0);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("GetStatUnitData")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("GetStatUnitData"), 0x4a8);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("GetStatHitchesData")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("GetStatHitchesData"), 0x4b0);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("GetEnabledStats")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("GetEnabledStats"), 0x4b8);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("SetEnabledStats")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("SetEnabledStats"), 0x4c0);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("IsStatEnabled")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("IsStatEnabled"), 0x4c8);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("IgnoreInput")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("IgnoreInput"), 0x4d0);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("GetMouseCaptureMode")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("GetMouseCaptureMode"), 0x4d8);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("CaptureMouseOnLaunch")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("CaptureMouseOnLaunch"), 0x4e0);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("LockDuringCapture")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("LockDuringCapture"), 0x4e8);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("ShouldAlwaysLockMouse")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("ShouldAlwaysLockMouse"), 0x4f0);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("HideCursorDuringCapture")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("HideCursorDuringCapture"), 0x4f8);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("OnQueryPopupMethod")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("OnQueryPopupMethod"), 0x500);
}

if (auto it = UGameViewportClient::VTableLayoutMap.find(STR("HandleNavigation")); it == UGameViewportClient::VTableLayoutMap.end())
{
    UGameViewportClient::VTableLayoutMap.emplace(STR("HandleNavigation"), 0x508);
}
