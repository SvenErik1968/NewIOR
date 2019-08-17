#ifdef(View_POV_Include_Stack)
    #debug "  - including IOR_Dispersion.inc\n"
#end
/////////////////////////////////////////////////
//                 DISPERSION                  //
/////////////////////////////////////////////////

#declare Dispersion_Base = 1.000; // POV-Ray (and previously MegaPOV) uses 1 to mean no dispersion

#declare Almandite_Dispersion = 0.024 + Dispersion_Base;
#declare Andradite_Dispersion = 0.057 + Dispersion_Base;
#declare Benitoite_Dispersion = 0.044 + Dispersion_Base;
#declare Beryl_Dispersion = 0.014 + Dispersion_Base;
#declare Beryllonite_Dispersion = 0.010 + Dispersion_Base;
#declare Cassiterite_Dispersion = 0.071 + Dispersion_Base;
#declare Cerussite_Dispersion = 0.055 + Dispersion_Base;
#declare Chrysoberyl_Dispersion = 0.015 + Dispersion_Base;
#declare Corundum_Dispersion = 0.018 + Dispersion_Base;
#declare Cubic_Zirconia_a_Dispersion = 0.058 + Dispersion_Base; // Dispersion range 0.058-0.066 => https://en.wikipedia.org/wiki/Cubic_zirconia
#declare Cubic_Zirconia_b_Dispersion = 0.066 + Dispersion_Base; // Dispersion range 0.058-0.066 => https://en.wikipedia.org/wiki/Cubic_zirconia
#declare Danburite_Dispersion = 0.016 + Dispersion_Base;
#declare Datolite_Dispersion = 0.016 + Dispersion_Base;
#declare Diamond_Dispersion = 0.044 + Dispersion_Base;
#declare Dioptase_Dispersion = 0.022 + Dispersion_Base;
#declare Epidote_Dispersion = 0.030 + Dispersion_Base;
#declare Euclase_Dispersion = 0.016 + Dispersion_Base;
#declare Fluorite_Dispersion = 0.007 + Dispersion_Base;
#declare Grossularite_Dispersion = 0.028 + Dispersion_Base;
#declare Idocrase_Dispersion = 0.019 + Dispersion_Base;
#declare Kornerupine_Dispersion = 0.019 + Dispersion_Base;
#declare Kyanite_Dispersion = 0.011 + Dispersion_Base;
#declare Lithium_Niobate_Dispersion = 0.13 + Dispersion_Base; // Brand name Linobate
#declare Orthoclase_Dispersion = 0.012 + Dispersion_Base;
#declare Peridot_Dispersion = 0.020 + Dispersion_Base;
#declare Phenakite_Dispersion = 0.015 + Dispersion_Base;
#declare Pyrope_Dispersion = 0.027 + Dispersion_Base;
#declare Quartz_Dispersion = 0.013 + Dispersion_Base;
#declare Rhodolite_Dispersion = 0.026 + Dispersion_Base;
#declare Rutile_Synthetic_Dispersion = 0.330 + Dispersion_Base;
#declare Rutile_Dispersion = 0.28 + Dispersion_Base;
#declare Scapolite_Dispersion = 0.017 + Dispersion_Base;
#declare Silica_glass_Dispersion = 0.010 + Dispersion_Base;
#declare Sillimanite_Dispersion = 0.015 + Dispersion_Base;
#declare Spessartite_Dispersion = 0.027 + Dispersion_Base;
#declare Sphalerite_Dispersion = 0.156 + Dispersion_Base;
#declare Sphene_Dispersion = 0.051 + Dispersion_Base;
#declare Spinel_Dispersion = 0.020 + Dispersion_Base;
#declare Spodumene_Dispersion = 0.017 + Dispersion_Base;
#declare Strontium titanate_Dispersion = 0.109 + Dispersion_Base;
#declare Topaz_Dispersion = 0.014 + Dispersion_Base;
#declare Tourmaline_Dispersion = 0.017 + Dispersion_Base;
#declare Zircon_Dispersion = 0.038 + Dispersion_Base;


#ifdef(View_POV_Include_Stack)
    #debug "    ...done!\n"
#end

// END OF FILE IOR_Dispersion.inc
