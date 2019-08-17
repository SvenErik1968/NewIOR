#ifdef(View_POV_Include_Stack)
    #debug "  - including IOR_Dispersion.inc\n"
#end
/////////////////////////////////////////////////
//                 DISPERSION                  //
/////////////////////////////////////////////////

#declare Dispersion_Base = 1.000; // POV-Ray (and previously MegaPOV) uses 1 to mean no dispersion

// BIAXIAL
#declare Angelsite_Dispersion = 0.044 + Dispersion_Base;
#declare Beryllonite_Dispersion = 0.010 + Dispersion_Base;
#declare Boracite_Dispersion = 0.024 + Dispersion_Base;
#declare Brazilianite_Dispersion = 0.014 + Dispersion_Base;
#declare Brookite_Dispersion = 0.131 + Dispersion_Base;
#declare Celestine_Dispersion = 0.014 + Dispersion_Base;
#declare Cerussite_Dispersion = 0.055 + Dispersion_Base;
#declare Chrysoberyl_Dispersion = 0.015 + Dispersion_Base;
#declare Cordierite_Dispersion = 0.017 + Dispersion_Base;\\ Also known as Iolite
#declare Danburite_Dispersion = 0.017 + Dispersion_Base;
#declare Datolite_Dispersion = 0.016 + Dispersion_Base;
#declare Epidote_Dispersion = 0.030 + Dispersion_Base;
#declare Euclase_Dispersion = 0.016 + Dispersion_Base;
#declare Kornerupine_Dispersion = 0.018 + Dispersion_Base;
#declare Kyanite_Dispersion = 0.020 + Dispersion_Base;
#declare Orthoclase_Dispersion = 0.012 + Dispersion_Base;
#declare Peridot_Dispersion = 0.020 + Dispersion_Base;\\ Peridot is a gem-quality Olivine
#declare Sillimanite_Dispersion = 0.015 + Dispersion_Base;
#declare Spodumene_Dispersion = 0.017 + Dispersion_Base;
#declare Staurolite_Dispersion = 0.023 + Dispersion_Base;
#declare Stibiotantalite_Dispersion = 0.146 + Dispersion_Base;
#declare Titanite_Dispersion = 0.051 + Dispersion_Base;
#declare Topaz_Dispersion = 0.014 + Dispersion_Base;

// ISOTROPIC
#declare Almandite_Dispersion_1 = 0.024 + Dispersion_Base;
#declare Almandite_Dispersion_2 = 0.027 + Dispersion_Base;
#declare Andradite_Dispersion = 0.057 + Dispersion_Base;
#declare Cubic_Zirconia_a_Dispersion = 0.058 + Dispersion_Base;\\ Dispersion range 0.058-0.066 => https://en.wikipedia.org/wiki/Cubic_zirconia
#declare Cubic_Zirconia_b_Dispersion = 0.066 + Dispersion_Base;\\ Dispersion range 0.058-0.066 => https://en.wikipedia.org/wiki/Cubic_zirconia
#declare Cuprite_Dispersion = 0 + Dispersion_Base;
#declare Diamond_Dispersion = 0.044 + Dispersion_Base;
#declare Fluorite_Dispersion = 0.007 + Dispersion_Base;
#declare Grossularite_Dispersion = 0.020 + Dispersion_Base;
#declare Hackmanite_Dispersion = 0.018 + Dispersion_Base;\\ A variety of Sodalite
#declare Pollucite_Dispersion = 0.012 + Dispersion_Base;
#declare Pyrope_Dispersion = 0.022 + Dispersion_Base;
#declare Rhodizite_Dispersion = 0.018 + Dispersion_Base;
#declare Rhodolite_Dispersion = 0.026 + Dispersion_Base;
#declare Silica_glass_Dispersion = 0.010 + Dispersion_Base;
#declare Sodalite_Dispersion = 0.018 + Dispersion_Base;
#declare Spessartine_Dispersion = 0.027 + Dispersion_Base;
#declare Sphalerite_Dispersion = 0.156 + Dispersion_Base;\\ Sphalerite, also known as blende or zinc blende, is the major ore of zinc
#declare Spinel_Dispersion = 0.020 + Dispersion_Base;
#declare Strontium_Titanate_Dispersion = 0.109 + Dispersion_Base;\\ An artificial gemstone that has been used as a diamond simulant

// UNIAXIAL
#declare Anatase_Dispersion = 0.213 + Dispersion_Base;
#declare Benitoite_Dispersion_1 = 0.039 + Dispersion_Base;\\ Dispersion range 0.039-0.046 => https://www.gemdat.org/gem-624.html
#declare Benitoite_Dispersion_2 = 0.046 + Dispersion_Base;
#declare Beryl_Dispersion = 0.014 + Dispersion_Base;
#declare Cassiterite_Dispersion = 0.071 + Dispersion_Base;
#declare Corundum_Dispersion = 0.018 + Dispersion_Base;
#declare Dioptase_Dispersion = 0.036 + Dispersion_Base;
#declare Goshenite_Dispersion = 0.014 + Dispersion_Base;
#declare Hambergite_Dispersion = 0.015 + Dispersion_Base;
#declare Herderite_Dispersion = 0.017 + Dispersion_Base;
#declare Lithium_Niobate_Dispersion = 0.130 + Dispersion_Base;\\ LiNbO3, Brand name Linobate
#declare Moissanite_Dispersion = 0.104 + Dispersion_Base;
#declare Phenakite_Dispersion = 0.015 + Dispersion_Base;
#declare Powellite_Dispersion = 0.058 + Dispersion_Base;
#declare Quartz_Dispersion = 0.013 + Dispersion_Base;
#declare Rutile_Dispersion = 0.280 + Dispersion_Base;
#declare Rutile_Synthetic_Dispersion = 0.330 + Dispersion_Base;
#declare Scapolite_Dispersion = 0.017 + Dispersion_Base;
#declare Scheelite_Dispersion = 0.038 + Dispersion_Base;
#declare Smithsonite_Dispersion = 0.037 + Dispersion_Base;
#declare Tourmaline_Dispersion = 0.017 + Dispersion_Base;
#declare Vanadinite_Dispersion = 0.202 + Dispersion_Base;
#declare Vesuvianite_Dispersion_1 = 0.019 + Dispersion_Base;\\ Also known as Idocrase
#declare Vesuvianite_Dispersion_2 = 0.025 + Dispersion_Base;\\ Also known as Idocrase
#declare Wulfenite_Dispersion = 0.203 + Dispersion_Base;
#declare Zincite_Dispersion = 0.127 + Dispersion_Base;
#declare Zircon_Dispersion = 0.039 + Dispersion_Base;


#ifdef(View_POV_Include_Stack)
    #debug "    ...done!\n"
#end

// END OF FILE IOR_Dispersion.inc
