// *********************************************************************
//   IQRF HWPIDs                                                       *
// *********************************************************************
// Copyright (c) IQRF Tech s.r.o.
//
// File:    $RCSfile: IQRF_HWPID.h,v $
// Version: $Revision: 1.8 $
// Date:    $Date: 2017/11/15 14:24:43 $
//
// Revision history:
//   2017/11/16  Release for DPA 3.02
//   2017/08/14  Release for DPA 3.01
//
// *********************************************************************

// Online DPA documentation http://www.iqrf.org/DpaTechGuide/

#ifndef _IQRFSTD_HWPID_
#define _IQRFSTD_HWPID_

//# Class #1 #################################################################################
// Manufacturer: bits:0-9, bit.0=0 (even numbers, but not 0x0000)
// Product: bits:10-15 (6 bits)
//############################################################################################
#define HWPID_CLS1(prod,man)  ( (uns16)(man) | ( (uns16)(prod) << 10 ) )

// -------------------------------------------------------------------------------------------
// MICRORISC s.r.o.
#define	HWPID_MICRORISC	  0x002

// DDC-SE01 sensor example 
// (0002_DDC-SE01.c)
#define	HWPID_MICRORISC__DEMO_DDC_SE01				  HWPID_CLS1( 0x00, HWPID_MICRORISC ) // 0x0002

// DDC-SE01 + DDC-RE01 sensor example 
// (0402_DDC-SE+RE.c)
#define	HWPID_MICRORISC__DEMO_DDC_SE01_RE01			  HWPID_CLS1( 0x01, HWPID_MICRORISC ) // 0x0402

// TR temperature sensor example 
// (0802_TrThermometer.c)
#define	HWPID_MICRORISC__DEMO_TR_THERMOMETER		  HWPID_CLS1( 0x02, HWPID_MICRORISC ) // 0x0802

// Binary output example using LEDs and DDC-RE01 
// (0C02_BinaryOutput-Template.c)
#define	HWPID_MICRORISC__DEMO_BINARY_OUTPUT			  HWPID_CLS1( 0x03, HWPID_MICRORISC ) // 0x0C02

// Light example 
// (1002_Light-Template.c)
#define	HWPID_MICRORISC__DEMO_LIGHT					  HWPID_CLS1( 0x04, HWPID_MICRORISC ) // 0x1002

// Sensor template 
// (1402_Sensor-Template.c)
#define	HWPID_MICRORISC__DEMO_SENSOR_TEMPLATE		  HWPID_CLS1( 0x05, HWPID_MICRORISC ) // 0x1402

//# Class #2 #################################################################################
// Manufacturer: bits:0-11, bit.0=1 (odd numbers, never value 0x???F)
// Product: bits:12-15 (4 bits)
//############################################################################################
#define HWPID_CLS2(prod,man)  ( (uns16)(man) | ( (uns16)(prod) << 12 ) )

// -------------------------------------------------------------------------------------------
// PROTRONIX s.r.o.
#define	HWPID_PROTRONIX	  0x001

// Temperature+Humidity+CO2 sensor 
// (0001_Protronix-T+RH+CO2.c)
#define	HWPID_PROTRONIX__TEMP_HUM_CO2				  HWPID_CLS2( 0x0, HWPID_PROTRONIX ) // 0x0001

// Temperature+Humidity+VOC sensor 
// (1001_Protronix-T+RH+VOC.c)
#define	HWPID_PROTRONIX__TEMP_HUM_VOC				  HWPID_CLS2( 0x1, HWPID_PROTRONIX ) // 0x1001

// Temperature+Humidity+CO2 sensor + Relay
// (2001_Protronix-T+RH+CO2+Relay.c)
#define	HWPID_PROTRONIX__TEMP_HUM_CO2_RELAY			  HWPID_CLS2( 0x2, HWPID_PROTRONIX ) // 0x2001

// Temperature+Humidity sensor 
// (3001_Protronix-T+RH.c)
#define	HWPID_PROTRONIX__TEMP_HUM					  HWPID_CLS2( 0x3, HWPID_PROTRONIX ) // 0x3001

// -------------------------------------------------------------------------------------------
// NETIO products a.s.
#define	HWPID_NETIO		  0x003

// Cobra 1 - 1x power plug 
// (0003-Netio-Cobra1.c)
#define	HWPID_NETIO__COBRA1							  HWPID_CLS2( 0x0, HWPID_NETIO )	 // 0x0003

// -------------------------------------------------------------------------------------------
// DATmoLUX a.s.
#define	HWPID_DATMOLUX	  0x005

// -------------------------------------------------------------------------------------------
// CITIQ s.r.o.
#define	HWPID_CITIQ		  0x007

// -------------------------------------------------------------------------------------------
// Austyn International s.r.o.
#define	HWPID_AUSTYN	  0x009

// Room temperature controller 
// (0009_RoomTemperatureController.c)
#define	HWPID_AUSTYN__ROOM_CONTROLLER				  HWPID_CLS2( 0x0, HWPID_AUSTYN ) // 0x0009

// -------------------------------------------------------------------------------------------

#endif	// _IQRFSTD_HWPID_

//############################################################################################
