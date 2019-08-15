#ifdef(View_POV_Include_Stack)
    #debug "  - including IOR_Gases.inc\n"
#end
/////////////////////////////////////////////////
//                GASES AT STP                 //
/////////////////////////////////////////////////
#declare Air_STP_IOR = 1.000277;
#declare Bromine_gas_IOR = 1.001132;

/////////////////////////////////////////////////
//           GASES AT 0°C AND 1 ATM            //
/////////////////////////////////////////////////
#declare Air_0C_IOR = 1.000293;
#declare Carbon_dioxide_0C_IOR = 1.001;
#declare Disilane_0C_IOR = 1.0016574; // Si2H6
#declare Helium_0C_IOR = 1.000036;
#declare Hydrogen_0C_IOR = 1.000132;

//
#declare Perfluoro_n_butane = 1.0014: // C4F10 => https://twiki.cern.ch/twiki/bin/view/LHCb/C4F10

#ifdef(View_POV_Include_Stack)
    #debug "    ...done!\n"
#end

// END OF FILE IOR_Gases.inc
