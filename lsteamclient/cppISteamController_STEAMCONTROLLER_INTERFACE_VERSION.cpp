#include "steamclient_private.h"
#include "steam_defs.h"
#include "steamworks_sdk_134/steam_api.h"
#include "cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION.h"
#include "struct_converters_134.h"
#ifdef __cplusplus
extern "C" {
#endif
bool cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Init(void *linux_side, const char * pchAbsolutePathToControllerConfigVDF)
{
    return ((ISteamController*)linux_side)->Init((const char *)pchAbsolutePathToControllerConfigVDF);
}

bool cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_Shutdown(void *linux_side)
{
    return ((ISteamController*)linux_side)->Shutdown();
}

void cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_RunFrame(void *linux_side)
{
    ((ISteamController*)linux_side)->RunFrame();
}

bool cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_GetControllerState(void *linux_side, uint32 unControllerIndex, SteamControllerState001_t * pState)
{
    SteamControllerState001_t lin_pState;
    win_to_lin_struct_SteamControllerState001_t_134(pState, &lin_pState);
    bool retval = ((ISteamController*)linux_side)->GetControllerState((uint32)unControllerIndex, &lin_pState);
    lin_to_win_struct_SteamControllerState001_t_134(&lin_pState, pState);
    return retval;
}

void cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_TriggerHapticPulse(void *linux_side, uint32 unControllerIndex, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)
{
    ((ISteamController*)linux_side)->TriggerHapticPulse((uint32)unControllerIndex, (ESteamControllerPad)eTargetPad, (unsigned short)usDurationMicroSec);
}

void cppISteamController_STEAMCONTROLLER_INTERFACE_VERSION_SetOverrideMode(void *linux_side, const char * pchMode)
{
    ((ISteamController*)linux_side)->SetOverrideMode((const char *)pchMode);
}

#ifdef __cplusplus
}
#endif
