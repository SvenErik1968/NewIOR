#ifdef(View_POV_Include_Stack)
    #debug "  - including IOR_Liquids.inc\n"
#end
/////////////////////////////////////////////////
//                   LIQUIDS                   //
/////////////////////////////////////////////////
#declare 1_1_2_Trichlorotrifluoroethane_IOR = 1.3557; // At 25 degrees Celsius
#declare 1_2_4_Trichlorobenzene = 1.5717; // Solvent
#declare 1_4_Dioxane_IOR = 1.4224; // Solvent
#declare 2_Methoxyethanol_IOR = 1.4021; // Solvent
#declare Acetic_Acid_IOR = 1.37;
#declare Acetone_IOR = 1.3586; // Solvent
#declare Acetonitrile_IOR = 1.3441; // Solvent
#declare Aniline_IOR = 1.586;
#declare Asphalt_IOR = 1.635; // The hydro-carbon, bitumen, alse seen values 1.64 - 1.66
#declare Benzen_IOR = 1.500;
#declare Benzene_IOR = 1.501;
#declare Benzyl_benzoate_IOR = 1.568;
#declare Canada_balsam_IOR = 1.530; // Used as glue for optics.
#declare Carbon_disulfide_IOR = 1.630;
#declare Carbon_tetrachloride_IOR = 1.460; // Provided by Sigmund Kyrre Aas
#declare Carbon_tetrachloride_IOR = 1.46;
#declare Cedar_Oil_IOR = 1.516;
#declare Chlorobenzene_IOR = 1.5248; // Solvent
#declare Chlorodifluoromethane_refrigerant_R_22_IOR = 1.26; // Refrigerant
#declare Chloroform_IOR = 1.4458; // Solvent
#declare Cyclohexane_IOR = 1.4262; // Solvent
#declare Cyclopentane_IOR = 1.4064; // Solvent
#declare Decane_IOR = 1.41;
#declare Dichlorodifluoromethane_refrigerant_R_12_IOR = 1.29; // Refrigerant
#declare Dichloromethane_IOR = 1.4241; // Solvent
#declare Dimethyl_Acetamide_IOR = 1.4384; // Solvent
#declare Dimethyl_Sulfoxide_IOR = 1.4793; // Solvent
#declare Dodecane_IOR = 1.41;
#declare Ether_IOR = 1.35;
#declare Ethyl_Acetate_IOR = 1.3724; // Solvent
#declare Ethyl_Alcohol_1_IOR = 1.329; // Ethanol/Ethyl Alcohol, C2H5OH
#declare Ethyl_Alcohol_2_IOR = 1.360; // Ethanol/Ethyl Alcohol, C2H5OH
#declare Ethyl_Alcohol_3_IOR = 1.3614; // Solvent, Ethanol/Ethyl Alcohol, C2H5OH
#declare Ethyl_cinnamate_IOR = 1.559;
#declare Ethyl_Ether_IOR = 1.3524; // Solvent
#declare Ethyl_salicylate_IOR = 1.523;
#declare Ethylene_Dichloride_IOR = 1.4448; // Solvent
#declare Ethylene_glycol_IOR = 1.43;
#declare Flourite_IOR = 1.434;
#declare Furan_IOR = 1.47;
#declare Glycerine_IOR = 1.473; // Provided by Sigmund Kyrre Aas
#declare Glyme_IOR = 1.3796; // Solvent
#declare Heptane_IOR = 1.3876; // Solvent
#declare Hexane_IOR = 1.3749; // Solvent
#declare Iso_Octane_IOR = 1.3914; // Solvent
#declare Isobutyl_Alcohol_IOR = 1.3959; // Solvent
#declare Isopropyl_Alcohol_IOR = 1.3772; // Solvent
#declare Isopropyl_Myristate_IOR = 1.4332; // Solvent
#declare Liquid_CarbonDioxide_IOR = 1.20;
#declare Methanol_IOR = 1.3284; // Solvent
#declare Methyl_Ethyl_Ketone_IOR = 1.3788; // Solvent
#declare Methyl_Isoamyl_Ketone_IOR = 1.4070; // Solvent
#declare Methyl_Isobutyl_Ketone_IOR = 1.3957; // Solvent
#declare Methyl_n_Propyl_Ketone_IOR = 1.3901; // Solvent
#declare Methyl_salicylate_IOR = 1.538; // oil of wintergreen or wintergreen oil
#declare Methyl_t_Butyl_Ether_IOR = 1.3689; // Solvent
#declare Methylene_iodine_IOR = 1.737; // Diiodomethane
#declare Milk_IOR = 1.35;
#declare n_Butyl_Acetate_IOR = 1.3942; // Solvent
#declare n_Butyl_Alcohol_IOR = 1.3993; // Solvent
#declare n_Butyl_Chloride_IOR = 1.4021; // Solvent
#declare N_Methylpyrrolidone_IOR = 1.4700; // Solvent
#declare N_N_Dimethylformamide_IOR = 1.4305; // Solvent
#declare n_Propyl_Alcohol_IOR = 1.3856; // Solvent
#declare o_Dichlorobenzene_IOR = 1.5514; // Solvent
#declare o_Xylene_IOR = 1.5054; // Solvent
#declare Olive_Oil_IOR = 1.46;
#declare Parafin_liquid_IOR = 1.48;
#declare Paraldehyde_IOR = 1.405;
#declare Pentane_IOR = 1.3575; // Solvent
#declare Petroleum_Ether_IOR = 1.3650; // Solvent
#declare Propane_IOR = 1.34;
#declare Propylene_Carbonate_IOR = 1.4210; // Solvent
#declare Propylene_glycol_IOR = 1.43;
#declare Propylene_IOR = 1.36;
#declare Pyridine_IOR = 1.5102; // Solvent
#declare Quinoline_IOR = 1.627;
#declare Sugar_Solution_30_IOR = 1.380; // 30% solution
#declare Sugar_Solution_80_IOR = 1.490; // 80% solution
#declare Terpentine_IOR = 1.427; // Provided by Sigmund Kyrre Aas
#declare Tetrahydrofuran_IOR = 1.4072; // Solvent
#declare Toluene_IOR = 1.4969; // Solvent
#declare Trichlorofluoromethane_refrigerant_R_11_IOR = 1.37; // Refrigerant
#declare Triethylamine_IOR = 1.4010; // Solvent
#declare Trifluoroacetic_Acid_IOR = 1.2850; // Solvent
#declare Turpentine = 1.47;
#declare Vegetable_Oil_50C_IOR = 1.47; // At 50 degrees Celsius
#declare Water_0C_IOR = 1.33346; // Liquid, 0°C => https://physics.info/refraction/
#declare Water_20C_IOR = 1.33283; // Liquid, 20°C => https://physics.info/refraction/
#declare Water_100C_IOR = 1.31766; // Liquid, 100°C => https://physics.info/refraction/

#ifdef(View_POV_Include_Stack)
    #debug "    ...done!\n"
#end

// END OF FILE IOR_Liquids.inc
