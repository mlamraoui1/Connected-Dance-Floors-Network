// Intended for:
// 	 Testing one Sensor
// Description:
//   AD conversion is called in 1s period. RF packet is sent on every
//   change of result (out of tolerance). When the result is 0 it means  
//   That there is no pression applied on the sensor, when different to 0 
//   it means pression is applied.
// ---------------------------------------------------------------------

#include "../../../Development/include/IQRF_OS/IQRF.h"	// System header files

// *********************************************************************
#define TOLERANCE 		2  // Tolerance to be chosen

// *********************************************************************
// Functions definition
void InitADC(void);
void ReadAnalogInput(void);

// *********************************************************************
uns16 ADC_result, H_limit, L_limit, voltage, tmp;

// *********************************************************************

void APPLICATION()                  
{
	TRISA.5 = 1;							// potentiometer pins C5 (AN4) as input 
	TRISC.6 = 1;
	TRISB.4 = 1;
	InitADC();
	pulseLEDG();							// reset indication
	waitDelay(10);
	H_limit = 0x0FFF;
	L_limit = 0x0FFF;
	
	while(1)
	{	
		waitDelay(100);						// reading of AN input is every 1s
		ReadAnalogInput();
											
		if ((ADC_result > H_limit) || (ADC_result < L_limit))
		{									// AD result has changed more then +- tolerance
											//   from last measurement
											
			if (ADC_result < TOLERANCE)		// new limits setting
			{
				H_limit = TOLERANCE;
				L_limit = 0;	
			}
			else
			{								
				H_limit = ADC_result + TOLERANCE;
				L_limit = ADC_result - TOLERANCE;
			}
											// resolution is tenth volts because
			voltage = ADC_result * 30;		// CCX5 complirer supports max. 16bit variables
			voltage /= 1024;
			tmp = voltage / 10;
			
			bufferRF[0] = tmp;
			bufferRF[0] += '0'; 
			bufferRF[1]  = '.'; 			
			bufferRF[2] = voltage % 10;
			bufferRF[2] += '0';
			bufferRF[3] = 'V';	

			pulseLEDR();
			PIN  = 0;
			DLEN = 4;
			RFTXpacket(); 
		}			
	}	
}

void InitADC(void)			// Analog/Digital converter module initialisation
{
	ANSELA.5 = 1;							// pin C5 (AN4) as analog input 
	ADCON0  = 0b00010001;        			// ADC setting (AN4 channel)
	ADCON1  = 0b11010000;					// Coversion result - right justified, Conversion Speed = Fosc/16
}
//----------------------------------------------------------------------

void ReadAnalogInput(void)
{
	GO = 1;                         		
	while(GO);                      		
	
	ADC_result.high8 = ADRESH & 0x03;		// 10b result is stored in ADRESH and ADRESL
	ADC_result.low8  = ADRESL;				 
}
//----------------------------------------------------------------------
