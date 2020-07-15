#ifdef(NewIOR_Inc_Temp)
    // do nothing
#else
    #declare NewIOR_Inc_Temp = version;
    #version 3.7;
    #ifdef(View_POV_Include_Stack)
        #debug "including NewIOR.inc\n"
    #end
    
    // Include ior.inc if it has not been loaded
    #ifndef(Ior_Inc_Temp)
        #include "ior.inc"
    #end

    /************************************************************************
    /////////////////////////////////////////////////////////////////////////
    //                                                                     //
    // TITLE         : NewIOR.INC                                          //
    // VERSION       : 6.1.1                                               //
    // AUTHOR        : Sven-Erik Andersen                                  //
    // FIRST VERSION : 1994.06.28                                          //
    //                                                                     //
    /////////////////////////////////////////////////////////////////////////

    The latest version is available at GitHub at
    https://github.com/SvenErik1968/NewIOR

    If you spot an error or have suggestion for more values, please raise
    an issue in the GitHub repository.

    * DEFINITIONS:
    - STP = Standard Temperature and Pressure 20°C and 1 atm. pressure (720 mm Hg)
    
    */

    // Include the Birefringence file?
    #declare Use_Birefringence = false;

    // Include the Special files?
    #declare Use_Specials = false;

    #include "IOR_Biaxial.inc"
    #include "IOR_Gases.inc"
    #include "IOR_Isotropic.inc"
    #include "IOR_Liquids.inc"
    #include "IOR_Uniaxial.inc"
    #if (Use_Birefringence)
        #include "IOR_Birefringence.inc"
    #end
    #if (Use_Specials)
        #include ".\Special\IOR_Gemstones.inc"
        #include ".\Special\Gem_Cuts.inc"
    #end

    #version NewIOR_Inc_Temp;
#end
// END OF FILE NewIOR.INC
