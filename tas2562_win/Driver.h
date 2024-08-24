#include <ntddk.h>
#include <wdf.h>
#include <initguid.h>

#include "device.h"
#include "trace.h"

EXTERN_C_START

DRIVER_INITIALIZE DriverEntry;
EVT_WDF_DRIVER_DEVICE_ADD Tas2562EvtDeviceAdd;
EVT_WDF_OBJECT_CONTEXT_CLEANUP Tas2562EvtDriverContextCleanup;

EXTERN_C_END
