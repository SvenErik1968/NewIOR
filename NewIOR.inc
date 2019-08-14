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
// TITLE    : NewIOR.INC                                               //
// VERSION  : 4.9                                                    //
// AUTHOR   : Sven-Erik Andersen                                       //
// DATE     : 1994.06.28                                               //
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
//                                                                     //
/////////////////////////////////////////////////////////////////////////

**************************************************************************
**                            LICENSE                                   **
**************************************************************************
This software is OSI Certified Open Source Software. OSI Certified is a
certification mark of the Open Source Initiative
<http://www.opensource.org>.

Copyright © (c) 1994, 2000 by Sven-Erik Andersen. This material may be
distributed only subject to the terms and conditions set forth in the
The GNU Lesser General Public License (LGPL), v2.1 or later (the latest
version is available at http://www.gnu.org/copyleft/lesser.html).

If you use this file, then I would appreciate (but it is not a
requirement) if you sent me a postcard (yes, snail mail!) from your
hometown. Would love to see where you live. Might even send you one back
from my town... And no, this is NOT "postcard-ware".
**************************************************************************

If you have used an earlier version of this file (pre v4), please go
through it and update your files as needed because there are MAJOR
CHANGES here!

The latest version is always available at my website (se URL below).

If you spot an error, please don't hesitate contacting me! Comments,
add-ons, corrections etc. are much appreciated to:

Email     : sven_erik@andersen.as

WWW       : http://seasoft.tecbox.com/

Snailmail : Sven-Erik Andersen
          : Langneshøgda 5A
          : N-8624 Mo I Rana
          : NORWAY

**********************************************************************************
*********************************** DEFINITION ***********************************
**********************************************************************************
** STP = Standard Temperature and Pressure 20°C and 1 atm. pressure (720 mm Hg) **
**********************************************************************************

Contributors and websites of interest:
  - Some have been forgotten due to malfunctions in wetware and hardware.
  - Mikhail Elashkin <artimind@aoi.isrir.msk.su> from the
    Independent Group "Developing Games Software", Russia, Moscow
  - Sigmund Kyrre Aas <as@stud.ntnu.no>
  - Many new values where found at http://mineral.galleries.com. If you want to
    know more about crystals, gemstones and other minerals then that is a fine
    startpoint. This site is a service by a company called Amethyst Galleries, Inc.,
    and I am not in any way connected them, or get any money from them. It's just
    that it is a very fine resource of information on crystals and other minerals.
  - Mineralogy Database at http://web.wt.net/~daba/Mineral/index.htm have a lot of
    info and images, plus a large link-section to other related sites.
  - The Mineral and Gemstone Kingdom at http://www.minerals.net/
**********************************************************************************

** WANTED!!! **
If you have IOR-values for gases and liquids, then please contact me!

** Birefringence **
Birefringence is the difference between the highest and lowest IOR in a
mineral. Most minerals have a very low birefringence, notable exceptions
is the carbonates. The birefringence causes the ray of light that enters
a mineral to split in two rays, one slow and one fast. When the two rays
exits the crystal they are bent in two different angles. If you were to
look through such a mineral (maybe calcite, it has one of the highest
birefringence values), you would see two pictures. This is also called
double refraction. I will include the birefringence values that I have,
which is most of the uniaxial and biaxial minerals. Hopefully someone
will create a patch so it can be of use someday.

** Dispersion **
Dispersion is a little more complex than birefringence. Birefringence is
affecting all wavelengths of light equally. But refraction is affected
by the wavelength too. Blue light is bent more than green light, which
is bent more than red light. When the dispersion is low, the white light
exits the crystal almost unaffected and we see it as white light. But if
the dispersion is high, the different colours are bent in different
angles. This is the effect that causes the fire or flashes of colours in
cut gemstones like diamond and zircon. This is also the effect that
causes the light to split in a glass prism or a drop of water, giving us
the rainbow.

** Cleavage **
The crystals have been separated into 3 files based on their cleavage
structure. The subject is fairly complex, and I have not figured it all
out yet. So I will not have a long explanation on the subject here. If
you want to read up on it, then take a look at some of the websites that
I have listed above, particularly the links section of the Mineralogy
Database (http://web.wt.net/~daba/Mineral/index.htm).

** Isotropic minerals **
Isometric and amorphous (like glass) minerals have essentially the same
structure or lack there of, in all directions and so have only one index
of refraction and are called isotropic minerals. These minerals are
listed in the IOR_Isotropic.inc file.

** Amorphous minerals **
These minerals do not have an ordered structure like crystals. They
include most types of glass, and minerals like amber, opal, tektites and
obsidian. These minerals are listed in the IOR_Isotropic.inc file with
the isometric minerals.

** Uniaxial minerals **
Hexagonal, trigonal and tetragonal minerals have a different structure
along their primary axes than they do in all other directions and for
this reason they have two indices of refraction, one along the primary
axis and one for every other direction. These minerals are called
uniaxial minerals for their one unique direction. These minerals are
listed in the IOR_Uniaxial.inc file.

** Biaxial minerals **
Orthorhombic, monoclinic and triclinic minerals have two planes of equal
refractive indices and are called biaxial. These minerals are listed in
the IOR_Biaxial.inc file.

*********************************************************************************/

    #include "IOR_Biaxial.inc"
    #include "IOR_Dispersion.inc"
    #include "IOR_Gases.inc"
    #include "IOR_Isotropic.inc"
    #include "IOR_Liquids.inc"
    #include "IOR_Misc.inc"
    #include "IOR_Uniaxial.inc"

    #version NewIOR_Inc_Temp;
#end
// END OF FILE NewIOR.INC
