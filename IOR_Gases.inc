#ifdef(View_POV_Include_Stack)
    #debug "  - including IOR_Gases.inc\n"
#end
/////////////////////////////////////////////////
//                GASES AT STP                 //
/////////////////////////////////////////////////
#declare Air_STP_IOR = 1.000277;

/////////////////////////////////////////////////
//           GASES AT 0°C AND 1 ATM            //
/////////////////////////////////////////////////
#declare Air_0C_IOR = 1.000293;
#declare Carbon_dioxide_0C_IOR = 1.001;
#declare Helium_0C_IOR = 1.000036;
#declare Hydrogen_0C_IOR = 1.000132;

#ifdef(View_POV_Include_Stack)
    #debug "    ...done!\n"
#end

// END OF FILE IOR_Gases.inc
