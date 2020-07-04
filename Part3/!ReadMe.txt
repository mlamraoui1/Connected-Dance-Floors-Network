


PART 3:

This part is following the previous one and it's the final 
phase of the project, in this phase we will use the FRC protocol, 
the use of this protocol is explained in the project report.



Instructions :



1- Start opening the IQRF project "Mesh_Network_With_FRC" and 
   by seting up the network like the previous part, 
   but we will not use the same custom DPA handler.
   This time we will implement the C file "Pressure_Sensor_Network_FRC.c".


2- For the coordinator we will not implement any file because 
   we are working with the Data controlled mode.
   Implement the C file "Pressure_Sensor_Network_FRC.c".
   And then go to the Macros tab on the terminal window and choose the IoT starter KIT tab
   I already created a Macro named "Pres. Sen. Net. FRC" that sends the FRC command to all the nodes directly
   I chose to implement the FRC in a way that allows to receive responses form all the 64 nodes even if we are not using 
   them this way in the future if you choose to install more snors you will be able to use this project without modification.
   In this mode the response is returned in "FRCData" and the valus this time are 127 if the sensor is not pressed and lower 
   than 127 if pression is applied, all of this informations is explained with pictures and everything on the report.