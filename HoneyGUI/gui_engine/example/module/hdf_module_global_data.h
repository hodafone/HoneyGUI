#ifndef __MODULE_GLOBAL_DATA_H__
#define __MODULE_GLOBAL_DATA_H__

#ifdef __cplusplus
extern "C" {
#endif
#include <guidef.h>

typedef struct
{
    uint64_t distance_unit              : 1;
    uint64_t reserved                   : 27;
} T_FLAG_FIELD;

/**************************************************************************
* Charging state defination
***************************************************************************/
typedef enum
{
    NoCharge = 0,               /* Show not connect to plugs*/
    InCharging,        /* Device connect to the plugs*/
    ChargingComplete,      /* Show charging complete & still connect to plugs*/
} T_CHARGE_STATUS;

typedef struct
{
    volatile uint16_t year;    // 2000+
    volatile uint8_t month;    // 0-11
    volatile uint8_t day;      // 0-30
    volatile uint8_t seconds;  // 0-59
    volatile uint8_t minutes;  // 0-59
    volatile uint8_t hour;     // 0-23
} T_UTC_TIME;

typedef struct
{
    volatile T_FLAG_FIELD           flag_field;
    volatile uint8_t                language;
    volatile T_UTC_TIME             Global_Time;
    volatile T_CHARGE_STATUS        charger_status;
} __attribute__((packed)) RtkWristBandSysType_t;

extern RtkWristBandSysType_t RtkWristbandSys;

#ifdef __cplusplus
}
#endif

#endif //__MODULE_GLOBAL_DATA_H__

