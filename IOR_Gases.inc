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
//
//
#declare Perfluoro_n_butane = 1.0014: // C4F10 => https://twiki.cern.ch/twiki/bin/view/LHCb/C4F10
#declare Acetone_Gas_IOR = 1.001090;
#declare Ethyl_Alcohol_Gas_IOR = 1.000878;
#declare Alcohol_Methyl_Gas_IOR = 1.000586;
#declare Ammonia_Gas_IOR = 1.000376;
#declare Argon_Gas_IOR = 1.000281;
#declare Benzene_Gas_IOR = 1.001762;
#declare Bromine_Gas_IOR = 1.001132;
#declare Carbon_Disulphide_Gas_IOR = 1.001481;
#declare Carbon_Monoxide_Gas_IOR = 1.000338;
#declare Chlorine_Gas_IOR = 1.000773;
#declare Chloroform_Gas_IOR = 1.001450;
#declare Ether_Ethyl_Gas_IOR = 1.001533;
#declare Ether_Methyl_Gas_IOR = 1.000891;
#declare Hydrochloric_Acid_Gas_IOR = 1.000447;
#declare Methane_Gas_IOR = 1.000444;
#declare Nitric_Oxide_Gas_IOR = 1.000297;
#declare Nitrogen_Gas_IOR = 1.000298;
#declare Nitrous_Oxide_Gas_IOR = 1.000516;
#declare Oxygen_Gas_IOR = 1.000271;
#declare Pentane_Gas_IOR = 1.000686;
#declare Sulphur_Dioxide_Gas_IOR = 1.000686;
#declare Water_Vapor_IOR = 1.000261;


#ifdef(View_POV_Include_Stack)
    #debug "    ...done!\n"
#end

// END OF FILE IOR_Gases.inc
