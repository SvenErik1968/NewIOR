# NewIOR
## Additional index of refraction values for use with POV-Ray - The Persistence of Vision Raytracer™.

This is initially based on the v4.10b that I released back in 2001-03-09, my use of POV-Ray have been rather infrequent since then. But I have now started to "play around" with it a little bit.

The latest release is still available on a free webhosting site, but I don't have the password to it anymore. I also don't have access to the email address the site was registered with… ;-)

So instead, I decided to put it up here on Github and update it for newer versions of POV-Ray, the latest version I did back in 2001 was for POV-Ray v3.1.


## Contributors and websites of interest:
- Some have been forgotten due to malfunctions in wetware and hardware…
- Mikhail Elashkin <artimind@aoi.isrir.msk.su> from the Independent Group "Developing Games Software", Russia, Moscow
- Sigmund Kyrre Aas <as@stud.ntnu.no>
- Many new values where found at http://www.galleries.com. If you want to know more about crystals, gemstones and other minerals then that is a fine startpoint. This site is a service by a company called Amethyst Galleries, Inc., and I am not in any way connected them, or get any money from them. It's just that it is a very fine resource of information on crystals and other minerals.
- Mineralogy Database at http://web.wt.net/~daba/Mineral/index.htm have a lot of info and images, plus a large link-section to other related sites.
- The Mineral and Gemstone Kingdom at http://www.minerals.net/

## Birefringence
Birefringence is the difference between the highest and lowest IOR in a mineral. Most minerals have a very low birefringence, notable exceptions is the carbonates. The birefringence causes the ray of light that enters a mineral to split in two rays, one slow and one fast. When the two rays exits the crystal they are bent in two different angles. If you were to look through such a mineral (maybe calcite, it has one of the highest birefringence values), you would see two pictures. This is also called double refraction. I will include the birefringence values that I have, which is most of the uniaxial and biaxial minerals. Hopefully someone will create a patch so it can be of use someday.

## Dispersion
Dispersion is a little more complex than birefringence. Birefringence is affecting all wavelengths of light equally. But refraction is affected by the wavelength too. Blue light is bent more than green light, which is bent more than red light. When the dispersion is low, the white light exits the crystal almost unaffected and we see it as white light. But if the dispersion is high, the different colours are bent in different angles. This is the effect that causes the fire or flashes of colours in cut gemstones like diamond and zircon. This is also the effect that causes the light to split in a glass prism or a drop of water, giving us the rainbow.

## Cleavage
The crystals have been separated into 3 files based on their cleavage structure. The subject is fairly complex, and I have not figured it all out yet. So I will not have a long explanation on the subject here. If you want to read up on it, then take a look at some of the websites that I have listed above, particularly the links section of the [Mineralogy Database](http://www.webmineral.com/).

## Isotropic minerals
Isometric and amorphous (like glass) minerals have essentially the same structure or lack there of, in all directions and so have only one index of refraction and are called isotropic minerals. These minerals are listed in the [*IOR_Isotropic.inc*](./IOR_Isotropic.inc) file.

## Amorphous minerals
These minerals do not have an ordered structure like crystals. They include most types of glass, and minerals like amber, opal, tektites and obsidian. These minerals are listed in the [*IOR_Isotropic.inc*](./IOR_Isotropic.inc) file with the isometric minerals.

## Uniaxial minerals
Hexagonal, trigonal and tetragonal minerals have a different structure along their primary axes than they do in all other directions and for this reason they have two indices of refraction, one along the primary axis and one for every other direction. These minerals are called uniaxial minerals for their one unique direction. These minerals are listed in the [*IOR_Uniaxial.inc*](./IOR_Uniaxial.inc) file.

## Biaxial minerals
Orthorhombic, monoclinic and triclinic minerals have two planes of equal refractive indices and are called biaxial. These minerals are listed in the [*IOR_Biaxial.inc*](./IOR_Biaxial.inc) file.

## Special files
### Gemstones IOR
This is an extract from the NewIOR-files containing the IOR-values for the gemstones. These minerals are listed in the [*IOR_Gemstones.inc*](./Special/IOR_Gemstones.inc) file.

### Gem Cuts
From an old include file called Gems.inc. Creator unknown. Anyone who recognice this? It contains object definitions for 6 different common gemstone cuts. It also contains formulaes for calculating the carat weight for several cuts. You find these in the [*Gem_Cuts.inc*](./Special/Gem_Cuts.inc) file.
