// *********************************************************************
//   IQRF standards header file                                        *
// *********************************************************************
// Copyright (c) IQRF Tech s.r.o.
//
// File:    $RCSfile: IQRFstandard.h,v $
// Version: $Revision: 1.5 $
// Date:    $Date: 2017/11/15 14:24:43 $
//
// Revision history:
//   2017/11/16  Release for DPA 3.02
//   2017/08/14  Release for DPA 3.01
//
// *********************************************************************

// Online DPA documentation http://www.iqrf.org/DpaTechGuide/

#ifndef _IQRFSTD_HEADER_
#define _IQRFSTD_HEADER_

//############################################################################################

// Enumerate command valid for all standards
#define	PCMD_STD_ENUMERATE						0x3E

// -------------------------------------------------------------------------------------------
// IQRF Sensors standard
// -------------------------------------------------------------------------------------------
// IQRF Sensors standard peripheral
#define	PNUM_STD_SENSORS						0x5E
// IQRF Sensors standard peripheral type
#define	PERIPHERAL_TYPE_STD_SENSORS				0x5E

// IQRF Sensors standard peripheral - read sensor values command
#define	PCMD_STD_SENSORS_READ_VALUES			0x00
// IQRF Sensors standard peripheral - read sensor types and values command
#define	PCMD_STD_SENSORS_READ_TYPES_AND_VALUES	0x01

// IQRF Sensors standard peripheral - sensor types
//  2 bytes
#define	STD_SENSOR_TYPE_TEMPERATURE				0x01
#define	STD_SENSOR_TYPE_CO2						0x02
#define	STD_SENSOR_TYPE_VOC						0x03
#define	STD_SENSOR_TYPE_EXTRA_LOW_VOLTAGE		0x04
#define	STD_SENSOR_TYPE_EARTHS_MAGNETIC_FIELD	0x05

//  1 byte
#define	STD_SENSOR_TYPE_HUMIDITY				0x80
#define	STD_SENSOR_TYPE_BINARYDATA7				0x81

//  4 bytes
#define	STD_SENSOR_TYPE_BINARYDATA30			0xA0

// IQRF Sensors standard peripheral - FRC commands
#define	FRC_STD_SENSORS_BIT						0x10
#define	FRC_STD_SENSORS_1B						0x90
#define	FRC_STD_SENSORS_2B						0xE0

// -------------------------------------------------------------------------------------------
// IQRF Binary Outputs standard
// -------------------------------------------------------------------------------------------
// IQRF Binary Outputs standard peripheral
#define	PNUM_STD_BINARY_OUTPUTS					0x4B
// IQRF Binary Outputs peripheral type
#define	PERIPHERAL_TYPE_STD_BINARY_OUTPUTS		0x4B

// IQRF Sensors standard peripheral - read sensor values command
#define	PCMD_STD_BINARY_OUTPUTS_SET				0x00

// -------------------------------------------------------------------------------------------
// IQRF Light standard
// -------------------------------------------------------------------------------------------
// IQRF Light standard peripheral
#define	PNUM_STD_LIGHT							0x71
// IQRF Light standard peripheral type
#define	PERIPHERAL_TYPE_STD_LIGHT				0x71

// IQRF Light standard peripheral - Set Power
#define	PCMD_STD_LIGHT_SET						0x00
// IQRF Light standard peripheral - Increment Power
#define	PCMD_STD_LIGHT_INC						0x01
// IQRF Light standard peripheral - Decrement Power
#define	PCMD_STD_LIGHT_DEC						0x02

// IQRF Sensors standard peripheral - FRC commands
#define	FRC_STD_LIGHT_ONOFF						0x10
#define	FRC_STD_LIGHT_ALARM						0x11

// -------------------------------------------------------------------------------------------

#endif	// _IQRFSTD_HEADER_

//############################################################################################
