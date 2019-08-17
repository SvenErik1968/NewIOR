#ifdef(NewIOR_Inc_Temp)
    // do nothing
#else
    #declare NewIOR_Inc_Temp = version;
    #version 3.7;
    #ifdef(View_POV_Include_Stack)
        #debug "including NewIOR.inc\n"
    #end

/************************************************************************
/////////////////////////////////////////////////////////////////////////
//                                                                     //
// TITLE         : NewIOR.INC                                          //
// VERSION       : 5.0                                                 //
// AUTHOR        : Sven-Erik Andersen                                  //
// FIRST VERSION : 1994.06.28                                          //
//                                                                     //
// REVISION : 1994-12-13 Added many new values, most contributed by    //
//                       Mikhail Elashkin from Russia                  //
// REVISION : 2000-04-10 Added many new values, now up to 181          //
// REVISION : 2000-04-29 Corrected a bug; average of Greenockite_IOR   //
//                       was not calculated.                           //
// REVISION : 2000-05-23 Added some new values, plus dispersion for    //
//                       some minerals to be used with MegaPOV. Also   //
//                       fixed the average calculations, from          //
//                       X+Y/2 to (X+Y)/2. Thanks to Sigmund Kyrre Aas //
//                       for spotting that!                            //
// REVISION : 2000-07-06 Complete rewrite and reorganisation of the    //
//                       file. There are now so many values so I       //
//                       decided to separate them into multiple files. //
//                       Now contains +2850 minerals.                  //
// REVISION : 2000-11-26 Added dispersion values for 38 minerals.      //
// REVISION : 2001-03-09 Changed the license from the OPEN PUBLICATION //
//                       LICENSE to The GNU Lesser General Public      //
//                       License, v2.1                                 //
// REVISION : 2019-08-14 Now on GitHub                                 //
// REVISION : 2019-08-17 Added some new values, did some clean-up,     //
//                       separated out the birefringence values into   //
//                       its own file.                                 //
//                                                                     //
/////////////////////////////////////////////////////////////////////////

The latest version is available at GitHub at
https://github.com/SvenErik1968/NewIOR

If you spot an error or have suggestion for more values, please raise
an issue here on GitHub.

**********************************************************************************
*********************************** DEFINITION ***********************************
**********************************************************************************
** STP = Standard Temperature and Pressure 20°C and 1 atm. pressure (720 mm Hg) **
**********************************************************************************
**********************************************************************************
*********************************************************************************/

    // Include the Birefringence file?
    #declare Use_Birefringence = false;

    // Include the Special files?
    #declare Use_Specials = false;

    #include "IOR_Biaxial.inc"
    #include "IOR_Dispersion.inc"
    #include "IOR_Gases.inc"
    #include "IOR_Isotropic.inc"
    #include "IOR_Liquids.inc"
    #include "IOR_Uniaxial.inc"
    #ifdef(Use_Birefringence)
        #include "IOR_Birefringence.inc"
    #end
    #ifdef(Use_Specials)
        #include ".\Special\IOR_Gemstones.inc"
        #include ".\Special\Gem_Cuts.inc"
    #end

    #version NewIOR_Inc_Temp;
#end
// END OF FILE NewIOR.INC
