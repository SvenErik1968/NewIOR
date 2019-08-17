#ifdef(View_POV_Include_Stack)
    #debug "  - including IOR_Isotropic.inc\n"
#end

/////////////////////////////////////////////////
//        ISOTROPIC MINERALS                   //
/////////////////////////////////////////////////
#declare Acrylic_IOR = 1.495;\\ Acrylic (lucite, plexiglas) => https://physics.info/refraction/
#declare Aeschynite_Ce_IOR_n_1 = 2.26;
#declare Aeschynite_Nd_IOR_n_1 = 2.2;
#declare Aeschynite_Nd_IOR_n_2 = 2.4;
#declare Aeschynite_Y_IOR_n_1 = 2.142;
#declare Aldermanite_IOR_n_1 = 1.5;
#declare Allophane_IOR_n_1 = 1.47;
#declare Allophane_IOR_n_2 = 1.496;
#declare Almandine_IOR_n_1 = 1.83;
#declare Alumopharmacosiderite_IOR_n_1 = 1.565;
#declare Amber_IOR = 1.546;\\ => https://physics.info/refraction/
#declare Amber_IOR_n_1 = 1.53;
#declare Amber_IOR_n_2 = 1.54;
#declare Analcime_IOR_n_1 = 1.479;
#declare Analcime_IOR_n_2 = 1.493;
#declare Andradite_IOR_n_1 = 1.87;
#declare Andradite_IOR_n_2 = 1.89;
#declare Arizonite_IOR_n_1 = 2.1;
#declare Arsenobismite_IOR_n_1 = 1.6;
#declare Arsenolite_IOR_n_1 = 1.755;
#declare Asselbornite_IOR_n_1 = 1.9;
#declare Bariopyrochlore_IOR_n_1 = 2.85;
#declare Barium_Fluoride_IOR = 1.455;\\ Barium fluoride (BaF2) is a chemical compound of barium and fluorine and is a salt. It is a solid which can be a transparent crystal. It occurs in nature as the mineral frankdicksonite.
#declare Berzeliite_IOR_n_1 = 1.71;
#declare Betafite_IOR_n_1 = 1.92;
#declare Bicchulite_IOR_n_1 = 1.625;
#declare Bideauxite_IOR_n_1 = 2.192;
#declare Bindheimite_IOR_n_1 = 1.84;
#declare Bindheimite_IOR_n_2 = 1.87;
#declare Bismutostibiconite_IOR_n_1 = 2.09;
#declare Blakeite_IOR_n_1 = 2.16;
#declare Bolivarite_IOR_n_1 = 1.5;
#declare Bolivarite_IOR_n_2 = 1.51;
#declare Brannerite_IOR_n_1 = 2.3;
#declare Bromargyrite_IOR_n_1 = 2.25;
#declare Bunsenite_IOR_n_1 = 2.23;
#declare Cadwaladerite_IOR_n_1 = 1.513;
#declare Calciouranoite_IOR_n_1 = 1.726;
#declare Calcium_Fluoride_IOR = 1.4338;\\ Calcium fluoride is the inorganic compound of the elements calcium and fluorine with the formula CaF2. It is a white insoluble solid. It occurs as the mineral fluorite (also called fluorspar), which is often deeply coloured owing to impurities.
#declare Calderite_IOR_n_1 = 1.872;
#declare Carobbiite_IOR_n_1 = 1.362;
#declare Chlorargyrite_IOR_n_1 = 2.07;
#declare Choloalite_IOR_n_1 = 2.04;
#declare Chromite_IOR_n_1 = 2.08;
#declare Chukhrovite_Ce_IOR_n_1 = 1.443;
#declare Chukhrovite_Y_IOR_n_1 = 1.44;
#declare Corrective_lens_1.6_Glass_IOR = 1.604;\\ Ophthalmic materials, glass => https://en.wikipedia.org/wiki/Corrective_lens#Ophthalmic_material_property_tables
#declare Corrective_lens_1.7_Glass_IOR = 1.706;\\ Ophthalmic materials, glass => https://en.wikipedia.org/wiki/Corrective_lens#Ophthalmic_material_property_tables
#declare Corrective_lens_1.8_Glass_IOR = 1.800;\\ Ophthalmic materials, glass => https://en.wikipedia.org/wiki/Corrective_lens#Ophthalmic_material_property_tables
#declare Corrective_lens_1.9_Glass_IOR = 1.893;\\ Ophthalmic materials, glass => https://en.wikipedia.org/wiki/Corrective_lens#Ophthalmic_material_property_tables
#declare Corrective_lens_CR_39_Hard_Resin_IOR = 1.49;\\ Ophthalmic materials, plastics => https://en.wikipedia.org/wiki/Corrective_lens#Ophthalmic_material_property_tables
#declare Corrective_lens_Crown_Glass_IOR = 1.525;\\ Ophthalmic materials, glass => https://en.wikipedia.org/wiki/Corrective_lens#Ophthalmic_material_property_tables
#declare Corrective_lens_Essilor_Ormix_IOR = 1.6;\\ Ophthalmic materials, plastics => https://en.wikipedia.org/wiki/Corrective_lens#Ophthalmic_material_property_tables
#declare Corrective_lens_Hoya_EYRY_IOR = 1.70;\\ Ophthalmic materials, plastics => https://en.wikipedia.org/wiki/Corrective_lens#Ophthalmic_material_property_tables
#declare Corrective_lens_MR_10_1.67_Plastic_IOR = 1.67;\\ Ophthalmic materials, plastics => https://en.wikipedia.org/wiki/Corrective_lens#Ophthalmic_material_property_tables
#declare Corrective_lens_MR_174_1.74_Plastic_IOR = 1.74;\\ Ophthalmic materials, plastics => https://en.wikipedia.org/wiki/Corrective_lens#Ophthalmic_material_property_tables
#declare Corrective_lens_MR_20_1.6_Plastic_IOR = 1.60;\\ Ophthalmic materials, plastics => https://en.wikipedia.org/wiki/Corrective_lens#Ophthalmic_material_property_tables
#declare Corrective_lens_MR_6_1.6_Plastic_IOR = 1.6;\\ Ophthalmic materials, plastics => https://en.wikipedia.org/wiki/Corrective_lens#Ophthalmic_material_property_tables
#declare Corrective_lens_MR_7_1.665_Plastic_IOR = 1.665;\\ Ophthalmic materials, plastics => https://en.wikipedia.org/wiki/Corrective_lens#Ophthalmic_material_property_tables
#declare Corrective_lens_MR_7_1.67_Plastic_IOR = 1.67;\\ Ophthalmic materials, plastics => https://en.wikipedia.org/wiki/Corrective_lens#Ophthalmic_material_property_tables
#declare Corrective_lens_MR_8_1.6_Plastic_IOR = 1.6;\\ Ophthalmic materials, plastics => https://en.wikipedia.org/wiki/Corrective_lens#Ophthalmic_material_property_tables
#declare Corrective_lens_Nikon_4_Plastic_NL4_IOR = 1.67;\\ Ophthalmic materials, plastics => https://en.wikipedia.org/wiki/Corrective_lens#Ophthalmic_material_property_tables
#declare Corrective_lens_Nikon_5_Plastic_NL5_IOR = 1.74;\\ Ophthalmic materials, plastics => https://en.wikipedia.org/wiki/Corrective_lens#Ophthalmic_material_property_tables
#declare Corrective_lens_PhotoGray_Extra_IOR = 1.523;\\ Ophthalmic materials, glass => https://en.wikipedia.org/wiki/Corrective_lens#Ophthalmic_material_property_tables
#declare Corrective_lens_Polycarbonate_IOR = 1.586;\\ Ophthalmic materials, plastics => https://en.wikipedia.org/wiki/Corrective_lens#Ophthalmic_material_property_tables
#declare Corrective_lens_PPG_Trivex_(Average)_IOR = 1.53;\\ Ophthalmic materials, plastics => https://en.wikipedia.org/wiki/Corrective_lens#Ophthalmic_material_property_tables
#declare Corrective_lens_SOLA_Finalite_IOR = 1.60;\\ Ophthalmic materials, plastics => https://en.wikipedia.org/wiki/Corrective_lens#Ophthalmic_material_property_tables
#declare Corrective_lens_SOLA_Spectralite_IOR = 1.54;\\ Ophthalmic materials, plastics => https://en.wikipedia.org/wiki/Corrective_lens#Ophthalmic_material_property_tables
#declare Corrective_lens_Tokai_IOR = 1.76;\\ Ophthalmic materials, plastics => https://en.wikipedia.org/wiki/Corrective_lens#Ophthalmic_material_property_tables
#declare Cristobalite_IOR_n_1 = 1.485;
#declare Cristobalite_IOR_n_2 = 1.487;
#declare Cryolithionite_IOR_n_1 = 1.34;
#declare Cryptohalite_IOR_n_1 = 1.369;
#declare Cubic_Zirconia_a_IOR = 2.150;\\ Range 2.150-2.182
#declare Cubic_Zirconia_b_IOR = 2.182;\\ Range 2.150-2.182
#declare Cuprite_IOR = 2.849;
#declare Danalite_IOR_n_1 = 1.753;
#declare Danalite_IOR_n_2 = 1.771;
#declare DAnsite_IOR_n_1 = 1.488;
#declare Delvauxite_IOR_n_1 = 1.72;
#declare Diamond_IOR_n_1 = 2.4175;
#declare Diamond_IOR_n_2 = 2.4178;
#declare Dzhalindite_IOR_n_1 = 1.716;
#declare Dzhalindite_IOR_n_2 = 1.725;
#declare Efremovite_IOR_n_1 = 1.55;
#declare Eglestonite_IOR_n_1 = 2.49;
#declare Elpasolite_IOR_n_1 = 1.376;
#declare Embolite_IOR_n_1 = 2.15;
#declare Ertixiite_IOR_n_1 = 1.502;
#declare Eulytite_IOR_n_1 = 2.05;
#declare Euxenite_Y_IOR_n_1 = 2.06;
#declare Euxenite_Y_IOR_n_2 = 2.24;
#declare Evansite_IOR_n_1 = 1.485;
#declare Faujasite_Ca_IOR_n_1 = 1.47;
#declare Faujasite_Ca_IOR_n_2 = 1.48;
#declare Faujasite_IOR_n_1 = 1.47;
#declare Faujasite_IOR_n_2 = 1.48;
#declare Faujasite_Mg_IOR_n_1 = 1.47;
#declare Faujasite_Mg_IOR_n_2 = 1.48;
#declare Faujasite_Na_IOR_n_1 = 1.47;
#declare Faujasite_Na_IOR_n_2 = 1.48;
#declare Fergusonite_beta_Nd_IOR_n_1 = 2;
#declare Fergusonite_Y_IOR_n_1 = 2.05;
#declare Fergusonite_Y_IOR_n_2 = 2.19;
#declare Ferrisymplesite_IOR_n_1 = 1.67;
#declare Ferrotychite_IOR_n_1 = 1.55;
#declare Fluorite_IOR_n_1 = 1.433;
#declare Fluorite_IOR_n_2 = 1.448;
#declare Formanite_Y_IOR_n_1 = 2.05;
#declare Formanite_Y_IOR_n_2 = 2.19;
#declare Frankdicksonite_IOR = 1.475;\\ Barium fluoride (BaF2) is a chemical compound of barium and fluorine and is a salt. It is a solid which can be a transparent crystal. It occurs in nature as the mineral frankdicksonite.
#declare Frankdicksonite_IOR_n_1 = 1.475;
#declare Gadolinite_Ce_IOR_n_1 = 1.78;
#declare Gahnite_IOR_n_1 = 1.82;
#declare Genthelvite_IOR_n_1 = 1.742;
#declare Genthelvite_IOR_n_2 = 1.745;
#declare Georgeite_IOR_n_1 = 1.593;
#declare Gianellaite_IOR_n_1 = 2.085;
#declare Goldmanite_IOR_n_1 = 1.821;
#declare Goldmanite_IOR_n_2 = 1.855;
#declare Greenalite_IOR_n_1 = 1.65;
#declare Greenalite_IOR_n_2 = 1.675;
#declare Griphite_IOR_n_1 = 1.63;
#declare Griphite_IOR_n_2 = 1.66;
#declare Grossular_IOR_n_1 = 1.734;
#declare Grossular_IOR_n_2 = 1.75;
#declare Hackmanite_IOR_n_1 = 1.483;\\ A variety of Sodalite
#declare Hackmanite_IOR_n_2 = 1.487;\\ A variety of Sodalite
#declare Halite_IOR_n_1 = 1.544;\\ NaCl, tablesalt or rock salt
#declare Hauyne_IOR_n_1 = 1.4961;
#declare Helvite_IOR_n_1 = 1.728;
#declare Helvite_IOR_n_2 = 1.747;
#declare Hercynite_IOR_n_1 = 1.8;
#declare Hibschite_IOR_n_1 = 1.675;
#declare Hieratite_IOR_n_1 = 1.34;
#declare Hsianghualite_IOR_n_1 = 1.6132;
#declare IMA96_003_IOR_n_1 = 2.17;
#declare IMA97_013_IOR_n_1 = 1.67;
#declare IMA97_048_IOR_n_1 = 1.94;
#declare IMA97_050_IOR_n_1 = 2;
#declare IMA97_050_IOR_n_2 = 2.1;
#declare Iodine_Crystal_IOR = 3.340;
#declare Isolueshite_IOR_n_1 = 2.2;
#declare Jacobsite_IOR_n_1 = 2.3;
#declare Jixianite_IOR_n_1 = 2.262;
#declare Jixianite_IOR_n_2 = 2.315;
#declare Kalipyrochlore_IOR_n_1 = 1.93;
#declare Kalipyrochlore_IOR_n_2 = 1.99;
#declare Katoite_IOR_n_1 = 1.632;
#declare Kehoeite_IOR_n_1 = 1.53;
#declare Kimrobinsonite_IOR_n_1 = 2.23;
#declare Kimzeyite_IOR_n_1 = 1.94;
#declare Knopite_IOR_n_1 = 2.3;
#declare Knorringite_IOR_n_1 = 1.803;
#declare Langbeinite_IOR_n_1 = 1.536;
#declare Lazurite_IOR_n_1 = 1.5;
#declare Lechatelierite_IOR_n_1 = 1.5;
#declare Lesukite_IOR_n_1 = 1.53;
#declare Lesukite_IOR_n_2 = 1.55;
#declare Leucite_IOR_n_1 = 1.508;
#declare Leucite_IOR_n_2 = 1.511;
#declare Lime_IOR_n_1 = 1.838;
#declare Lithium_Fluoride_IOR = 1.3915;\\ LiF
#declare Lonecreekite_IOR_n_1 = 1.483;
#declare Magnussonite_IOR_n_1 = 1.98;
#declare Majorite_IOR_n_1 = 1.8;
#declare Manganbelyankinite_IOR_n_1 = 1.78;
#declare Manganbelyankinite_IOR_n_2 = 1.8;
#declare Manganberzeliite_IOR_n_1 = 1.78;
#declare Manganberzeliite_IOR_n_2 = 1.79;
#declare Manganolangbeinite_IOR_n_1 = 1.572;
#declare Manganosite_IOR_n_1 = 2.16;
#declare Manganotychite_IOR_n_1 = 1.544;
#declare Marshite_IOR_n_1 = 2.346;
#declare Mayenite_IOR_n_1 = 1.643;
#declare Mcalpineite_IOR_n_1 = 2.01;
#declare Metaborite_IOR_n_1 = 1.618;
#declare Microlite_IOR_n_1 = 2;
#declare Microlite_IOR_n_2 = 2.2;
#declare Miersite_IOR_n_1 = 2.2;
#declare Moluranite_IOR_n_1 = 1.97;
#declare Moluranite_IOR_n_2 = 1.98;
#declare Morimotoite_IOR_n_1 = 1.995;
#declare Mosesite_IOR_n_1 = 2.06;
#declare Nabaphite_IOR_n_1 = 1.504;
#declare Nantokite_IOR_n_1 = 1.93;
#declare Nasledovite_IOR_n_1 = 1.591;
#declare Nastrophite_IOR_n_1 = 1.5;
#declare Natanite_IOR_n_1 = 1.755;
#declare Natrophosphate_IOR_n_1 = 1.46;
#declare Natrophosphate_IOR_n_2 = 1.462;
#declare Nioboaeschynite_Ce_IOR_n_1 = 2.26;
#declare Nitrobarite_IOR_n_1 = 1.5714;
#declare Northupite_IOR_n_1 = 1.514;
#declare Nosean_IOR_n_1 = 1.48;
#declare Nosean_IOR_n_2 = 1.495;
#declare Oldhamite_IOR_n_1 = 2.137;
#declare Opal_IOR_n_1 = 1.43;
#declare Orthobrannerite_IOR_n_1 = 2.328;
#declare Pahasapaite_IOR_n_1 = 1.523;
#declare Palenzonaite_IOR_n_1 = 1.965;
#declare Partzite_IOR_n_1 = 1.61;
#declare Partzite_IOR_n_2 = 1.82;
#declare Paulingite_Ca_IOR_n_1 = 1.473;
#declare Paulingite_Ca_IOR_n_2 = 1.482;
#declare Paulingite_IOR_n_1 = 1.472;
#declare Paulingite_IOR_n_2 = 1.484;
#declare Paulingite_K_IOR_n_1 = 1.472;
#declare Paulingite_K_IOR_n_2 = 1.484;
#declare Paulingite_Na_IOR_n_1 = 1.472;
#declare Paulingite_Na_IOR_n_2 = 1.484;
#declare Percylite_IOR_n_1 = 2.05;
#declare Periclase_IOR_n_1 = 1.74;
#declare Pharmacosiderite_IOR_n_1 = 1.693;
#declare Phosphovanadylite_IOR_n_1 = 1.566;
#declare Plumbomicrolite_IOR_n_1 = 1.95;
#declare Plumbomicrolite_IOR_n_2 = 2.02;
#declare Plumbopyrochlore_IOR_n_1 = 2.08;
#declare Pollucite_IOR_n_1 = 1.52;
#declare Polycrase_Y_IOR_n_1 = 2.248;
#declare Polymignite_IOR_n_1 = 2.215;
#declare Potassium_alum_IOR_n_1 = 1.4562;
#declare Potassium_Bromide_IOR = 1.559;\\ KBr
#declare Potassium_di_H_orthophosphate_IOR = 1.500;\\ KH2PO4
#declare Potassium_Fluoride_IOR = 1.360;\\ KF, occurs naturally as the rare mineral Carobbiite
#declare Pyrochlore_IOR_n_1 = 1.9;
#declare Pyrochlore_IOR_n_2 = 2.2;
#declare Pyrope_IOR_n_1 = 1.73;
#declare Pyrope_IOR_n_2 = 1.76;
#declare Ralstonite_IOR_n_1 = 1.43;
#declare Rauvite_IOR_n_1 = 1.88;
#declare Rhodizite_IOR_n_1 = 1.6935;
#declare Rhodolite_IOR = 1.760;
#declare Ringwoodite_IOR_n_1 = 1.768;
#declare Romeite_IOR_n_1 = 1.83;
#declare Romeite_IOR_n_2 = 1.87;
#declare Rosieresite_IOR_n_1 = 1.5;
#declare Rowlandite_Y_IOR_n_1 = 1.725;
#declare Rusakovite_IOR_n_1 = 1.833;
#declare Sakhaite_IOR_n_1 = 1.638;
#declare Sakhaite_IOR_n_2 = 1.648;
#declare Salammoniac_IOR_n_1 = 1.693;
#declare Samarskite_Y_IOR_n_1 = 2.2;
#declare Schoenfliesite_IOR_n_1 = 1.59;
#declare Schorlomite_IOR_n_1 = 1.94;
#declare Senarmontite_IOR_n_1 = 2.087;
#declare Sinjarite_IOR_n_1 = 1.54;
#declare Sodalite_IOR_n_1 = 1.478;
#declare Sodalite_IOR_n_2 = 1.488;
#declare Sodium_alum_IOR_n_1 = 1.4388;
#declare Sodium_Bromide_IOR = 1.6428;\\ Sodium bromide is an inorganic compound with the formula NaBr. It is a high-melting white, crystalline solid that resembles sodium chloride.
#declare Sodium_pharmacosiderite_IOR_n_1 = 1.705;
#declare Sohngeite_IOR_n_1 = 1.736;
#declare Spessartine_IOR_n_1 = 1.789;
#declare Spessartine_IOR_n_2 = 1.820;
#declare Sphalerite_IOR_n_1 = 2.369;\\ Sphalerite, also known as blende or zinc blende, is the major ore of zinc
#declare Sphalerite_IOR_n_2 = 2.43;\\ Sphalerite, also known as blende or zinc blende, is the major ore of zinc
#declare Spinel_IOR_n_1 = 1.72;
#declare Spinel_IOR_n_2 = 1.8;
#declare Stannomicrolite_IOR_n_1 = 2.08;
#declare Stetefeldite_IOR_n_1 = 1.95;
#declare Stibiconite_IOR_n_1 = 1.6;
#declare Stibiconite_IOR_n_2 = 1.97;
#declare Stibiomicrolite_IOR_n_1 = 2;
#declare Strontiopyrochlore_IOR_n_1 = 2.08;
#declare Strontium_Fluoride_IOR = 1.438;\\ Strontium fluoride, SrF2, also called strontium difluoride and strontium(II) fluoride, is a fluoride of strontium. It is a stable brittle white crystalline solid. It appears as the mineral strontiofluorite.
#declare Strontium_Titanate_IOR = 2.409;\\ An artificial gemstone that has been used as a diamond simulant
#declare Sulphohalite_IOR_n_1 = 1.455;
#declare Sylvite_IOR = 1.4903;\\ (KCl) colorless
#declare Tazheranite_IOR_n_1 = 2.35;
#declare Thorogummite_IOR_n_1 = 1.54;
#declare Thorogummite_IOR_n_2 = 1.64;
#declare Thorosteenstrupine_IOR_n_1 = 1.63;
#declare Thorosteenstrupine_IOR_n_2 = 1.66;
#declare Tombarthite_Y_IOR_n_1 = 1.639;
#declare Tooth_structure_Cementum_IOR = 1.582;\\ => https://www.ncbi.nlm.nih.gov/pubmed/19566303
#declare Tooth_structure_Dentin_IOR = 1.540;\\ => https://www.ncbi.nlm.nih.gov/pubmed/19566303
#declare Tooth_structure_Enamel_IOR = 1.631;\\ => https://www.ncbi.nlm.nih.gov/pubmed/19566303
#declare Tritomite_Ce_IOR_n_1 = 1.65;
#declare Tritomite_Ce_IOR_n_2 = 1.757;
#declare Tritomite_Y_IOR_n_1 = 1.63;
#declare Tritomite_Y_IOR_n_2 = 1.77;
#declare Tschermigite_IOR_n_1 = 1.459;
#declare Tschortnerite_IOR_n_1 = 1.504;
#declare Tychite_IOR_n_1 = 1.51;
#declare Umbozerite_IOR_n_1 = 1.64;
#declare Uranmicrolite_IOR_n_1 = 1.97;
#declare Uranpyrochlore_IOR_n_1 = 1.98;
#declare Uvarovite_IOR_n_1 = 1.86;
#declare Villiaumite_IOR_n_1 = 1.33;
#declare Viseite_IOR_n_1 = 1.53;
#declare Vismirnovite_IOR_n_1 = 1.735;
#declare Voltaite_IOR_n_1 = 1.602;
#declare Wadalite_IOR_n_1 = 1.708;
#declare Water_Ice_IOR = 1.309;\\ => https://physics.info/refraction/
#declare Wickmanite_IOR_n_1 = 1.705;
#declare Winstanleyite_IOR_n_1 = 2.34;
#declare Yafsoanite_IOR_n_1 = 1.8;
#declare Yeelimite_IOR_n_1 = 1.568;
#declare Yttrialite_Y_IOR_n_1 = 1.758;
#declare Yttrocerite_IOR_n_1 = 1.43;
#declare Yttrocrasite_Y_IOR_n_1 = 2.12;
#declare Yttrocrasite_Y_IOR_n_2 = 2.15;
#declare Yttropyrochlore_Y_IOR_n_1 = 1.83;
#declare Yttrotantalite_Y_IOR_n_1 = 2.15;
#declare Zaratite_IOR_n_1 = 1.56;
#declare Zaratite_IOR_n_2 = 1.61;
#declare Zinc_sulfide_IOR = 2.3677;\\ ZnS. Common name is zinc blende. Ionic crystal having a beautiful redish yellow color. This is the main form of zinc found in nature, where it mainly occurs as the mineral sphalerite. 
#declare Zincovoltaite_IOR_n_1 = 1.605;
#declare Zunyite_IOR_n_1 = 1.6;


#ifdef(View_POV_Include_Stack)
    #debug "    ...done!\n"
#end

// END OF FILE IOR_Isotropic.inc
