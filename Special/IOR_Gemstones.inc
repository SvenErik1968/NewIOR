#ifdef(IOR_Gemstones_inc_Temp)
    // do nothing
#else
    #declare IOR_Gemstones_inc_Temp = version;
    #version 3.7;
    #ifdef(View_POV_Include_Stack)
        #debug "including IOR_Gemstones.inc\n"
    #end

/*

Gemstones

This is an extract from the NewIOR-files containing the IOR-values for the gemstones.

*/

// Gemstones in the Elements class:
// DIAMOND
#declare Diamond_IOR_n_1 = 2.4175;
#declare Diamond_IOR_n_2 = 2.4178;


// Gemstones in the Oxides class:
// CORUNDUM
// Variety: Ruby
// Variety: Sapphire
#declare Corundum_IOR_e_1 = 1.76;
#declare Corundum_IOR_w_1 = 1.768;
#declare Corundum_Birefringence_1 = 0.0080;

// CHRYSOBERYL
// Variety: ALEXANDRITE
// Variety: YELLOW-GREEN CHRYSOBERYL
// Variety: CAT'S EYE CHRYSOBERYL
#declare Chrysoberyl_IOR_a_1 = 1.745;
#declare Chrysoberyl_IOR_b_1 = 1.748;
#declare Chrysoberyl_IOR_g_1 = 1.754;
#declare Chrysoberyl_Birefringence_1 = 0.0090;

// PERICLASE
#declare Periclase_IOR_n_1 = 1.74;

// SPINEL
#declare Spinel_IOR_n_1 = 1.72;
#declare Spinel_IOR_n_2 = 1.8;

// Taaffeite
#declare Taaffeite_IOR_e_1 = 1.777;
#declare Taaffeite_IOR_w_1 = 1.722;
#declare Taaffeite_Birefringence_1 = 0.0550;


// Gemstones in the Carbonate class:
// RHODOCHROSITE
#declare Rhodochrosite_IOR_e_1 = 1.596;
#declare Rhodochrosite_IOR_e_2 = 1.598;
#declare Rhodochrosite_IOR_w_1 = 1.814;
#declare Rhodochrosite_IOR_w_2 = 1.816;
#declare Rhodochrosite_Birefringence_1 = 0.2180;

// SINHALITE (a borate mineral)


// Gemstones in the Phosphate class:
// APATITE
#declare Apatite_IOR_e_1 = 1.63;
#declare Apatite_IOR_w_1 = 1.633;
#declare Apatite_Birefringence_1 = 0.0030;

// BRAZILIANITE
#declare Brazilianite_IOR_a_1 = 1.602;
#declare Brazilianite_IOR_b_1 = 1.609;
#declare Brazilianite_IOR_g_1 = 1.621;
#declare Brazilianite_IOR_g_2 = 1.623;
#declare Brazilianite_Birefringence_1 = 0.0190;
#declare Brazilianite_Birefringence_2 = 0.0210;

// TURQUOISE
#declare Turquoise_IOR_a_1 = 1.61;
#declare Turquoise_IOR_b_1 = 1.615;
#declare Turquoise_IOR_g_1 = 1.65;
#declare Turquoise_Birefringence_1 = 0.0400;


// Gemstones in the Silicate class:
// ANDALUSITE
#declare Andalusite_IOR_a_1 = 1.629;
#declare Andalusite_IOR_a_2 = 1.64;
#declare Andalusite_IOR_b_1 = 1.633;
#declare Andalusite_IOR_b_2 = 1.644;
#declare Andalusite_IOR_g_1 = 1.638;
#declare Andalusite_IOR_g_2 = 1.65;
#declare Andalusite_Birefringence_1 = 0.0090;
#declare Andalusite_Birefringence_2 = 0.0100;

// AXINITE
#declare Axinite_IOR_a_1 = 1.685;

// BENITOITE
#declare Benitoite_IOR_e_1 = 1.804;
#declare Benitoite_IOR_w_1 = 1.757;
#declare Benitoite_Birefringence_1 = 0.0470;

