#ifdef(View_POV_Include_Stack)
    #debug "  - including IOR_Isotropic.inc\n"
#end

/////////////////////////////////////////////////
//        ISOTROPIC MINERALS                   //
/////////////////////////////////////////////////
#declare IOR_Aeschynite_Ce = 2.26; // Real name: Aeschynite-(Ce). Source: [3]
#declare IOR_Aeschynite_Nd = 2.3; // Real name: Aeschynite-(Nd). Source: [3]
#declare IOR_Aeschynite_Y = 2.142; // Real name: Aeschynite-(Y). Source: [3]
#declare IOR_Alabandite = 2.7; // Real name: Alabandite. Source: [3]
#declare IOR_Allophane = 1.483; // Real name: Allophane. Source: [3]
#declare IOR_Alum_K = 1.453; // Real name: Alum-(K). Source: [3]
#declare IOR_Alum_Na = 1.4388; // Real name: Alum-(Na). Source: [3]
#declare IOR_Alumopharmacosiderite = 1.565; // Real name: Alumopharmacosiderite. Source: [3]
#declare IOR_Alumotungstite = 1.9; // Real name: Alumotungstite. Source: [3]
#declare IOR_Arsenobismite = 1.6; // Real name: Arsenobismite. Source: [3]. Comment: IMA Discredited Mineral Species Name
#declare IOR_Arsenolite = 1.755; // Real name: Arsenolite. Source: [3]
#declare IOR_Asselbornite = 1.9; // Real name: Asselbornite. Source: [3]
#declare IOR_BAF10_optical_glass_flint = 1.67; // Real name: BAF10 optical glass (flint). Source: [33]
#declare IOR_Bariopyrochlore = 2.09; // Real name: Bariopyrochlore. Source: [3]
#declare IOR_Berzeliite = 1.71; // Real name: Berzeliite. Source: [3]
#declare IOR_Betafite = 2.0535; // Real name: Betafite. Source: [3]
#declare IOR_Bicchulite = 1.625; // Real name: Bicchulite. Source: [3]
#declare IOR_Bideauxite = 2.192; // Real name: Bideauxite. Source: [3]
#declare IOR_Bindheimite = 1.855; // Real name: Bindheimite. Source: [3]
#declare IOR_Bismutomicrolite = 2; // Real name: Bismutomicrolite. Source: [3]
#declare IOR_Bismutopyrochlore = 2.1; // Real name: Bismutopyrochlore. Source: [3]
#declare IOR_Bismutostibiconite = 2.09; // Real name: Bismutostibiconite. Source: [3]
#declare IOR_BK7_optical_glass_crown = 1.5168; // Real name: BK7 optical glass (crown). Source: [34]
#declare IOR_Blakeite = 2.16; // Real name: Blakeite. Source: [3]
#declare IOR_Boleite = 2.05; // Real name: Boleite. Source: [3]
#declare Disp_Boleite = 0.071;
#declare IOR_Bolivarite = 1.505; // Real name: Bolivarite. Source: [3]
#declare IOR_Brannerite = 2.265; // Real name: Brannerite. Source: [3]
#declare IOR_Bromargyrite = 2.25; // Real name: Bromargyrite. Source: [3]
#declare IOR_Bunsenite = 2.23; // Real name: Bunsenite. Source: [3]
#declare IOR_Cadwaladerite = 1.513; // Real name: Cadwaladerite. Source: [3]
#declare IOR_Calderite = 1.872; // Real name: Calderite. Source: [3]
#declare IOR_Carobbiite = 1.362; // Real name: Carobbiite. Source: [3]
#declare IOR_Cellulose_plastic = 1.4701; // Real name: Cellulose plastic. Source: [42]
#declare IOR_Cesstibtantite = 1.8; // Real name: Cesstibtantite. Source: [3]
#declare IOR_Chlorargyrite = 2.07; // Real name: Chlorargyrite. Source: [3]
#declare IOR_Choloalite = 2.04; // Real name: Choloalite. Source: [3]
#declare IOR_Chromite = 2.12; // Real name: Chromite. Source: [3]
#declare IOR_Chukhrovite_Ce = 1.443; // Real name: Chukhrovite-(Ce). Source: [3]
#declare IOR_Chukhrovite_Y = 1.44; // Real name: Chukhrovite-(Y). Source: [3]
#declare IOR_Corderoite = 2.5; // Real name: Corderoite. Source: [3]
#declare IOR_Cristobalite = 1.486; // Real name: Cristobalite. Source: [3]
#declare IOR_Cryolithionite = 1.34; // Real name: Cryolithionite. Source: [3]
#declare IOR_Cryptohalite = 1.369; // Real name: Cryptohalite. Source: [3]
#declare IOR_Danalite = 1.762; // Real name: Danalite. Source: [3]
#declare IOR_Dansite = 1.488; // Real name: Dansite. Source: [3]
#declare IOR_Davidite_La = 2.3; // Real name: Davidite-(La). Source: [3]
#declare IOR_Delvauxite = 1.72; // Real name: Delvauxite. Source: [3]
#declare IOR_Dzhalindite = 1.7205; // Real name: Dzhalindite. Source: [3]
#declare IOR_Efremovite = 1.55; // Real name: Efremovite. Source: [3]
#declare IOR_Eglestonite = 2.49; // Real name: Eglestonite. Source: [3]
#declare IOR_Elpasolite = 1.376; // Real name: Elpasolite. Source: [3]
#declare IOR_Elsmoreite = 2.24; // Real name: Elsmoreite. Source: [3]
#declare IOR_Embolite = 2.15; // Real name: Embolite. Source: [3]. Comment: Mineral name not approved by the IMA
#declare IOR_Ertixiite = 1.502; // Real name: Ertixiite. Source: [3]
#declare IOR_Eulytite = 2.05; // Real name: Eulytite. Source: [3]
#declare IOR_Euxenite_Y = 2.15; // Real name: Euxenite-(Y). Source: [3]
#declare IOR_Evansite = 1.485; // Real name: Evansite. Source: [3]
#declare IOR_Faujasite_Ca = 1.475; // Real name: Faujasite-Ca. Source: [3]
#declare IOR_Faujasite_Mg = 1.475; // Real name: Faujasite-Mg. Source: [3]
#declare IOR_Faujasite_Na = 1.475; // Real name: Faujasite-Na. Source: [3]
#declare IOR_Fergusonite_Y = 2.12; // Real name: Fergusonite-(Y). Source: [3]
#declare IOR_Fergusonite_beta_Ce = 2.155; // Real name: Fergusonite-beta-(Ce). Source: [3]
#declare IOR_Fergusonite_beta_Nd = 2; // Real name: Fergusonite-beta-(Nd). Source: [3]
#declare IOR_Ferrisymplesite = 1.67; // Real name: Ferrisymplesite. Source: [3]
#declare IOR_Ferritungstite = 2.12; // Real name: Ferritungstite. Source: [3]
#declare IOR_Ferrotychite = 1.55; // Real name: Ferrotychite. Source: [3]
#declare IOR_Fluornatromicrolite = 2.03; // Real name: Fluornatromicrolite. Source: [3]
#declare IOR_Formanite_Y = 2.12; // Real name: Formanite-(Y). Source: [3]
#declare IOR_Frankdicksonite = 1.475; // Real name: Frankdicksonite. Source: [3]
#declare IOR_Franklinite = 2.36; // Real name: Franklinite. Source: [3]
#declare IOR_Gadolinite_Ce = 1.78; // Real name: Gadolinite-(Ce). Source: [3]
#declare IOR_Gahnite = 1.804; // Real name: Gahnite. Source: [55]
#declare IOR_Galaxite = 1.923; // Real name: Galaxite. Source: [3]
#declare IOR_Genthelvite = 1.7435; // Real name: Genthelvite. Source: [3]
#declare IOR_Georgeite = 1.593; // Real name: Georgeite. Source: [3]
#declare IOR_Germanium_Ge_crystal = 5.6994; // Real name: Germanium (Ge) crystal. Source: [31]
#declare IOR_Gianellaite = 2.085; // Real name: Gianellaite. Source: [3]
#declare IOR_Goldmanite = 1.838; // Real name: Goldmanite. Source: [3]
#declare IOR_Griceite = 1.392; // Real name: Griceite. Source: [3]
#declare IOR_Griphite = 1.6585; // Real name: Griphite. Source: [3]
#declare IOR_Gutsevichite = 1.58; // Real name: Gutsevichite. Source: [3]. Comment: IMA Discredited Mineral Species Name
#declare IOR_Haleniusite_La = 1.85; // Real name: Haleniusite-(La). Source: [3]
#declare IOR_Halite = 1.544; // Real name: Halite. Source: [3]
#declare IOR_Hauerite = 2.69; // Real name: Hauerite. Source: [3]
#declare IOR_Hauyne = 1.4961; // Real name: Hauyne. Source: [3]
#declare IOR_Helvite = 1.7375; // Real name: Helvite. Source: [3]
#declare IOR_Hercynite = 1.815; // Real name: Hercynite. Source: [57]
#declare IOR_Hibschite = 1.675; // Real name: Hibschite. Source: [3]
#declare IOR_Hieratite = 1.34; // Real name: Hieratite. Source: [3]
#declare IOR_Hsianghualite = 1.6132; // Real name: Hsianghualite. Source: [3]
#declare IOR_Imogolite = 1.49; // Real name: Imogolite. Source: [3]
#declare IOR_Isolueshite = 2.2; // Real name: Isolueshite. Source: [3]
#declare IOR_Jacobsite = 2.3; // Real name: Jacobsite. Source: [3]
#declare IOR_Jixianite = 2.2885; // Real name: Jixianite. Source: [3]
#declare IOR_Kadyrelite = 2; // Real name: Kadyrelite. Source: [3]
#declare IOR_Kalipyrochlore = 1.96; // Real name: Kalipyrochlore. Source: [3]
#declare IOR_Katoite = 1.632; // Real name: Katoite. Source: [3]
#declare IOR_Kimrobinsonite = 2.23; // Real name: Kimrobinsonite. Source: [3]
#declare IOR_Kimzeyite = 1.94; // Real name: Kimzeyite. Source: [3]
#declare IOR_Knorringite = 1.803; // Real name: Knorringite. Source: [3]
#declare IOR_Kobeite_Y = 2.205; // Real name: Kobeite-(Y). Source: [3]
#declare IOR_Lafossaite = 2.264; // Real name: Lafossaite. Source: [3]
#declare IOR_Langbeinite = 1.536; // Real name: Langbeinite. Source: [3]
#declare IOR_Lanmuchangite = 1.495; // Real name: Lanmuchangite. Source: [3]
#declare IOR_Lechatelierite = 1.5; // Real name: Lechatelierite. Source: [3]
#declare IOR_Lesukite = 1.54; // Real name: Lesukite. Source: [3]
#declare IOR_Liandratite = 1.83; // Real name: Liandratite. Source: [3]
#declare IOR_Lime = 1.838; // Real name: Lime. Source: [3]
#declare IOR_Londonite = 1.693; // Real name: Londonite. Source: [3]
#declare IOR_Lonecreekite = 1.483; // Real name: Lonecreekite. Source: [3]
#declare IOR_Loparite_Ce = 2.32; // Real name: Loparite-(Ce). Source: [3]
#declare IOR_Magnesioferrite = 2.38; // Real name: Magnesioferrite. Source: [3]
#declare IOR_Magnetite = 2.42; // Real name: Magnetite. Source: [3]
#declare IOR_Magnussonite = 1.98; // Real name: Magnussonite. Source: [3]
#declare IOR_Majorite = 1.8; // Real name: Majorite. Source: [3]
#declare IOR_Manganbelyankinite = 1.79; // Real name: Manganbelyankinite. Source: [3]
#declare IOR_Manganberzeliite = 1.785; // Real name: Manganberzeliite. Source: [3]
#declare IOR_Manganolangbeinite = 1.572; // Real name: Manganolangbeinite. Source: [3]
#declare IOR_Manganosite = 2.165; // Real name: Manganosite. Source: [3]
#declare IOR_Manganotychite = 1.544; // Real name: Manganotychite. Source: [3]
#declare IOR_Marshite = 2.346; // Real name: Marshite. Source: [3]
#declare IOR_Mayenite = 1.643; // Real name: Mayenite. Source: [3]
#declare IOR_Mcalpineite = 2.01; // Real name: Mcalpineite. Source: [3]
#declare IOR_Melanophlogite = 1.441; // Real name: Melanophlogite. Source: [3]
#declare IOR_Melanophlogite_beta = 1.441; // Real name: Melanophlogite-beta. Source: [3]
#declare IOR_Menezesite = 1.98; // Real name: Menezesite. Source: [3]
#declare IOR_Meniaylovite = 1.43; // Real name: Meniaylovite. Source: [3]
#declare IOR_Metaborite = 1.618; // Real name: Metaborite. Source: [3]
#declare IOR_Methane_hydrate_H = 1.3; // Real name: Methane hydrate-H. Source: [3]
#declare IOR_Methane_hydrate_I = 1.3; // Real name: Methane hydrate-I. Source: [3]
#declare IOR_Microlite = 2.0065; // Real name: Microlite. Source: [70]
#declare IOR_Miersite = 2.2; // Real name: Miersite. Source: [3]
#declare IOR_Moluranite = 1.975; // Real name: Moluranite. Source: [3]
#declare IOR_Monimolite = 2.06; // Real name: Monimolite. Source: [3]
#declare IOR_Morimotoite = 1.995; // Real name: Morimotoite. Source: [3]
#declare IOR_Mosesite = 2.06; // Real name: Mosesite. Source: [3]
#declare IOR_Murataite = 2.12; // Real name: Murataite. Source: [3]
#declare IOR_Nabaphite = 1.504; // Real name: Nabaphite. Source: [3]
#declare IOR_Nabiasite = 2.05; // Real name: Nabiasite. Source: [3]
#declare IOR_Nantokite = 1.93; // Real name: Nantokite. Source: [3]
#declare IOR_NAS_21_plastic = 1.5713; // Real name: NAS-21 plastic. Source: [43]
#declare IOR_Nastrophite = 1.5; // Real name: Nastrophite. Source: [3]
#declare IOR_Natanite = 1.755; // Real name: Natanite. Source: [3]
#declare IOR_Natropharmacosiderite = 1.705; // Real name: Natropharmacosiderite. Source: [3]
#declare IOR_Natrophosphate = 1.461; // Real name: Natrophosphate. Source: [3]
#declare IOR_Nioboaeschynite_Ce = 2.26; // Real name: Nioboaeschynite-(Ce). Source: [3]
#declare IOR_Nitrobarite = 1.5714; // Real name: Nitrobarite. Source: [3]
#declare IOR_Northupite = 1.514; // Real name: Northupite. Source: [3]
#declare IOR_Nosean = 1.4875; // Real name: Nosean. Source: [3]
#declare IOR_Oldhamite = 2.137; // Real name: Oldhamite. Source: [3]
#declare IOR_Ophthalmic_1_6_Glass = 1.604; // Real name: Ophthalmic 1.6 Glass. Source: [11]
#declare IOR_Ophthalmic_1_7_Glass = 1.706; // Real name: Ophthalmic 1.7 Glass. Source: [11]
#declare IOR_Ophthalmic_1_8_Glass = 1.8; // Real name: Ophthalmic 1.8 Glass. Source: [11]
#declare IOR_Ophthalmic_1_9_Glass = 1.893; // Real name: Ophthalmic 1.9 Glass. Source: [11]
#declare IOR_Ophthalmic_CR_39_Hard_Resin = 1.53; // Real name: Ophthalmic CR-39 Hard Resin. Source: [11]
#declare IOR_Ophthalmic_Crown_Glass = 1.525; // Real name: Ophthalmic Crown Glass. Source: [11]
#declare IOR_Ophthalmic_Essilor_Ormix = 1.586; // Real name: Ophthalmic Essilor Ormix. Source: [11]
#declare IOR_Ophthalmic_Hoya_EYRY = 1.74; // Real name: Ophthalmic Hoya EYRY. Source: [11]
#declare IOR_Ophthalmic_MR_10_1_67_Plastic = 1.67; // Real name: Ophthalmic MR-10 1.67 Plastic. Source: [11]
#declare IOR_Ophthalmic_MR_174_1_74_Plastic = 1.74; // Real name: Ophthalmic MR-174 1.74 Plastic. Source: [11]
#declare IOR_Ophthalmic_MR_20_1_6_Plastic = 1.6; // Real name: Ophthalmic MR-20 1.6 Plastic. Source: [11]
#declare IOR_Ophthalmic_MR_6_1_6_Plastic = 1.6; // Real name: Ophthalmic MR-6 1.6 Plastic. Source: [11]
#declare IOR_Ophthalmic_MR_7_1_665_Plastic = 1.67; // Real name: Ophthalmic MR-7 1.665 Plastic. Source: [11]
#declare IOR_Ophthalmic_MR_7_1_67_Plastic = 1.67; // Real name: Ophthalmic MR-7 1.67 Plastic. Source: [11]
#declare IOR_Ophthalmic_MR_8_1_6_Plastic = 1.6; // Real name: Ophthalmic MR-8 1.6 Plastic. Source: [11]
#declare IOR_Ophthalmic_Nikon_4_Plastic_NL4 = 1.7; // Real name: Ophthalmic Nikon 4 Plastic NL4. Source: [11]
#declare IOR_Ophthalmic_Nikon_5_Plastic_NL5 = 1.76; // Real name: Ophthalmic Nikon 5 Plastic NL5. Source: [11]
#declare IOR_Ophthalmic_PhotoGray_Extra = 1.523; // Real name: Ophthalmic PhotoGray Extra. Source: [11]
#declare IOR_Ophthalmic_Polycarbonate = 1.568; // Real name: Ophthalmic Polycarbonate. Source: [12]
#declare IOR_Ophthalmic_PPG_Trivex_Average = 1.532; // Real name: Ophthalmic PPG Trivex (Average). Source: [13]
#declare IOR_Ophthalmic_SOLA_Finalite = 1.665; // Real name: Ophthalmic SOLA Finalite. Source: [11]
#declare IOR_Ophthalmic_SOLA_Spectralite = 1.6; // Real name: Ophthalmic SOLA Spectralite. Source: [11]
#declare IOR_Ophthalmic_Tokai = 1.76; // Real name: Ophthalmic Tokai. Source: [11]
#declare IOR_Optorez1330_plastic = 1.5095; // Real name: Optorez1330 plastic. Source: [44]
#declare IOR_Orthobrannerite = 2.328; // Real name: Orthobrannerite. Source: [3]
#declare IOR_Pahasapaite = 1.523; // Real name: Pahasapaite. Source: [3]
#declare IOR_Palenzonaite = 1.965; // Real name: Palenzonaite. Source: [3]
#declare IOR_Panichiite = 1.68; // Real name: Panichiite. Source: [3]
#declare IOR_Partzite = 1.715; // Real name: Partzite. Source: [3]
#declare IOR_Paulingite_Ca = 1.4775; // Real name: Paulingite-Ca. Source: [3]
#declare IOR_Paulingite_K = 1.478; // Real name: Paulingite-K. Source: [3]
#declare IOR_Paulingite_Na = 1.478; // Real name: Paulingite-Na. Source: [3]
#declare IOR_PC_Polycarbonate_plastic = 1.5848; // Real name: PC - Polycarbonate plastic. Source: [45]
#declare IOR_Periclase = 1.7365; // Real name: Periclase. Source: [62]
#declare IOR_Pharmacosiderite = 1.693; // Real name: Pharmacosiderite. Source: [3]
#declare IOR_Phosphovanadylite = 1.566; // Real name: Phosphovanadylite. Source: [3]
#declare IOR_Plumbomicrolite = 1.985; // Real name: Plumbomicrolite. Source: [3]
#declare IOR_Plumbopyrochlore = 2.08; // Real name: Plumbopyrochlore. Source: [3]
#declare IOR_Pollucite = 1.521; // Real name: Pollucite. Source: [63]
#declare Disp_Pollucite = 0.014;
#declare IOR_Poly_methyl_methacrylate_plastic_at_20_C = 1.4906; // Real name: Poly(methyl methacrylate) plastic at 20 °C. Source: [46]
#declare IOR_Polyakovite_Ce = 1.933; // Real name: Polyakovite-(Ce). Source: [3]
#declare IOR_Polycrase_Y = 2.25; // Real name: Polycrase-(Y). Source: [3]
#declare IOR_Polytetrafluoroethylene = 1.365; // Real name: Polytetrafluoroethylene. Source: [16]
#declare IOR_PS_Polystyren_plastic = 1.5916; // Real name: PS - Polystyren plastic. Source: [47]
#declare IOR_PVP_Polyvinylpyrrolidone_plastic = 1.5274; // Real name: PVP - Polyvinylpyrrolidone plastic. Source: [48]
#declare IOR_Pyrochlore = 2.05; // Real name: Pyrochlore. Source: [3]
#declare IOR_Ralstonite = 1.43; // Real name: Ralstonite. Source: [3]
#declare IOR_Ringwoodite = 1.768; // Real name: Ringwoodite. Source: [3]
#declare IOR_Romeite = 1.85; // Real name: Romeite. Source: [3]
#declare IOR_Rondorfite = 1.67; // Real name: Rondorfite. Source: [3]
#declare IOR_Rosieresite = 1.5; // Real name: Rosieresite. Source: [3]
#declare IOR_Rowlandite_Y = 1.725; // Real name: Rowlandite-(Y). Source: [3]
#declare IOR_Sakhaite = 1.643; // Real name: Sakhaite. Source: [3]
#declare IOR_Salammoniac = 1.693; // Real name: Salammoniac. Source: [3]
#declare IOR_Samarskite_Y = 2.2; // Real name: Samarskite-(Y). Source: [3]
#declare IOR_Samarskite_Yb = 2.1; // Real name: Samarskite-(Yb). Source: [3]
#declare IOR_Santabarbaraite = 1.695; // Real name: Santabarbaraite. Source: [3]
#declare IOR_Schaferite = 1.94; // Real name: Schaferite. Source: [3]
#declare IOR_Schoenfliesite = 1.59; // Real name: Schoenfliesite. Source: [3]
#declare IOR_Schorlomite = 1.96; // Real name: Schorlomite. Source: [65]
#declare IOR_Senarmontite = 2.087; // Real name: Senarmontite. Source: [3]
#declare IOR_Silicon_Si_crystal = 3.9669; // Real name: Silicon (Si) crystal. Source: [32]
#declare IOR_Sillenite = 2.5; // Real name: Sillenite. Source: [3]
#declare IOR_Soda_lime_glass_Bronze = 1.5234; // Real name: Soda-lime glass - Bronze. Source: [35]
#declare IOR_Soda_lime_glass_Clear = 1.5234; // Real name: Soda-lime glass - Clear. Source: [36]
#declare IOR_Soda_lime_glass_Green = 1.5234; // Real name: Soda-lime glass - Green. Source: [37]
#declare IOR_Soda_lime_glass_Grey = 1.5234; // Real name: Soda-lime glass - Grey. Source: [38]
#declare IOR_Sodalite = 1.483; // Real name: Sodalite. Source: [66]
#declare Disp_Sodalite = 0.018;
#declare IOR_Sohngeite = 1.736; // Real name: Sohngeite. Source: [3]
#declare IOR_Stannomicrolite = 2.08; // Real name: Stannomicrolite. Source: [3]
#declare IOR_Stetefeldtite = 1.95; // Real name: Stetefeldtite. Source: [3]
#declare IOR_Stibiconite = 1.785; // Real name: Stibiconite. Source: [3]
#declare IOR_Stibiobetafite = 1.78; // Real name: Stibiobetafite. Source: [3]
#declare IOR_Stibiomicrolite = 2; // Real name: Stibiomicrolite. Source: [3]
#declare IOR_Stilleite = 2.5; // Real name: Stilleite. Source: [3]
#declare IOR_Strontiopyrochlore = 2.08; // Real name: Strontiopyrochlore. Source: [3]. Comment: Mineral name not approved by the IMA
#declare IOR_Sulphohalite = 1.455; // Real name: Sulphohalite. Source: [3]
#declare IOR_Sylvite = 1.49; // Real name: Sylvite. Source: [3]
#declare IOR_Table_salt = 1.5442; // Real name: Table salt. Source: [27]. Comment: NaCl
#declare IOR_Tazheranite = 2.35; // Real name: Tazheranite. Source: [3]
#declare IOR_Tennantite = 2.72; // Real name: Tennantite. Source: [3]
#declare IOR_Tetrahedrite = 2.72; // Real name: Tetrahedrite. Source: [3]
#declare IOR_Thorianite = 2.275; // Real name: Thorianite. Source: [3]
#declare IOR_Thorogummite = 1.59; // Real name: Thorogummite. Source: [3]
#declare IOR_Thorosteenstrupine = 1.645; // Real name: Thorosteenstrupine. Source: [3]
#declare IOR_Thorutite = 2.1; // Real name: Thorutite. Source: [3]
#declare IOR_Tombarthite_Y = 1.639; // Real name: Tombarthite-(Y). Source: [3]
#declare IOR_Tritomite_Ce = 1.7035; // Real name: Tritomite-(Ce). Source: [3]
#declare IOR_Tritomite_Y = 1.7; // Real name: Tritomite-(Y). Source: [3]
#declare IOR_Tschermigite = 1.459; // Real name: Tschermigite. Source: [3]
#declare IOR_Tschortnerite = 1.504; // Real name: Tschortnerite. Source: [3]
#declare IOR_Tychite = 1.51; // Real name: Tychite. Source: [3]
#declare IOR_Umbozerite = 1.64; // Real name: Umbozerite. Source: [3]
#declare IOR_Uranmicrolite = 1.97; // Real name: Uranmicrolite. Source: [3]
#declare IOR_Uranpyrochlore = 1.98; // Real name: Uranpyrochlore. Source: [3]
#declare IOR_Uvarovite = 1.87; // Real name: Uvarovite. Source: [71]
#declare Disp_Uvarovite = 0.0175;
#declare IOR_Villiaumite = 1.33; // Real name: Villiaumite. Source: [72]
#declare IOR_Viseite = 1.53; // Real name: Viseite. Source: [3]
#declare IOR_Vismirnovite = 1.735; // Real name: Vismirnovite. Source: [3]
#declare IOR_Voltaite = 1.6005; // Real name: Voltaite. Source: [3]
#declare IOR_Wadalite = 1.708; // Real name: Wadalite. Source: [3]
#declare IOR_Walfordite = 2.17; // Real name: Walfordite. Source: [3]
#declare IOR_Wickmanite = 1.705; // Real name: Wickmanite. Source: [3]
#declare IOR_Winstanleyite = 2.34; // Real name: Winstanleyite. Source: [3]
#declare IOR_Yafsoanite = 1.8; // Real name: Yafsoanite. Source: [3]
#declare IOR_Yamatoite = 1.8385; // Real name: Yamatoite. Source: [3]
#declare IOR_Yeelimite = 1.568; // Real name: Yeelimite. Source: [3]
#declare IOR_Yttrialite_Y = 1.758; // Real name: Yttrialite-(Y). Source: [3]
#declare IOR_Yttrocerite = 1.43; // Real name: Yttrocerite. Source: [3]. Comment: Mineral name not approved by the IMA
#declare IOR_Yttrocrasite_Y = 2.135; // Real name: Yttrocrasite-(Y). Source: [3]
#declare IOR_Yttropyrochlore_Y = 1.8325; // Real name: Yttropyrochlore-(Y). Source: [3]
#declare IOR_Yttrotantalite_Y = 2.15; // Real name: Yttrotantalite-(Y). Source: [3]
#declare IOR_Zaratite = 1.585; // Real name: Zaratite. Source: [3]
#declare IOR_ZeonexE48R_plastic = 1.5305; // Real name: ZeonexE48R plastic. Source: [49]
#declare IOR_Zincovoltaite = 1.605; // Real name: Zincovoltaite. Source: [3]
#declare IOR_Zirconolite = 2.22; // Real name: Zirconolite. Source: [3]
#declare IOR_Zirkelite = 2.19; // Real name: Zirkelite. Source: [3]
#declare IOR_Zunyite = 1.6; // Real name: Zunyite. Source: [3]


#ifdef(View_POV_Include_Stack)
    #debug "    ...done!\n"
#end

// END OF FILE IOR_Isotropic.inc
