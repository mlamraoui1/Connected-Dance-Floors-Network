// *********************************************************************
//      				   IQRF OS functions						   *
// *********************************************************************
// Intended for:
//    OS: v4.02D
//
// Online IQRF OS Reference Guide: http://www.iqrf.org/IQRF-OS-Reference-guide/
//
// Copyright (c) IQRF Tech s.r.o.
//
// File:    IQRF-functions.h
// Version: v1.00                                   Revision: 22/08/2017
//
// Revision history:
//   v1.00: 22/08/2017  First release for OS 4.02D.
//
// *********************************************************************
 
#pragma optimize 0
#pragma update_PAGE 0
#pragma update_RP 0

#pragma origin 0x3810
void dummy()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x3816
void iqrfSleep()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x3819
void _debug()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#define debug()	    \
	do {			\
		_debug();	\
        nop();      \
	} while (0)

#pragma origin 0x381c
void moduleInfo()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x3822
void pulsingLEDR()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x3825
void pulseLEDR()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x3828
void stopLEDR()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x382b
void pulsingLEDG()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x382e
void pulseLEDG()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x3831
void stopLEDG()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x3834
void setOnPulsingLED(uns8 ticks @ W)
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x3837
void setOffPulsingLED(uns8 ticks @ W)
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x383a
uns8 eeReadByte(uns8 address @ W)
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
  return 1;
}

#pragma origin 0x383d
bit eeReadData(uns8 address @ param2, uns8 length @ W)
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
  return Carry;
}

#pragma origin 0x3840
void eeWriteByte(uns8 address @ param2, uns8 data @ W)
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x3843
void eeWriteData(uns8 address @ param2, uns8 length @ W)
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x3846
uns8 readFromRAM(uns16 address @ FSR0)
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
  return 1;
}

#pragma origin 0x384c
void clearBufferINFO()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x384f
void swapBufferINFO()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x3852
bit compareBufferINFO2RF(uns8 length @ W)
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
  return Carry;
}

#pragma origin 0x3855
void copyBufferINFO2COM()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x3858
void copyBufferINFO2RF()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x385b
void copyBufferRF2COM()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x385e
void copyBufferRF2INFO()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x3861
void copyBufferCOM2RF()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x3864
void copyBufferCOM2INFO()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x3867
void copyMemoryBlock(uns16 from @ FSR0, uns16 to @ FSR1, uns8 length @ W)
{
  #asm
    DW 0x2000
  #endasm
 #pragma updateBank exit=UserBank_01
}

#pragma origin 0x386a
void startDelay(uns8 ticks @ W)
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x386d
void startLongDelay(uns16 ticks @ param3)
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x3870
bit isDelay()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
  return Carry;
}

#pragma origin 0x3873
void waitDelay(uns8 ticks @ W)
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x3876
void waitMS(uns8 ms @ W)
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x3879
void startCapture()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x387c
void captureTicks()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x3882
void waitNewTick()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x3885
void enableSPI()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x3888
void disableSPI()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x388b
void startSPI(uns8 length @ W)
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x388e
void stopSPI()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x3891
void restartSPI()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x3894
bit getStatusSPI()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
  return Carry;
}

#pragma origin 0x3897
void setRFpower(uns8 level @ W)
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x389d
void setRFchannel(uns8 channel @ W)
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x38a0
void setRFmode(uns8 mode @ W)
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x38a3
void setRFspeed(uns8 speed @ W)
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x38a6
void setRFsleep()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x38a9
void setRFready()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x38ac
void RFTXpacket()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x38af
bit RFRXpacket()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
  return Carry;
}

#pragma origin 0x38b2
bit checkRF(uns8 level @ W)
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
  return Carry;
}

#pragma origin 0x38b8
bit amIBonded()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
  return Carry;
}

#pragma origin 0x38bb
void removeBond()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x38be
bit bondNewNode(uns8 address @ W)
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
  return Carry;
}

#pragma origin 0x38c1
bit isBondedNode(uns8 node @ W)
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
  return Carry;
}

#pragma origin 0x38c4
void removeBondedNode(uns8 node @ W)
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x38c7
bit rebondNode(uns8 node @ W)
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
  return Carry;
}

#pragma origin 0x38ca
void clearAllBonds()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x38cd
void setNonetMode()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x38d0
void setCoordinatorMode()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x38d3
void setNodeMode()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x38d6
void setNetworkFilteringOn()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x38d9
void setNetworkFilteringOff()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x38dc
uns8 getNetworkParams()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
  return 1;
}

#pragma origin 0x38df
void setRoutingOn()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x38e2
void setRoutingOff()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x38e8
void answerSystemPacket()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x38eb
uns8 discovery(uns8 MaxNodeAddress @ W)
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
  return 1;
}

#pragma origin 0x38ee
bit wasRouted()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
  return Carry;
}

#pragma origin 0x38f1
bit optimizeHops(uns8 method @ W)
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
  return Carry;
}

#pragma origin 0x38f4
uns8 getSupplyVoltage()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
  return 1;
}

#pragma origin 0x38f7
int8 getTemperature()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
  return W;
}

#pragma origin 0x38fa
void clearBufferRF()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x3910
bit isDiscoveredNode(uns8 address @ W)
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
  return Carry;
}

#pragma origin 0x3913
void enableRFPGM()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x3916
void disableRFPGM()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x3919
void setupRFPGM(uns8 x @ W)
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x391c
void runRFPGM()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x391f
void iqrfDeepSleep()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x3922
uns8 wasRFICrestarted()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
  return 1;
}

#pragma origin 0x3925
bit eeeWriteData(uns16 address @ param3)
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
  return Carry;
}

#pragma origin 0x3928
bit eeeReadData(uns16 address @ param3)
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
  return Carry;
}

#pragma origin 0x3931
void setINDF0(uns8 value @ W)
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x3934
void setINDF1(uns8 value @ W)
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x3937
uns8 getRSSI()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
  return 1;
}

#pragma origin 0x393a
void removeBondAddress()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x393d
uns8 sendFRC(uns8 command @ W)
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
  return 1;
}

#pragma origin 0x3940
void responseFRC()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x3943
bit bondRequestAdvanced()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
  return Carry;
}

#pragma origin 0x3946
bit prebondNodeAtNode()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
  return Carry;
}

#pragma origin 0x3949
bit nodeAuthorization(uns8 address @ W)
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
  return Carry;
}

#pragma origin 0x394c
void dummy01()
{
  #asm
  DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x3958
void setAccessPassword()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x395b
void setUserKey()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x3961
bit amIRecipientOfFRC()
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
  return Carry;
}

#pragma origin 0x3967
void encryptBufferRF(uns8 blocks @ W)
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x396a
void decryptBufferRF(uns8 blocks @ W)
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma origin 0x396d
bit prebondNodeAtCoordinator(uns8 address @ W)
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
  return Carry;
}

#pragma origin 0x3970
uns8 setFSRs(uns8 fsrs @ W)
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
  return 1;
}

// For internal usage only
#pragma origin 0x3973
void updateCRC16(uns8 value @ W)
{
  #asm
    DW 0x2000
  #endasm
  #pragma updateBank exit=UserBank_01
}

#pragma optimize 1
#pragma update_RP 1
#pragma update_PAGE 1
#pragma origin __APPLICATION_ADDRESS