// BERYL
// Variety: AQUAMARINE
// Variety: EMERALD
// Variety: GOSHENITE
// Variety: HELIODOR
// Variety: MORGANITE
// Variety: RED BERYL
#declare Beryl_IOR_e_1 = 1.564;
#declare Beryl_IOR_e_2 = 1.595;
#declare Beryl_IOR_w_1 = 1.568;
#declare Beryl_IOR_w_2 = 1.602;
#declare Beryl_Birefringence_1 = 0.0040;
#declare Beryl_Birefringence_2 = 0.0070;

CORDIERITE
// Variety: IOLITE
#declare Cordierite_IOR_a_1 = 1.527;
#declare Cordierite_IOR_a_2 = 1.56;
#declare Cordierite_IOR_b_1 = 1.532;
#declare Cordierite_IOR_b_2 = 1.574;
#declare Cordierite_IOR_g_1 = 1.538;
#declare Cordierite_IOR_g_2 = 1.578;
#declare Cordierite_Birefringence_1 = 0.0110;
#declare Cordierite_Birefringence_2 = 0.0180;

// DIOPSIDE
#declare Diopside_IOR_a_1 = 1.663;
#declare Diopside_IOR_a_2 = 1.699;
#declare Diopside_IOR_b_1 = 1.671;
#declare Diopside_IOR_b_2 = 1.705;
#declare Diopside_IOR_g_1 = 1.693;
#declare Diopside_IOR_g_2 = 1.728;
#declare Diopside_Birefringence_1 = 0.0290;
#declare Diopside_Birefringence_2 = 0.0300;

EUCLASE
#declare Euclase_IOR_a_1 = 1.652;
#declare Euclase_IOR_b_1 = 1.655;
#declare Euclase_IOR_g_1 = 1.671;
#declare Euclase_Birefringence_1 = 0.0190;

// THE GARNETS:
// ALMANDINE
#declare Almandine_IOR_n_1 = 1.83;

// ANDRADITE
// Variety: DEMANTOID
#declare Andradite_IOR_n_1 = 1.87;
#declare Andradite_IOR_n_2 = 1.89;

// GROSSULAR
// Variety: HESSONITE
// Variety: TSAVORITE
#declare Grossular_IOR_n_1 = 1.734;
#declare Grossular_IOR_n_2 = 1.75;

// PYROPE
#declare Pyrope_IOR_n_1 = 1.73;
#declare Pyrope_IOR_n_2 = 1.76;

// SPESSARTINE
#declare Spessartine_IOR_n_1 = 1.8;

UVAROVITE
#declare Uvarovite_IOR_n_1 = 1.86;

// JADE (a variety of two minerals: Jadeite and Nephrite (is a variety of Actinolite)
// JADEITE
#declare Jadeite_IOR_a_1 = 1.654;
#declare Jadeite_IOR_a_2 = 1.673;
#declare Jadeite_IOR_b_1 = 1.659;
#declare Jadeite_IOR_b_2 = 1.679;
#declare Jadeite_IOR_g_1 = 1.667;
#declare Jadeite_IOR_g_2 = 1.693;
#declare Jadeite_Birefringence_1 = 0.0130;
#declare Jadeite_Birefringence_2 = 0.0200;

// ACTINOLITE
// Variety: NEPHRITE
#declare Actinolite_IOR_a_1 = 1.613;
#declare Actinolite_IOR_a_2 = 1.628;
#declare Actinolite_IOR_b_1 = 1.627;
#declare Actinolite_IOR_b_2 = 1.644;
#declare Actinolite_IOR_g_1 = 1.638;
#declare Actinolite_IOR_g_2 = 1.655;
#declare Actinolite_Birefringence_1 = 0.0250;
#declare Actinolite_Birefringence_2 = 0.0270;

// KORNERUPINE
#declare Kornerupine_IOR_a_1 = 1.665;
#declare Kornerupine_IOR_b_1 = 1.676;
#declare Kornerupine_IOR_g_1 = 1.677;
#declare Kornerupine_Birefringence_1 = 0.0120;

// OLIVINE
// Variety: PERIDOT
#declare Olivine_IOR_a_1 = 1.63;
#declare Olivine_IOR_a_2 = 1.65;
#declare Olivine_IOR_b_1 = 1.65;
#declare Olivine_IOR_b_2 = 1.67;
#declare Olivine_IOR_g_1 = 1.67;
#declare Olivine_IOR_g_2 = 1.69;
#declare Olivine_Birefringence_1 = 0.0400;

