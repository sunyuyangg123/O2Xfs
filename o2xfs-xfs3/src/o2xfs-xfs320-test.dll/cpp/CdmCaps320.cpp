#include "at_o2xfs_xfs_cdm_v3_20_CdmCaps3_20Test.h"

#include <Windows.h>
#include <XFSCDM.H>
#include "at.o2xfs.win32.h"

static WFSCDMCAPS caps;
static LPSTR lpszExtra = "Key1=Value1\0Key2=Value2\0";

JNIEXPORT jobject JNICALL Java_at_o2xfs_xfs_cdm_v3_120_CdmCaps3_120Test_buildCdmCaps3_120(JNIEnv *env, jobject obj) {
	caps.wClass = WFS_SERVICE_CLASS_CDM;
	caps.fwType = WFS_CDM_SELFSERVICEBILL;
	caps.wMaxDispenseItems = 40;
	caps.bCompound = false;
	caps.bShutter = true;
	caps.bShutterControl = false;
	caps.fwRetractAreas = WFS_CDM_RA_REJECT | WFS_CDM_RA_RETRACT | WFS_CDM_RA_TRANSPORT;
	caps.fwRetractTransportActions = WFS_CDM_PRESENT | WFS_CDM_RETRACT | WFS_CDM_REJECT;
	caps.fwRetractStackerActions = WFS_CDM_PRESENT | WFS_CDM_RETRACT | WFS_CDM_REJECT;
	caps.bSafeDoor = false;
	caps.bCashBox = false;
	caps.bIntermediateStacker = true;
	caps.bItemsTakenSensor = true;
	caps.fwPositions = WFS_CDM_POSFRONT;
	caps.fwMoveItems = WFS_CDM_FROMCU | WFS_CDM_TOTRANSPORT;
	caps.fwExchangeType = WFS_CDM_EXBYHAND;
	caps.lpszExtra = lpszExtra;
	caps.dwGuidLights[WFS_CDM_GUIDANCE_POSOUTFRONT] = WFS_CDM_GUIDANCE_SLOW_FLASH | WFS_CDM_GUIDANCE_MEDIUM_FLASH | WFS_CDM_GUIDANCE_QUICK_FLASH | WFS_CDM_GUIDANCE_GREEN | WFS_CDM_GUIDANCE_RED;
	caps.bPowerSaveControl = true;
	caps.bPrepareDispense = true;
	caps.bAntiFraudModule = true;

	return NewBuffer(env, &caps, sizeof(WFSCDMCAPS));
}