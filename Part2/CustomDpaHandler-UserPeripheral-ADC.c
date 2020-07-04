// This example implements the user peripherals Analog-Digital Converter
// PNUM = 0x20 and PCMD = 0 returns 2 bytes with 10b ADC result from pin C5 (AN4) at PData
// At DDC-SE-01 allows to read:
// * Voltage measurement using the potentiometer
// Result is returned in the first 2 bytes of PData, result is (PData[0],PData[1]) 

// Default IQRF include (modify the path according to your setup)
#include "IQRF.h"

// Default DPA header (modify the path according to your setup)
#include "DPA.h"
// Default Custom DPA Handler header (modify the path according to your setup)
#include "DPAcustomHandler.h"

uns16 ADC_result, voltage, tmp;

// Must be the 1st defined function in the source code in order to be placed at the correct FLASH location!
//############################################################################################
bit CustomDpaHandler()
//############################################################################################
{
  // Handler presence mark
  clrwdt();

  // Detect DPA event to handle
  switch ( GetDpaEvent() )
  {
	// -------------------------------------------------
	case DpaEvent_Interrupt:
	  // Do an extra quick background interrupt work
	  // ! The time spent handling this event is critical.If there is no interrupt to handle return immediately otherwise keep the code as fast as possible.
	  // ! Make sure the event is the 1st case in the main switch statement at the handler routine.This ensures that the event is handled as the 1st one.
	  // ! It is desirable that this event is handled with immediate return even if it is not used by the custom handler because the Interrupt event is raised on every MCU interrupt and the �empty� return handler ensures the shortest possible interrupt routine response time.
	  // ! Only global variables or local ones marked by static keyword can be used to allow reentrancy.
	  // ! Make sure race condition does not occur when accessing those variables at other places.
	  // ! Make sure( inspect.lst file generated by C compiler ) compiler does not create any hidden temporary local variable( occurs when using division, multiplication or bit shifts ) at the event handler code.The name of such variable is usually Cnumbercnt.
	  // ! Do not call any OS functions except setINDFx().
	  // ! Do not use any OS variables especially for writing access.
	  // ! All above rules apply also to any other function being called from the event handler code, although calling any function from Interrupt event is not recommended because of additional MCU stack usage.

DpaHandleReturnTRUE:
	  return TRUE;

	  // -------------------------------------------------
	case DpaEvent_Init:
	  // Do a one time initialization work before main loop starts

	  // C5 (AN4) as input 
	  TRISA.5 = 1;
	  TRISC.6 = 1;
	  TRISB.4 = 1;

	  break;

	  // -------------------------------------------------
	case DpaEvent_DpaRequest:
	  // Called to interpret DPA request for peripherals
	  // -------------------------------------------------
	  // Peripheral enumeration
	  if ( IsDpaEnumPeripheralsRequest() )
	  {
		// We implement 1 user peripheral
		_DpaMessage.EnumPeripheralsAnswer.UserPerNr = 2;
		FlagUserPer( _DpaMessage.EnumPeripheralsAnswer.UserPer, PNUM_USER + 0 );
		FlagUserPer( _DpaMessage.EnumPeripheralsAnswer.UserPer, PNUM_USER + 1 );
		_DpaMessage.EnumPeripheralsAnswer.HWPID = 0x000F;
		_DpaMessage.EnumPeripheralsAnswer.HWPIDver = 0xabcd;

		goto DpaHandleReturnTRUE;
	  }
	  // -------------------------------------------------
	  // Get information about peripheral
	  else if ( IsDpaPeripheralInfoRequest() )
	  {
		if ( _PNUM == PNUM_USER + 0 || _PNUM == PNUM_USER + 1 )
		{
		  _DpaMessage.PeripheralInfoAnswer.PerT = PERIPHERAL_TYPE_ADC;
		  _DpaMessage.PeripheralInfoAnswer.PerTE = PERIPHERAL_TYPE_EXTENDED_READ;
		  goto DpaHandleReturnTRUE;
		}

		break;
	  }
	  // -------------------------------------------------
	  else
	  {
		// Handle peripheral command
		if ( _PNUM == PNUM_USER + 0 || _PNUM == PNUM_USER + 1 )
		{
		  // Check command
		  if ( _PCMD != 0 )
			DpaApiReturnPeripheralError( ERROR_PCMD );

		  // Check data length
		  if ( _DpaDataLength != 0 )
			DpaApiReturnPeripheralError( ERROR_DATA_LEN );

		  if ( _PNUM == PNUM_USER + 0 )
		  {
			// ADC init (for more info see PIC datasheet) pin C5 (AN4) as analog input 
			ANSELA.5 = 1;
			// ADC setting (AN4 channel)
			ADCON0 = 0b0.00100.01;
		  }
		  else
		  {
			// ADC init (for more info see PIC datasheet) pin C1 (AN0) as analog input 
			ANSELA.0 = 1;
			// ADC setting (AN0 channel)
			ADCON0 = 0b0.00000.01;
		  }

		  // ADC result - right justified, Fosc/8
		  ADCON1 = 0b10010000;

		  // start ADC
		  GO = 1;
		  // wait for ADC finish
		  while ( GO );

		  // 10b result is stored in ADRESH and ADRESL
		  ADC_result.high8 = ADRESH & 0x03;		// 10b result is stored
		  ADC_result.low8  = ADRESL;	
		  voltage = ADC_result * 30;		//   FREE complirer supports max. 16bit variables
		  voltage /= 1024;
		  tmp = voltage / 10;
		  _DpaMessage.Response.PData[1] = voltage;
		  _DpaMessage.Response.PData[0] = tmp;
		  _DpaDataLength = sizeof( uns16 );

		  goto DpaHandleReturnTRUE;
		}
	  }
  }

  return FALSE;
}

//############################################################################################
// Default Custom DPA Handler header; 2nd include to implement Code bumper to detect too long code of the Custom DPA Handler (modify the path according to your setup) 
#include "DPAcustomHandler.h"
//############################################################################################
