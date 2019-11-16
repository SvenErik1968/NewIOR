#ifdef(View_POV_Include_Stack)
    #debug "  - including IOR_Gases.inc\n"
#end

/////////////////////////////////////////////////
//                    GASES                    //
/////////////////////////////////////////////////
#declare IOR_Gas_Acetone = 1.00109; // Source: [52]
#declare IOR_Gas_Air_at_0C = 1.000292; // Source: [21]. Comment: At 0°C
#declare IOR_Gas_Air_at_15C = 1.000277; // Source: [21]. Comment: At 15°C
#declare IOR_Gas_Air_at_15C = 1.000309; // Source: [21]. Comment: At -15°C
#declare IOR_Gas_Air_at_25C = 1.000277; // Source: [16]. Comment: At 25°C and 1 atm
#declare IOR_Gas_Air_at_30C = 1.000263; // Source: [21]. Comment: At 30°C
#declare IOR_Gas_Air_at_60C = 1.00024; // Source: [21]. Comment: At 60°C
#declare IOR_Gas_Alcohol_Methyl = 1.000586; // Source: [52]
#declare IOR_Gas_Ammonia = 1.000376; // Source: [52]
#declare IOR_Gas_Argon = 1.000281; // Source: [52]
#declare IOR_Gas_Benzene = 1.001762; // Source: [52]
#declare IOR_Gas_Bromine = 1.001132; // Source: [52]
#declare IOR_Gas_Carbon_Dioxide = 1.001; // Source: [52]
#declare IOR_Gas_Carbon_disulphide = 1.001481; // Source: [52]
#declare IOR_Gas_Carbon_Monoxide = 1.000338; // Source: [52]
#declare IOR_Gas_Chlorine = 1.000773; // Source: [52]
#declare IOR_Gas_Chloroform = 1.00145; // Source: [52]
#declare IOR_Gas_Disilane = 1.001657; // Source: [78]. Comment: Si2H6. at 0°C
#declare IOR_Gas_Ether_Ethyl = 1.001533; // Source: [52]
#declare IOR_Gas_Ether_Methyl = 1.000891; // Source: [52]
#declare IOR_Gas_Ethyl_Alcohol = 1.000878; // Source: [52]
#declare IOR_Gas_Helium = 1.000036; // Source: [52]. Comment: At 0°C
#declare IOR_Gas_Hydrochloric_Acid = 1.000447; // Source: [52]
#declare IOR_Gas_Hydrogen = 1.000132; // Source: [52]. Comment: At 0°C
#declare IOR_Gas_Methane = 1.000444; // Source: [52]
#declare IOR_Gas_Nitric_Oxide = 1.000297; // Source: [52]
#declare IOR_Gas_Nitrogen = 1.000298; // Source: [52]
#declare IOR_Gas_Nitrous_Oxide = 1.000516; // Source: [52]
#declare IOR_Gas_Oxygene = 1.000271; // Source: [52]
#declare IOR_Gas_Pentane = 1.000686; // Source: [52]
#declare IOR_Gas_Perfluoro_n_butane = 1.0014; // Source: [50]. Comment: C4F10
#declare IOR_Gas_Sulphur_Dioxide = 1.000686; // Source: [52]
#declare IOR_Gas_Water_vapor = 1.000261; // Source: [52]


#ifdef(View_POV_Include_Stack)
    #debug "    ...done!\n"
#end

// END OF FILE IOR_Gases.inc
