[![POV-Ray version](https://img.shields.io/badge/POV--Ray-3.7-blue?style=plastic)](https://www.povray.org/)

[![Latest release](https://badgen.net/github/release/SvenErik1968/NewIOR)](https://github.com/SvenErik1968/NewIOR/releases)
[![Open issues](https://badgen.net/github/open-issues//SvenErik1968/NewIOR)](https://github.com/SvenErik1968/NewIOR/issues)
![Last commit](https://badgen.net/github/last-commit/SvenErik1968/NewIOR)
[![License](https://badgen.net/github/license/SvenErik1968/NewIOR)](https://github.com/SvenErik1968/NewIOR/blob/master/LICENSE)

# NewIOR
## Additional index of refraction values for use with _POV-Ray - The Persistence of Vision Raytracer™_ ![POV-Ray logo](./POVRay_logo.svg)
This is initially based on the v4.10b that I released back in 2001-03-09 (The first version was released back in 1994!). My use of POV-Ray have been rather infrequent since then, but I have now started to "play around" with it a little bit again. :smirk:

That old version is still available on a free webhosting site, but I don't have the password to it anymore. I also don't have access to the email address the site was registered with… ;-)

So instead, I decided to put it up here on Github and update it for newer versions of POV-Ray, the latest version I did back in 2001 was for POV-Ray v3.1.

## Contributors and websites of interest:
- Some have been forgotten due to malfunctions in wetware and hardware…
- Mikhail Elashkin  from the Independent Group "Developing Games Software", Russia, Moscow
- Sigmund Kyrre Aas (was a student at NTNU, Trondheim, Norway)
- [Mineralogy Database](http://www.webmineral.com/) have a lot of information and images, plus a large link-section to other related sites. A large portion of the values in these files are from that site.
  - This site has a [page with links](http://www.webmineral.com/help/Forms.shtml) to pdf's for making paper models of crystal shapes, and a program for crystal shape editing called [KrystalShaper](http://www.jcrystal.com/products/krystalshaper/) that can be used for creating pdf's _and_ POV-files! 
- [The Mineral and Gemstone Kingdom](http://www.minerals.net/) - *The Mineral and Gemstone Kingdom is a free informational and educational guide to rocks, minerals, gemstones, and jewelry. This site has been providing detailed information and photos of hundreds of mineral and gemstone since 1997 and is one of the leading education resources on minerals and gemstones.*
- [List of refractive indices](https://en.wikipedia.org/wiki/List_of_refractive_indices) at Wikipedia and many other pages at Wikipedia
- [Mindat.org](https://www.mindat.org/) - According to their site, they are *the world’s leading authority on minerals and their localities, deposits, and mines worldwide*.
- [Gemdat.org](https://www.gemdat.org/) - Sister site to Mindat, the gemstone and gemology information website
- [Amethyst Galleries' Mineral Gallery](http://www.galleries.com/). If you want to know more about crystals, gemstones and other minerals then this is a fine startpoint.
- [List of Refractive Indices of Solvents](http://macro.lsu.edu/HowTo/solvents/Refractive%20Index.htm) from Louisiana State University
- [The Engineering ToolBox - Refractive Index for some common Liquids, Solids and Gases](https://www.engineeringtoolbox.com/refractive-index-d_1264.html) - *Refractive Index for some common Liquids, Solids and Gases*
- [LHCb](https://twiki.cern.ch/twiki/bin/view/LHCb/C4F10) - The IOR value for Perfluoro-n-butane, used in the RICH1 detector at the LHCb experiment comes from here.
- [The Physics Hypertextbook - Refraction](https://physics.info/refraction/) - *The Physics Hypertextbook - Refraction*
- International Gem Society's list of [*Gemstones and Refraction Liquids*](https://www.gemsociety.org/article/gemstones-refraction-liquids/) and list of [*Common Household Liquids*](https://www.gemsociety.org/article/refractive-index-list-of-common-household-liquids/)
- [RefractiveIndex.INFO](https://refractiveindex.info/)- *Refractive index database*
- [PubChem](https://pubchem.ncbi.nlm.nih.gov/) - *U.S. National Library of Medicin PubChem - the world's largest collection of freely accessible chemical information.*
- [List of solvents at the Polymer Analysis Laboratory at Louisiana State University](http://macro.lsu.edu/HowTo/solvents/Refractive%20Index.htm)

## Sources
- For all the values, the source is refererenced in a comment after the IOR value like this [1]. The number is refering to a numbered link in the [*sources.md*](./sources.md) file.

## Birefringence
Birefringence is the difference between the highest and lowest IOR in a mineral. Most minerals have a very low birefringence, notable exceptions is the carbonates. The birefringence causes the ray of light that enters a mineral to split in two rays, one slow and one fast. When the two rays exits the crystal they are bent in two different angles. If you were to look through such a mineral (maybe calcite, it has one of the highest birefringence values), you would see two pictures. This is also called double refraction. I will include the birefringence values that I have, which is for most of the uniaxial and biaxial minerals. Hopefully someone will create a patch so it can be of use someday. The birefringence values have been separated into its own file, [*IOR_Birefringence.inc*](./IOR_Birefringence.inc) that will not be loaded by default. To include it, change the value of the flag `Use_Birefringence` to `TRUE` in the [*NewIOR.inc*](./NewIOR.inc) file.

## Dispersion
Dispersion is a little more complex than birefringence. Birefringence is affecting all wavelengths of light equally. But refraction is affected by the wavelength too. Blue light is bent more than green light, which is bent more than red light. When the dispersion is low, the white light exits the crystal almost unaffected and we see it as white light. But if the dispersion is high, the different colours are bent in different angles. This is the effect that causes the fire or flashes of colours in cut gemstones like diamond and zircon. This is also the effect that causes the light to split in a glass prism or a drop of water, giving us the rainbow. The dispersion values are declared after the IOR-value for those minerals I have values for.

## Cleavage
The crystals have been separated into 3 files based on their cleavage structure. The subject is fairly complex, and I have not figured it all out yet. So I will not have a long explanation on the subject here. If you want to read up on it, then take a look at some of the websites that I have listed above.

## Isotropic minerals
Isometric and amorphous (like glass) minerals have essentially the same structure or lack there of, in all directions and so have only one index of refraction and are called isotropic minerals. These minerals are listed in the [*IOR_Isotropic.inc*](./IOR_Isotropic.inc) file. Other elements like various organic or artificial compounds are also included here.

## Uniaxial minerals
Hexagonal, trigonal and tetragonal minerals have a different structure along their primary axes than they do in all other directions and for this reason they have two indices of refraction, one along the primary axis and one for every other direction. These minerals are called uniaxial minerals for their one unique direction. These minerals are listed in the [*IOR_Uniaxial.inc*](./IOR_Uniaxial.inc) file.

## Biaxial minerals
Orthorhombic, monoclinic and triclinic minerals have two planes of equal refractive indices and are called biaxial. These minerals are listed in the [*IOR_Biaxial.inc*](./IOR_Biaxial.inc) file.

## Isotropic & Amorphous minerals
These minerals do not have an ordered structure like crystals. They include most types of glass, and minerals like amber, opal, tektites and obsidian. These minerals are listed in the [*IOR_Isotropic.inc*](./IOR_Isotropic.inc) file with the isometric minerals.

## Gasses & Liquids
You will find the IOR-values for gasses and liquids in [*IOR_Gases.inc*](./IOR_Gases.inc) and [*IOR_Liquids.inc*](./IOR_Liquids.inc).

## Special files
### Gemstones IOR
This is an extract from the other files containing the IOR-values for various common gemstones. These minerals are listed in the [*IOR_Gemstones.inc*](./Special/IOR_Gemstones.inc) file. The selection is based on the minerals that are listed as gemstones on [Gemdat.org](https://www.gemdat.org).

### Gem Cuts
From an old include file called Gems.inc. Creator is unknown. Anyone who recognice this? It contains object definitions for 6 different common gemstone cuts (*Brillant57*, *Brillant58*, *Stairs*, *Square_Stairs*, *Emerald_Stairs* and *Cabochon*). It also contains formulaes for calculating the carat weight for many cuts. You find these in the [*Gem_Cuts.inc*](./Special/Gem_Cuts.inc) file.

These two files are not loaded by default, to include them, change the flag `Use_Specials` to `TRUE` in the [*NewIOR.inc*](./NewIOR.inc) file.

# TODO
- [ ] - Decide if going to order the minerals based on Dana classification in addition to the current cleavage ordering.
- [ ] - Use `MEDIAN` instead of `AVERAGE` in calculations