QUARTZ
// Variety: AMETHYST
// Variety: CITRINE
// Variety: ROCK CRYSTAL
// Variety: ROSE QUARTZ
// Variety: SMOKY QUARTZ
#declare Quartz_IOR_e_1 = 1.552;
#declare Quartz_IOR_e_2 = 1.554;
#declare Quartz_IOR_w_1 = 1.543;
#declare Quartz_IOR_w_2 = 1.545;
#declare Quartz_Birefringence_1 = 0.0090;

// SCAPOLITE
#declare Scapolite_IOR_e_1 = 1.522;
#declare Scapolite_IOR_e_2 = 1.571;
#declare Scapolite_IOR_w_1 = 1.534;
#declare Scapolite_IOR_w_2 = 1.607;
#declare Scapolite_Birefringence_1 = 0.0120;
#declare Scapolite_Birefringence_2 = 0.0360;

SPODUMENE
// Variety: KUNZITE
// Variety: HIDDENITE
#declare Spodumene_IOR_a_1 = 1.648;
#declare Spodumene_IOR_a_2 = 1.661;
#declare Spodumene_IOR_b_1 = 1.655;
#declare Spodumene_IOR_b_2 = 1.67;
#declare Spodumene_IOR_g_1 = 1.662;
#declare Spodumene_IOR_g_2 = 1.679;
#declare Spodumene_Birefringence_1 = 0.0140;
#declare Spodumene_Birefringence_2 = 0.0180;

// TITANITE (also known as sphene)
#declare Titanite_IOR_a_1 = 1.84;
#declare Titanite_IOR_a_2 = 1.95;
#declare Titanite_IOR_b_1 = 1.87;
#declare Titanite_IOR_b_2 = 2.034;
#declare Titanite_IOR_g_1 = 1.943;
#declare Titanite_IOR_g_2 = 2.11;
#declare Titanite_Birefringence_1 = 0.1030;
#declare Titanite_Birefringence_2 = 0.1600;

// TOPAZ
#declare Topaz_IOR_a_1 = 1.606;
#declare Topaz_IOR_a_2 = 1.629;
#declare Topaz_IOR_b_1 = 1.609;
#declare Topaz_IOR_b_2 = 1.631;
#declare Topaz_IOR_g_1 = 1.616;
#declare Topaz_IOR_g_2 = 1.638;
#declare Topaz_Birefringence_1 = 0.0090;
#declare Topaz_Birefringence_2 = 0.0100;

// THE TOURMALINES:
// ELBAITE
// Variety: INDICOLITE
#declare Elbaite_IOR_e_1 = 1.615;
#declare Elbaite_IOR_e_2 = 1.632;
#declare Elbaite_IOR_w_1 = 1.635;
#declare Elbaite_IOR_w_2 = 1.65;
#declare Elbaite_Birefringence_1 = 0.0180;
#declare Elbaite_Birefringence_2 = 0.0200;

// ZIRCON
#declare Zircon_IOR_e_1 = 1.92;
#declare Zircon_IOR_e_2 = 1.96;
#declare Zircon_IOR_w_1 = 1.967;
#declare Zircon_IOR_w_2 = 2.015;
#declare Zircon_Birefringence_1 = 0.0470;
#declare Zircon_Birefringence_2 = 0.0550;

// ZOISITE
// Variety: TANZANITE
#declare Zoisite_IOR_a_1 = 1.696;
#declare Zoisite_IOR_a_2 = 1.7;
#declare Zoisite_IOR_b_1 = 1.696;
#declare Zoisite_IOR_b_2 = 1.702;
#declare Zoisite_IOR_g_1 = 1.702;
#declare Zoisite_IOR_g_2 = 1.718;
#declare Zoisite_Birefringence_1 = 0.0060;
#declare Zoisite_Birefringence_2 = 0.0180;

// Gemstones in the Mineraloids class:
// AMBER
#declare Amber_IOR_n_1 = 1.53;
#declare Amber_IOR_n_2 = 1.54;

// OPAL
#declare Opal_IOR_n_1 = 1.43;

// TEKTITES
// Variety: MOLDAVITE

    #version IOR_Gemstones_inc_Temp;
#end
// END OF FILE IOR_Gemstones.inc
