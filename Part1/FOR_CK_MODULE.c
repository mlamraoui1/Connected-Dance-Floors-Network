// Intended for:
//  CK-USB-04 module in order to receive information from the DK-EVAL module
//	
//
// *********************************************************************
#include "../../../Development/include/IQRF_OS/IQRF.h"	// System header files

// *********************************************************************
#define	RX_FILTER				0  // To be modified according to the application intended

// *********************************************************************
void APPLICATION()
{
	enableSPI();                     
	setRFmode(_WPE | _RX_STD | _TX_STD);
	_checkRFcfg_PQT = 1;			// Enable preamble quality test
    toutRF = 1;                     // Wait Packed End active so the toutRF can be set to minimum
   
    while (1)                       // Main cycle (perpetually repeated)
    {
		if (checkRF(RX_FILTER))		// RF signal detection (takes cca 1ms)
		{
			if (RFRXpacket())       // If anything was received
			{
				pulseLEDR();        // LED indication
				copyBufferRF2COM(); // Copy received RF data from bufferRF to bufferCOM
				startSPI(DLEN);     //  and send it via SPI
			}
		}
		
		if (getStatusSPI())         // Update SPIstatus, check SPI busy
                                    // SPIpacketLength: data length
             continue;              // Wait until message is picked up
			
		if (_SPIRX)                 // Anything received?
        {                           // Yes:
            if (_SPICRCok)          // CRCM matched?
            {                       // Yes:
 				DLEN = SPIpacketLength;
				copyBufferCOM2RF();	// Copy received SPI data from bufferCOM to bufferRF
				PIN = 0;
				RFTXpacket();
				pulseLEDG();		// LED indication
			}

			startSPI(0);            // Restart SPI communication
		}
    }
}

// *********************************************************************
