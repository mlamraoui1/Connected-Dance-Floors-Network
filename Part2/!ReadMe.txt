**************************************************************************************
                                    PART 2
**************************************************************************************

Follow the DPA Quickstart guide for step-by-step instructions.

======================================================================================
Files included:
- HWP-demo                           .IQRFPRJ  IQRF IDE Project
- DPA-macros                         .IQRFMCR  Macros for IQRF IDE Project
- DPA-config                         .XML  Configuration file for HWP plug-ins

**************************************************************************************
In this part, we used the custom DPA Handler which one of the perks of using the IQRF technology.


Follow these instructions :

1- Before starting the project, some knowledge on the IQRF custom DPA Handlers is advised,  
   so try to watch the IQRF videos that are on the youtube page of the IQRF in order to 
   fully understand the work process. 



2- Start by opening the IQRF project Pressure_Sensor_DPA_Mode, 
   then try to set up the  network of one coordinator and 5 nodes 
   ( There is a video that shows how to set up the IQRF network easilly), 
   implement the standard hardware profiles and NOT THE DEMO ONE, 
   IT WILL NOT WORK WITH THE DEMO HARDWARE PROFILE.



3- After bonding the network and runing the Discovery on all the nodes,
   satrt by implementing the TR configuration for the the sensor and do not 
   forget to check the Custom DPA handler box, then implement the C file 
   CustomDPAHandler-UserPrephiral-ADC.c, in order to get to the response from the sensor
   we well have to use the DPA terminal this time and send the command to the sensor that we want 
   to receive the answer from, for example for the sensor number 1 :
   NADR:0001, PNUM:20, PCMD:00 and HWPID:FFFF, the voltage value will be returned
   in the first two bytes of PData[].  
