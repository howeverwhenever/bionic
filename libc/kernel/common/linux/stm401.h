/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef __STM401_H__
#define __STM401_H__
#define STM401_IOCTL_BASE 77
#define STM401_IOCTL_BOOTLOADERMODE   _IOW(STM401_IOCTL_BASE, 0, unsigned char)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define STM401_IOCTL_NORMALMODE   _IOW(STM401_IOCTL_BASE, 1, unsigned char)
#define STM401_IOCTL_MASSERASE   _IOW(STM401_IOCTL_BASE, 2, unsigned char)
#define STM401_IOCTL_SETSTARTADDR   _IOW(STM401_IOCTL_BASE, 3, unsigned int)
#define STM401_IOCTL_TEST_READ   _IOR(STM401_IOCTL_BASE, 4, unsigned char)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define STM401_IOCTL_TEST_WRITE   _IOW(STM401_IOCTL_BASE, 5, unsigned char)
#define STM401_IOCTL_TEST_WRITE_READ   _IOWR(STM401_IOCTL_BASE, 6, unsigned short)
#define STM401_IOCTL_SET_MAG_DELAY   _IOW(STM401_IOCTL_BASE, 7, unsigned short)
#define STM401_IOCTL_TEST_BOOTMODE   _IOW(STM401_IOCTL_BASE, 8, unsigned char)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define STM401_IOCTL_SET_ACC_DELAY   _IOW(STM401_IOCTL_BASE, 9, unsigned short)
#define STM401_IOCTL_SET_MOTION_DELAY   _IOW(STM401_IOCTL_BASE, 10, unsigned char)
#define STM401_IOCTL_SET_GYRO_DELAY   _IOW(STM401_IOCTL_BASE, 11, unsigned short)
#define STM401_IOCTL_SET_DEBUG   _IOW(STM401_IOCTL_BASE, 12, unsigned char)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define STM401_IOCTL_SET_USER_PROFILE   _IOW(STM401_IOCTL_BASE, 13, int)
#define STM401_IOCTL_SET_GPS_DATA   _IOW(STM401_IOCTL_BASE, 14, int)
#define STM401_IOCTL_SET_PRES_DELAY   _IOW(STM401_IOCTL_BASE, 15, unsigned short)
#define STM401_IOCTL_SET_REF_ALTITUDE   _IOW(STM401_IOCTL_BASE, 16, int)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define STM401_IOCTL_SET_ACTIVE_MODE   _IOW(STM401_IOCTL_BASE, 17, unsigned char)
#define STM401_IOCTL_SET_PASSIVE_MODE   _IOW(STM401_IOCTL_BASE, 18, unsigned char)
#define STM401_IOCTL_SET_FACTORY_MODE   _IOW(STM401_IOCTL_BASE, 19, unsigned char)
#define STM401_IOCTL_GET_SENSORS   _IOR(STM401_IOCTL_BASE, 20, unsigned char)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define STM401_IOCTL_SET_SENSORS   _IOW(STM401_IOCTL_BASE, 21, unsigned char)
#define STM401_IOCTL_GET_VERSION   _IOR(STM401_IOCTL_BASE, 22, unsigned char)
#define STM401_IOCTL_SET_MONITOR_DELAY   _IOW(STM401_IOCTL_BASE, 23, unsigned char)
#define STM401_IOCTL_GET_DOCK_STATUS   _IOR(STM401_IOCTL_BASE, 24, unsigned char)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define STM401_IOCTL_SET_ORIENTATION_DELAY   _IOW(STM401_IOCTL_BASE, 25, unsigned char)
#define STM401_IOCTL_SET_EQUIPMENT_TYPE   _IOW(STM401_IOCTL_BASE, 26, unsigned char)
#define STM401_IOCTL_SET_POWER_MODE   _IOW(STM401_IOCTL_BASE, 27, unsigned char)
#define STM401_IOCTL_GET_ALGOS   _IOR(STM401_IOCTL_BASE, 28, char*)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define STM401_IOCTL_SET_ALGOS   _IOW(STM401_IOCTL_BASE, 29, char*)
#define STM401_IOCTL_GET_MAG_CAL   _IOR(STM401_IOCTL_BASE, 30, unsigned char*)
#define STM401_IOCTL_SET_MAG_CAL   _IOW(STM401_IOCTL_BASE, 31, unsigned char*)
#define STM401_IOCTL_SET_MOTION_DUR   _IOW(STM401_IOCTL_BASE, 33, unsigned int)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define STM401_IOCTL_SET_ZRMOTION_DUR   _IOW(STM401_IOCTL_BASE, 35, unsigned int)
#define STM401_IOCTL_GET_WAKESENSORS   _IOR(STM401_IOCTL_BASE, 36, unsigned char)
#define STM401_IOCTL_SET_WAKESENSORS   _IOW(STM401_IOCTL_BASE, 37, unsigned char)
#define STM401_IOCTL_GET_VERNAME   _IOW(STM401_IOCTL_BASE, 38, char*)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define STM401_IOCTL_SET_POSIX_TIME   _IOW(STM401_IOCTL_BASE, 39, unsigned long)
#define STM401_IOCTL_SET_CONTROL_REG   _IOW(STM401_IOCTL_BASE, 40, char*)
#define STM401_IOCTL_GET_STATUS_REG   _IOR(STM401_IOCTL_BASE, 41, char*)
#define STM401_IOCTL_GET_TOUCH_REG   _IOR(STM401_IOCTL_BASE, 42, char*)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define STM401_IOCTL_SET_ALGO_REQ   _IOR(STM401_IOCTL_BASE, 43, char*)
#define STM401_IOCTL_GET_ALGO_EVT   _IOR(STM401_IOCTL_BASE, 44, char*)
#define STM401_IOCTL_GET_AOD_INSTRUMENTATION_REG   _IOR(STM401_IOCTL_BASE, 45, char*)
#define STM401_IOCTL_WRITE_REG   _IOR(STM401_IOCTL_BASE, 46, char*)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define STM401_IOCTL_READ_REG   _IOR(STM401_IOCTL_BASE, 47, char*)
#define STM401_IOCTL_SET_STEP_COUNTER_DELAY   _IOW(STM401_IOCTL_BASE, 48, unsigned short)
#define FW_VERSION_SIZE 12
#define STM401_CONTROL_REG_SIZE 200
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define STM401_STATUS_REG_SIZE 8
#define STM401_TOUCH_REG_SIZE 8
#define STM401_MAG_CAL_SIZE 26
#define STM_AOD_INSTRUMENTATION_REG_SIZE 256
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define STM401_AS_DATA_BUFF_SIZE 20
#define STM401_MS_DATA_BUFF_SIZE 20
#define STM401_CAMERA_DATA 0x01
#define M_ACCEL 0x0001
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define M_GYRO 0x0002
#define M_PRESSURE 0x0004
#define M_ECOMPASS 0x0008
#define M_TEMPERATURE 0x0010
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define M_ALS 0x0020
#define M_STEP_DETECTOR 0x0040
#define M_STEP_COUNTER 0x0080
#define M_LIN_ACCEL 0x0100
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define M_QUATERNION 0x0200
#define M_GRAVITY 0x0400
#define M_DISP_ROTATE 0x0800
#define M_DISP_BRIGHTNESS 0x1000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define M_IR_GESTURE 0x2000
#define M_IR_RAW 0x4000
#define M_UNCALIB_GYRO 0x8000
#define M_UNCALIB_MAG 0x8000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define M_DOCK 0x0001
#define M_PROXIMITY 0x0002
#define M_TOUCH 0x0004
#define M_HUB_RESET 0x0080
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define M_FLATUP 0x0100
#define M_FLATDOWN 0x0200
#define M_STOWED 0x0400
#define M_CAMERA_ACT 0x0800
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define M_NFC 0x1000
#define M_SIM 0x2000
#define M_LOG_MSG 0x8000
#define M_MMOVEME 0x0001
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define M_NOMMOVE 0x0002
#define M_ALGO_MODALITY 0x0008
#define M_ALGO_ORIENTATION 0x0010
#define M_ALGO_STOWED 0x0020
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define M_ALGO_ACCUM_MODALITY 0x0040
#define M_ALGO_ACCUM_MVMT 0x0080
#define M_GENERIC_INTRPT 0x0080
#define STM401_IDX_MODALITY 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define STM401_IDX_ORIENTATION 1
#define STM401_IDX_STOWED 2
#define STM401_IDX_ACCUM_MODALITY 3
#define STM401_IDX_ACCUM_MVMT 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define STM401_NUM_ALGOS 5
#define STM401_EVT_SZ_TRANSITION 7
#define STM401_EVT_SZ_ACCUM_STATE 2
#define STM401_EVT_SZ_ACCUM_MVMT 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct stm401_android_sensor_data {
 int64_t timestamp;
 unsigned char type;
 unsigned char data[STM401_AS_DATA_BUFF_SIZE];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int size;
 unsigned char status;
};
struct stm401_moto_sensor_data {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int64_t timestamp;
 unsigned char type;
 unsigned char data[STM401_MS_DATA_BUFF_SIZE];
 int size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum STM401_data_types {
 DT_ACCEL,
 DT_GYRO,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DT_PRESSURE,
 DT_MAG,
 DT_ORIENT,
 DT_TEMP,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DT_ALS,
 DT_LIN_ACCEL,
 DT_QUATERNION,
 DT_GRAVITY,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DT_DISP_ROTATE,
 DT_DISP_BRIGHT,
 DT_DOCK,
 DT_PROX,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DT_FLAT_UP,
 DT_FLAT_DOWN,
 DT_STOWED,
 DT_MMMOVE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DT_NOMOVE,
 DT_CAMERA_ACT,
 DT_NFC,
 DT_ALGO_EVT,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DT_ACCUM_MVMT,
 DT_IR_GESTURE,
 DT_IR_RAW,
 DT_SIM,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DT_RESET,
 DT_GENERIC_INT,
 DT_STEP_COUNTER,
 DT_STEP_DETECTOR,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DT_UNCALIB_GYRO,
 DT_UNCALIB_MAG
};
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NO_DOCK,
 DESK_DOCK,
 CAR_DOCK
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum stm_mode {
 UNINITIALIZED,
 BOOTMODE,
 NORMALMODE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 FACTORYMODE
};
enum stm_commands {
 PASSWORD_RESET,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MASS_ERASE,
 PROGRAM_CODE,
 END_FIRMWARE,
 PASSWORD_RESET_DEFAULT,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 CRC_CHECK
};
struct stm_response {
 unsigned short header;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char len_lsb;
 unsigned char len_msb;
 unsigned char cmd;
 unsigned char data;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char crc_lsb;
 unsigned char crc_msb;
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */

