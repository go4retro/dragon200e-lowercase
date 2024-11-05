# Dragon Fonts





## Original Font ROM from Dragon 200e (same as DragonFont 03.0 and 02.0)

On the original lowercase daughtercard for the Dragon200e, the font ROM was a 4kB 2532 EPROM, and the font was organized with the first byte of both the main and alternate font glyphs stored in consectuive memory locations, followed by the second lines, etc. I converted the data into a more easily parsed format, splitting the two sets of 128 font glyphs into their own files, and re-arranging the font data so that each font glyph is stored entirely in consecutive locations, meaning the first glyph comprises bytes 00-0f in the binary file.

[![image](drawsvg/rom26.ic1.0.svg)](fixrom/rom26.ic1.0.bin)
[![image](drawsvg/rom26.ic1.1.svg)](fixrom/rom26.ic1.1.bin)

## DragonPlus Lowercase Mod Fonts

DragonPlus Electronics makes a reproduction kit of the original design, available here: [Lower Case Text Upgrade for Dragon 32/64/200 &#8211; Kit Version (2023) &#8211; DragonPlus Electronics](https://dragonpluselectronics.com/product/lower-case-text-upgrade-for-dragon-32-64-200-kit-version-2023/) . They also shared a copy of the 32 fonts you can burn into a 27C256 (16 fonts) or 27C512 (all 32 fonts) here: [Dragon Lower Case Daughterboard Downloads – DragonPlus Electronics](https://dragonpluselectronics.com/dragon-lower-case-daughterboard-downloads/). The downloaded binary is organized the same way, with different sets of main and alternate fonts stored in consecutive 4kB locations in the binary. I first split the file into the 4kB char sets, and then split those into the individual font binaries. Some are duplicates, and the original Dragon 200e font is also duplicated here.

### Uppercase fonts

#### MC6847

[![image](drawsvg/DragonFont00.0.svg)](fixrom/DragonFont00.0.bin)

#### D32/64 compatible w. lower case – based on 200E character set

[![image](drawsvg/DragonFont01.0.svg)](fixrom/DragonFont01.0.bin)

#### D32/64 compatible w. inv. Chars – based on 200E character set

[![image](drawsvg/DragonFont02.0.svg)](fixrom/DragonFont02.0.bin)

#### Original 200E character set

[![image](drawsvg/DragonFont03.0.svg)](fixrom/DragonFont03.0.bin)

#### Spectrum w. lower case

[![image](drawsvg/DragonFont04.0.svg)](fixrom/DragonFont04.0.bin)

#### Spectrum w. inverse characters

[![image](drawsvg/DragonFont05.0.svg)](fixrom/DragonFont05.0.bin)

#### TI99/4A w. lower case

[![image](drawsvg/DragonFont06.0.svg)](fixrom/DragonFont06.0.bin)

#### TI99/4A w. inverse characters

[![image](drawsvg/DragonFont07.0.svg)](fixrom/DragonFont07.0.bin)

#### CGA Light for 200E – with accented chars etc.

[![image](drawsvg/DragonFont08.0.svg)](fixrom/DragonFont08.0.bin)

#### CGA Light for 200E – with accented chars etc.

[![image](drawsvg/DragonFont09.0.svg)](fixrom/DragonFont09.0.bin)

#### CGA Light for D32/64 w. lower case

[![image](drawsvg/DragonFont10.0.svg)](fixrom/DragonFont10.0.bin)

#### CGA Light for D32/64 w. inverse chars

[![image](drawsvg/DragonFont11.0.svg)](fixrom/DragonFont11.0.bin)

#### CGA Bold for 200E – with accented chars etc.

[![image](drawsvg/DragonFont12.0.svg)](fixrom/DragonFont12.0.bin)

#### CGA Bold for 200E – with accented chars etc.

[![image](drawsvg/DragonFont13.0.svg)](fixrom/DragonFont13.0.bin)

#### CGA Bold for D32/64 w. lower case

[![image](drawsvg/DragonFont14.0.svg)](fixrom/DragonFont14.0.bin)

#### CGA Bold for D32/64 w. inverse chars

[![image](drawsvg/DragonFont15.0.svg)](fixrom/DragonFont15.0.bin)

### Alternate (Inverse On) Fonts

#### MC6847

[![image](drawsvg/DragonFont00.1.svg)](fixrom/DragonFont00.1.bin)

#### D32/64 compatible w. inv. Chars – based on 200E character set.

[![image](drawsvg/DragonFont01.1.svg)](fixrom/DragonFont01.1.bin)

#### D32/64 compatible w. inv. Chars – based on 200E character set.

[![image](drawsvg/DragonFont02.1.svg)](fixrom/DragonFont02.1.bin)

#### D32/64 compatible w. inv. Chars – based on 200E character set.

[![image](drawsvg/DragonFont03.1.svg)](fixrom/DragonFont03.1.bin)

#### Spectrum w. inverse characters.

[![image](drawsvg/DragonFont04.1.svg)](fixrom/DragonFont04.1.bin)

#### D32/64 compatible w. inv. Chars – based on 200E character set.

[![image](drawsvg/DragonFont05.1.svg)](fixrom/DragonFont05.1.bin)

#### TI99/4A w. inverse characters.

[![image](drawsvg/DragonFont06.1.svg)](fixrom/DragonFont06.1.bin)

#### D32/64 compatible w. inv. Chars – based on 200E character set.

[![image](drawsvg/DragonFont07.1.svg)](fixrom/DragonFont07.1.bin)

#### Original 200E character set.

[![image](drawsvg/DragonFont08.1.svg)](fixrom/DragonFont08.1.bin)

#### CGA Light for D32/64 w. inverse chars.

[![image](drawsvg/DragonFont09.1.svg)](fixrom/DragonFont09.1.bin)

#### CGA Light for D32/64 w. inverse chars.

[![image](drawsvg/DragonFont10.1.svg)](fixrom/DragonFont10.1.bin)

#### D32/64 compatible w. inv. Chars – based on 200E character set.

[![image](drawsvg/DragonFont11.1.svg)](fixrom/DragonFont11.1.bin)

#### Original 200E character set.

[![image](drawsvg/DragonFont12.1.svg)](fixrom/DragonFont12.1.bin)

#### CGA Bold for D32/64 w. inverse chars.

[![image](drawsvg/DragonFont13.1.svg)](fixrom/DragonFont13.1.bin)

#### CGA Bold for D32/64 w. inverse chars.

[![image](drawsvg/DragonFont14.1.svg)](fixrom/DragonFont14.1.bin)

#### D32/64 compatible w. inv. Chars – based on 200E character set.

[![image](drawsvg/DragonFont15.1.svg)](fixrom/DragonFont15.1.bin)
