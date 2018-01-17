// unicode data, built from the unicode standard on: 2018-01-18
// see gen-wcwidth.py
#include "data-types.h"

START_ALLOW_CASE_RANGE

#include "unicode-data.h"
bool
is_combining_char(char_type code) {
	// M category (marks) (2177 codepoints) {{{
	switch(code) {
		case 0x300 ... 0x36f:
			return true;
		case 0x483 ... 0x489:
			return true;
		case 0x591 ... 0x5bd:
			return true;
		case 0x5bf:
			return true;
		case 0x5c1 ... 0x5c2:
			return true;
		case 0x5c4 ... 0x5c5:
			return true;
		case 0x5c7:
			return true;
		case 0x610 ... 0x61a:
			return true;
		case 0x64b ... 0x65f:
			return true;
		case 0x670:
			return true;
		case 0x6d6 ... 0x6dc:
			return true;
		case 0x6df ... 0x6e4:
			return true;
		case 0x6e7 ... 0x6e8:
			return true;
		case 0x6ea ... 0x6ed:
			return true;
		case 0x711:
			return true;
		case 0x730 ... 0x74a:
			return true;
		case 0x7a6 ... 0x7b0:
			return true;
		case 0x7eb ... 0x7f3:
			return true;
		case 0x816 ... 0x819:
			return true;
		case 0x81b ... 0x823:
			return true;
		case 0x825 ... 0x827:
			return true;
		case 0x829 ... 0x82d:
			return true;
		case 0x859 ... 0x85b:
			return true;
		case 0x8d4 ... 0x8e1:
			return true;
		case 0x8e3 ... 0x903:
			return true;
		case 0x93a ... 0x93c:
			return true;
		case 0x93e ... 0x94f:
			return true;
		case 0x951 ... 0x957:
			return true;
		case 0x962 ... 0x963:
			return true;
		case 0x981 ... 0x983:
			return true;
		case 0x9bc:
			return true;
		case 0x9be ... 0x9c4:
			return true;
		case 0x9c7 ... 0x9c8:
			return true;
		case 0x9cb ... 0x9cd:
			return true;
		case 0x9d7:
			return true;
		case 0x9e2 ... 0x9e3:
			return true;
		case 0xa01 ... 0xa03:
			return true;
		case 0xa3c:
			return true;
		case 0xa3e ... 0xa42:
			return true;
		case 0xa47 ... 0xa48:
			return true;
		case 0xa4b ... 0xa4d:
			return true;
		case 0xa51:
			return true;
		case 0xa70 ... 0xa71:
			return true;
		case 0xa75:
			return true;
		case 0xa81 ... 0xa83:
			return true;
		case 0xabc:
			return true;
		case 0xabe ... 0xac5:
			return true;
		case 0xac7 ... 0xac9:
			return true;
		case 0xacb ... 0xacd:
			return true;
		case 0xae2 ... 0xae3:
			return true;
		case 0xafa ... 0xaff:
			return true;
		case 0xb01 ... 0xb03:
			return true;
		case 0xb3c:
			return true;
		case 0xb3e ... 0xb44:
			return true;
		case 0xb47 ... 0xb48:
			return true;
		case 0xb4b ... 0xb4d:
			return true;
		case 0xb56 ... 0xb57:
			return true;
		case 0xb62 ... 0xb63:
			return true;
		case 0xb82:
			return true;
		case 0xbbe ... 0xbc2:
			return true;
		case 0xbc6 ... 0xbc8:
			return true;
		case 0xbca ... 0xbcd:
			return true;
		case 0xbd7:
			return true;
		case 0xc00 ... 0xc03:
			return true;
		case 0xc3e ... 0xc44:
			return true;
		case 0xc46 ... 0xc48:
			return true;
		case 0xc4a ... 0xc4d:
			return true;
		case 0xc55 ... 0xc56:
			return true;
		case 0xc62 ... 0xc63:
			return true;
		case 0xc81 ... 0xc83:
			return true;
		case 0xcbc:
			return true;
		case 0xcbe ... 0xcc4:
			return true;
		case 0xcc6 ... 0xcc8:
			return true;
		case 0xcca ... 0xccd:
			return true;
		case 0xcd5 ... 0xcd6:
			return true;
		case 0xce2 ... 0xce3:
			return true;
		case 0xd00 ... 0xd03:
			return true;
		case 0xd3b ... 0xd3c:
			return true;
		case 0xd3e ... 0xd44:
			return true;
		case 0xd46 ... 0xd48:
			return true;
		case 0xd4a ... 0xd4d:
			return true;
		case 0xd57:
			return true;
		case 0xd62 ... 0xd63:
			return true;
		case 0xd82 ... 0xd83:
			return true;
		case 0xdca:
			return true;
		case 0xdcf ... 0xdd4:
			return true;
		case 0xdd6:
			return true;
		case 0xdd8 ... 0xddf:
			return true;
		case 0xdf2 ... 0xdf3:
			return true;
		case 0xe31:
			return true;
		case 0xe34 ... 0xe3a:
			return true;
		case 0xe47 ... 0xe4e:
			return true;
		case 0xeb1:
			return true;
		case 0xeb4 ... 0xeb9:
			return true;
		case 0xebb ... 0xebc:
			return true;
		case 0xec8 ... 0xecd:
			return true;
		case 0xf18 ... 0xf19:
			return true;
		case 0xf35:
			return true;
		case 0xf37:
			return true;
		case 0xf39:
			return true;
		case 0xf3e ... 0xf3f:
			return true;
		case 0xf71 ... 0xf84:
			return true;
		case 0xf86 ... 0xf87:
			return true;
		case 0xf8d ... 0xf97:
			return true;
		case 0xf99 ... 0xfbc:
			return true;
		case 0xfc6:
			return true;
		case 0x102b ... 0x103e:
			return true;
		case 0x1056 ... 0x1059:
			return true;
		case 0x105e ... 0x1060:
			return true;
		case 0x1062 ... 0x1064:
			return true;
		case 0x1067 ... 0x106d:
			return true;
		case 0x1071 ... 0x1074:
			return true;
		case 0x1082 ... 0x108d:
			return true;
		case 0x108f:
			return true;
		case 0x109a ... 0x109d:
			return true;
		case 0x135d ... 0x135f:
			return true;
		case 0x1712 ... 0x1714:
			return true;
		case 0x1732 ... 0x1734:
			return true;
		case 0x1752 ... 0x1753:
			return true;
		case 0x1772 ... 0x1773:
			return true;
		case 0x17b4 ... 0x17d3:
			return true;
		case 0x17dd:
			return true;
		case 0x180b ... 0x180d:
			return true;
		case 0x1885 ... 0x1886:
			return true;
		case 0x18a9:
			return true;
		case 0x1920 ... 0x192b:
			return true;
		case 0x1930 ... 0x193b:
			return true;
		case 0x1a17 ... 0x1a1b:
			return true;
		case 0x1a55 ... 0x1a5e:
			return true;
		case 0x1a60 ... 0x1a7c:
			return true;
		case 0x1a7f:
			return true;
		case 0x1ab0 ... 0x1abe:
			return true;
		case 0x1b00 ... 0x1b04:
			return true;
		case 0x1b34 ... 0x1b44:
			return true;
		case 0x1b6b ... 0x1b73:
			return true;
		case 0x1b80 ... 0x1b82:
			return true;
		case 0x1ba1 ... 0x1bad:
			return true;
		case 0x1be6 ... 0x1bf3:
			return true;
		case 0x1c24 ... 0x1c37:
			return true;
		case 0x1cd0 ... 0x1cd2:
			return true;
		case 0x1cd4 ... 0x1ce8:
			return true;
		case 0x1ced:
			return true;
		case 0x1cf2 ... 0x1cf4:
			return true;
		case 0x1cf7 ... 0x1cf9:
			return true;
		case 0x1dc0 ... 0x1df9:
			return true;
		case 0x1dfb ... 0x1dff:
			return true;
		case 0x20d0 ... 0x20f0:
			return true;
		case 0x2cef ... 0x2cf1:
			return true;
		case 0x2d7f:
			return true;
		case 0x2de0 ... 0x2dff:
			return true;
		case 0x302a ... 0x302f:
			return true;
		case 0x3099 ... 0x309a:
			return true;
		case 0xa66f ... 0xa672:
			return true;
		case 0xa674 ... 0xa67d:
			return true;
		case 0xa69e ... 0xa69f:
			return true;
		case 0xa6f0 ... 0xa6f1:
			return true;
		case 0xa802:
			return true;
		case 0xa806:
			return true;
		case 0xa80b:
			return true;
		case 0xa823 ... 0xa827:
			return true;
		case 0xa880 ... 0xa881:
			return true;
		case 0xa8b4 ... 0xa8c5:
			return true;
		case 0xa8e0 ... 0xa8f1:
			return true;
		case 0xa926 ... 0xa92d:
			return true;
		case 0xa947 ... 0xa953:
			return true;
		case 0xa980 ... 0xa983:
			return true;
		case 0xa9b3 ... 0xa9c0:
			return true;
		case 0xa9e5:
			return true;
		case 0xaa29 ... 0xaa36:
			return true;
		case 0xaa43:
			return true;
		case 0xaa4c ... 0xaa4d:
			return true;
		case 0xaa7b ... 0xaa7d:
			return true;
		case 0xaab0:
			return true;
		case 0xaab2 ... 0xaab4:
			return true;
		case 0xaab7 ... 0xaab8:
			return true;
		case 0xaabe ... 0xaabf:
			return true;
		case 0xaac1:
			return true;
		case 0xaaeb ... 0xaaef:
			return true;
		case 0xaaf5 ... 0xaaf6:
			return true;
		case 0xabe3 ... 0xabea:
			return true;
		case 0xabec ... 0xabed:
			return true;
		case 0xfb1e:
			return true;
		case 0xfe00 ... 0xfe0f:
			return true;
		case 0xfe20 ... 0xfe2f:
			return true;
		case 0x101fd:
			return true;
		case 0x102e0:
			return true;
		case 0x10376 ... 0x1037a:
			return true;
		case 0x10a01 ... 0x10a03:
			return true;
		case 0x10a05 ... 0x10a06:
			return true;
		case 0x10a0c ... 0x10a0f:
			return true;
		case 0x10a38 ... 0x10a3a:
			return true;
		case 0x10a3f:
			return true;
		case 0x10ae5 ... 0x10ae6:
			return true;
		case 0x11000 ... 0x11002:
			return true;
		case 0x11038 ... 0x11046:
			return true;
		case 0x1107f ... 0x11082:
			return true;
		case 0x110b0 ... 0x110ba:
			return true;
		case 0x11100 ... 0x11102:
			return true;
		case 0x11127 ... 0x11134:
			return true;
		case 0x11173:
			return true;
		case 0x11180 ... 0x11182:
			return true;
		case 0x111b3 ... 0x111c0:
			return true;
		case 0x111ca ... 0x111cc:
			return true;
		case 0x1122c ... 0x11237:
			return true;
		case 0x1123e:
			return true;
		case 0x112df ... 0x112ea:
			return true;
		case 0x11300 ... 0x11303:
			return true;
		case 0x1133c:
			return true;
		case 0x1133e ... 0x11344:
			return true;
		case 0x11347 ... 0x11348:
			return true;
		case 0x1134b ... 0x1134d:
			return true;
		case 0x11357:
			return true;
		case 0x11362 ... 0x11363:
			return true;
		case 0x11366 ... 0x1136c:
			return true;
		case 0x11370 ... 0x11374:
			return true;
		case 0x11435 ... 0x11446:
			return true;
		case 0x114b0 ... 0x114c3:
			return true;
		case 0x115af ... 0x115b5:
			return true;
		case 0x115b8 ... 0x115c0:
			return true;
		case 0x115dc ... 0x115dd:
			return true;
		case 0x11630 ... 0x11640:
			return true;
		case 0x116ab ... 0x116b7:
			return true;
		case 0x1171d ... 0x1172b:
			return true;
		case 0x11a01 ... 0x11a0a:
			return true;
		case 0x11a33 ... 0x11a39:
			return true;
		case 0x11a3b ... 0x11a3e:
			return true;
		case 0x11a47:
			return true;
		case 0x11a51 ... 0x11a5b:
			return true;
		case 0x11a8a ... 0x11a99:
			return true;
		case 0x11c2f ... 0x11c36:
			return true;
		case 0x11c38 ... 0x11c3f:
			return true;
		case 0x11c92 ... 0x11ca7:
			return true;
		case 0x11ca9 ... 0x11cb6:
			return true;
		case 0x11d31 ... 0x11d36:
			return true;
		case 0x11d3a:
			return true;
		case 0x11d3c ... 0x11d3d:
			return true;
		case 0x11d3f ... 0x11d45:
			return true;
		case 0x11d47:
			return true;
		case 0x16af0 ... 0x16af4:
			return true;
		case 0x16b30 ... 0x16b36:
			return true;
		case 0x16f51 ... 0x16f7e:
			return true;
		case 0x16f8f ... 0x16f92:
			return true;
		case 0x1bc9d ... 0x1bc9e:
			return true;
		case 0x1d165 ... 0x1d169:
			return true;
		case 0x1d16d ... 0x1d172:
			return true;
		case 0x1d17b ... 0x1d182:
			return true;
		case 0x1d185 ... 0x1d18b:
			return true;
		case 0x1d1aa ... 0x1d1ad:
			return true;
		case 0x1d242 ... 0x1d244:
			return true;
		case 0x1da00 ... 0x1da36:
			return true;
		case 0x1da3b ... 0x1da6c:
			return true;
		case 0x1da75:
			return true;
		case 0x1da84:
			return true;
		case 0x1da9b ... 0x1da9f:
			return true;
		case 0x1daa1 ... 0x1daaf:
			return true;
		case 0x1e000 ... 0x1e006:
			return true;
		case 0x1e008 ... 0x1e018:
			return true;
		case 0x1e01b ... 0x1e021:
			return true;
		case 0x1e023 ... 0x1e024:
			return true;
		case 0x1e026 ... 0x1e02a:
			return true;
		case 0x1e8d0 ... 0x1e8d6:
			return true;
		case 0x1e944 ... 0x1e94a:
			return true;
		case 0xe0100 ... 0xe01ef:
			return true;
	} // }}}

	return false;
}

bool
is_ignored_char(char_type code) {
	// Control characters (Cc Cf Cs) (2264 codepoints) {{{
	switch(code) {
		case 0x0 ... 0x1f:
			return true;
		case 0x7f ... 0x9f:
			return true;
		case 0xad:
			return true;
		case 0x600 ... 0x605:
			return true;
		case 0x61c:
			return true;
		case 0x6dd:
			return true;
		case 0x70f:
			return true;
		case 0x8e2:
			return true;
		case 0x180e:
			return true;
		case 0x200b ... 0x200f:
			return true;
		case 0x202a ... 0x202e:
			return true;
		case 0x2060 ... 0x2064:
			return true;
		case 0x2066 ... 0x206f:
			return true;
		case 0xd800 ... 0xdfff:
			return true;
		case 0xfeff:
			return true;
		case 0xfff9 ... 0xfffb:
			return true;
		case 0x110bd:
			return true;
		case 0x1bca0 ... 0x1bca3:
			return true;
		case 0x1d173 ... 0x1d17a:
			return true;
		case 0xe0001:
			return true;
		case 0xe0020 ... 0xe007f:
			return true;
	} // }}}

	return false;
}

bool
is_word_char(char_type code) {
	// L and N categories (126595 codepoints) {{{
	switch(code) {
		case 0x30 ... 0x39:
			return true;
		case 0x41 ... 0x5a:
			return true;
		case 0x61 ... 0x7a:
			return true;
		case 0xaa:
			return true;
		case 0xb2 ... 0xb3:
			return true;
		case 0xb5:
			return true;
		case 0xb9 ... 0xba:
			return true;
		case 0xbc ... 0xbe:
			return true;
		case 0xc0 ... 0xd6:
			return true;
		case 0xd8 ... 0xf6:
			return true;
		case 0xf8 ... 0x2c1:
			return true;
		case 0x2c6 ... 0x2d1:
			return true;
		case 0x2e0 ... 0x2e4:
			return true;
		case 0x2ec:
			return true;
		case 0x2ee:
			return true;
		case 0x370 ... 0x374:
			return true;
		case 0x376 ... 0x377:
			return true;
		case 0x37a ... 0x37d:
			return true;
		case 0x37f:
			return true;
		case 0x386:
			return true;
		case 0x388 ... 0x38a:
			return true;
		case 0x38c:
			return true;
		case 0x38e ... 0x3a1:
			return true;
		case 0x3a3 ... 0x3f5:
			return true;
		case 0x3f7 ... 0x481:
			return true;
		case 0x48a ... 0x52f:
			return true;
		case 0x531 ... 0x556:
			return true;
		case 0x559:
			return true;
		case 0x561 ... 0x587:
			return true;
		case 0x5d0 ... 0x5ea:
			return true;
		case 0x5f0 ... 0x5f2:
			return true;
		case 0x620 ... 0x64a:
			return true;
		case 0x660 ... 0x669:
			return true;
		case 0x66e ... 0x66f:
			return true;
		case 0x671 ... 0x6d3:
			return true;
		case 0x6d5:
			return true;
		case 0x6e5 ... 0x6e6:
			return true;
		case 0x6ee ... 0x6fc:
			return true;
		case 0x6ff:
			return true;
		case 0x710:
			return true;
		case 0x712 ... 0x72f:
			return true;
		case 0x74d ... 0x7a5:
			return true;
		case 0x7b1:
			return true;
		case 0x7c0 ... 0x7ea:
			return true;
		case 0x7f4 ... 0x7f5:
			return true;
		case 0x7fa:
			return true;
		case 0x800 ... 0x815:
			return true;
		case 0x81a:
			return true;
		case 0x824:
			return true;
		case 0x828:
			return true;
		case 0x840 ... 0x858:
			return true;
		case 0x860 ... 0x86a:
			return true;
		case 0x8a0 ... 0x8b4:
			return true;
		case 0x8b6 ... 0x8bd:
			return true;
		case 0x904 ... 0x939:
			return true;
		case 0x93d:
			return true;
		case 0x950:
			return true;
		case 0x958 ... 0x961:
			return true;
		case 0x966 ... 0x96f:
			return true;
		case 0x971 ... 0x980:
			return true;
		case 0x985 ... 0x98c:
			return true;
		case 0x98f ... 0x990:
			return true;
		case 0x993 ... 0x9a8:
			return true;
		case 0x9aa ... 0x9b0:
			return true;
		case 0x9b2:
			return true;
		case 0x9b6 ... 0x9b9:
			return true;
		case 0x9bd:
			return true;
		case 0x9ce:
			return true;
		case 0x9dc ... 0x9dd:
			return true;
		case 0x9df ... 0x9e1:
			return true;
		case 0x9e6 ... 0x9f1:
			return true;
		case 0x9f4 ... 0x9f9:
			return true;
		case 0x9fc:
			return true;
		case 0xa05 ... 0xa0a:
			return true;
		case 0xa0f ... 0xa10:
			return true;
		case 0xa13 ... 0xa28:
			return true;
		case 0xa2a ... 0xa30:
			return true;
		case 0xa32 ... 0xa33:
			return true;
		case 0xa35 ... 0xa36:
			return true;
		case 0xa38 ... 0xa39:
			return true;
		case 0xa59 ... 0xa5c:
			return true;
		case 0xa5e:
			return true;
		case 0xa66 ... 0xa6f:
			return true;
		case 0xa72 ... 0xa74:
			return true;
		case 0xa85 ... 0xa8d:
			return true;
		case 0xa8f ... 0xa91:
			return true;
		case 0xa93 ... 0xaa8:
			return true;
		case 0xaaa ... 0xab0:
			return true;
		case 0xab2 ... 0xab3:
			return true;
		case 0xab5 ... 0xab9:
			return true;
		case 0xabd:
			return true;
		case 0xad0:
			return true;
		case 0xae0 ... 0xae1:
			return true;
		case 0xae6 ... 0xaef:
			return true;
		case 0xaf9:
			return true;
		case 0xb05 ... 0xb0c:
			return true;
		case 0xb0f ... 0xb10:
			return true;
		case 0xb13 ... 0xb28:
			return true;
		case 0xb2a ... 0xb30:
			return true;
		case 0xb32 ... 0xb33:
			return true;
		case 0xb35 ... 0xb39:
			return true;
		case 0xb3d:
			return true;
		case 0xb5c ... 0xb5d:
			return true;
		case 0xb5f ... 0xb61:
			return true;
		case 0xb66 ... 0xb6f:
			return true;
		case 0xb71 ... 0xb77:
			return true;
		case 0xb83:
			return true;
		case 0xb85 ... 0xb8a:
			return true;
		case 0xb8e ... 0xb90:
			return true;
		case 0xb92 ... 0xb95:
			return true;
		case 0xb99 ... 0xb9a:
			return true;
		case 0xb9c:
			return true;
		case 0xb9e ... 0xb9f:
			return true;
		case 0xba3 ... 0xba4:
			return true;
		case 0xba8 ... 0xbaa:
			return true;
		case 0xbae ... 0xbb9:
			return true;
		case 0xbd0:
			return true;
		case 0xbe6 ... 0xbf2:
			return true;
		case 0xc05 ... 0xc0c:
			return true;
		case 0xc0e ... 0xc10:
			return true;
		case 0xc12 ... 0xc28:
			return true;
		case 0xc2a ... 0xc39:
			return true;
		case 0xc3d:
			return true;
		case 0xc58 ... 0xc5a:
			return true;
		case 0xc60 ... 0xc61:
			return true;
		case 0xc66 ... 0xc6f:
			return true;
		case 0xc78 ... 0xc7e:
			return true;
		case 0xc80:
			return true;
		case 0xc85 ... 0xc8c:
			return true;
		case 0xc8e ... 0xc90:
			return true;
		case 0xc92 ... 0xca8:
			return true;
		case 0xcaa ... 0xcb3:
			return true;
		case 0xcb5 ... 0xcb9:
			return true;
		case 0xcbd:
			return true;
		case 0xcde:
			return true;
		case 0xce0 ... 0xce1:
			return true;
		case 0xce6 ... 0xcef:
			return true;
		case 0xcf1 ... 0xcf2:
			return true;
		case 0xd05 ... 0xd0c:
			return true;
		case 0xd0e ... 0xd10:
			return true;
		case 0xd12 ... 0xd3a:
			return true;
		case 0xd3d:
			return true;
		case 0xd4e:
			return true;
		case 0xd54 ... 0xd56:
			return true;
		case 0xd58 ... 0xd61:
			return true;
		case 0xd66 ... 0xd78:
			return true;
		case 0xd7a ... 0xd7f:
			return true;
		case 0xd85 ... 0xd96:
			return true;
		case 0xd9a ... 0xdb1:
			return true;
		case 0xdb3 ... 0xdbb:
			return true;
		case 0xdbd:
			return true;
		case 0xdc0 ... 0xdc6:
			return true;
		case 0xde6 ... 0xdef:
			return true;
		case 0xe01 ... 0xe30:
			return true;
		case 0xe32 ... 0xe33:
			return true;
		case 0xe40 ... 0xe46:
			return true;
		case 0xe50 ... 0xe59:
			return true;
		case 0xe81 ... 0xe82:
			return true;
		case 0xe84:
			return true;
		case 0xe87 ... 0xe88:
			return true;
		case 0xe8a:
			return true;
		case 0xe8d:
			return true;
		case 0xe94 ... 0xe97:
			return true;
		case 0xe99 ... 0xe9f:
			return true;
		case 0xea1 ... 0xea3:
			return true;
		case 0xea5:
			return true;
		case 0xea7:
			return true;
		case 0xeaa ... 0xeab:
			return true;
		case 0xead ... 0xeb0:
			return true;
		case 0xeb2 ... 0xeb3:
			return true;
		case 0xebd:
			return true;
		case 0xec0 ... 0xec4:
			return true;
		case 0xec6:
			return true;
		case 0xed0 ... 0xed9:
			return true;
		case 0xedc ... 0xedf:
			return true;
		case 0xf00:
			return true;
		case 0xf20 ... 0xf33:
			return true;
		case 0xf40 ... 0xf47:
			return true;
		case 0xf49 ... 0xf6c:
			return true;
		case 0xf88 ... 0xf8c:
			return true;
		case 0x1000 ... 0x102a:
			return true;
		case 0x103f ... 0x1049:
			return true;
		case 0x1050 ... 0x1055:
			return true;
		case 0x105a ... 0x105d:
			return true;
		case 0x1061:
			return true;
		case 0x1065 ... 0x1066:
			return true;
		case 0x106e ... 0x1070:
			return true;
		case 0x1075 ... 0x1081:
			return true;
		case 0x108e:
			return true;
		case 0x1090 ... 0x1099:
			return true;
		case 0x10a0 ... 0x10c5:
			return true;
		case 0x10c7:
			return true;
		case 0x10cd:
			return true;
		case 0x10d0 ... 0x10fa:
			return true;
		case 0x10fc ... 0x1248:
			return true;
		case 0x124a ... 0x124d:
			return true;
		case 0x1250 ... 0x1256:
			return true;
		case 0x1258:
			return true;
		case 0x125a ... 0x125d:
			return true;
		case 0x1260 ... 0x1288:
			return true;
		case 0x128a ... 0x128d:
			return true;
		case 0x1290 ... 0x12b0:
			return true;
		case 0x12b2 ... 0x12b5:
			return true;
		case 0x12b8 ... 0x12be:
			return true;
		case 0x12c0:
			return true;
		case 0x12c2 ... 0x12c5:
			return true;
		case 0x12c8 ... 0x12d6:
			return true;
		case 0x12d8 ... 0x1310:
			return true;
		case 0x1312 ... 0x1315:
			return true;
		case 0x1318 ... 0x135a:
			return true;
		case 0x1369 ... 0x137c:
			return true;
		case 0x1380 ... 0x138f:
			return true;
		case 0x13a0 ... 0x13f5:
			return true;
		case 0x13f8 ... 0x13fd:
			return true;
		case 0x1401 ... 0x166c:
			return true;
		case 0x166f ... 0x167f:
			return true;
		case 0x1681 ... 0x169a:
			return true;
		case 0x16a0 ... 0x16ea:
			return true;
		case 0x16ee ... 0x16f8:
			return true;
		case 0x1700 ... 0x170c:
			return true;
		case 0x170e ... 0x1711:
			return true;
		case 0x1720 ... 0x1731:
			return true;
		case 0x1740 ... 0x1751:
			return true;
		case 0x1760 ... 0x176c:
			return true;
		case 0x176e ... 0x1770:
			return true;
		case 0x1780 ... 0x17b3:
			return true;
		case 0x17d7:
			return true;
		case 0x17dc:
			return true;
		case 0x17e0 ... 0x17e9:
			return true;
		case 0x17f0 ... 0x17f9:
			return true;
		case 0x1810 ... 0x1819:
			return true;
		case 0x1820 ... 0x1877:
			return true;
		case 0x1880 ... 0x1884:
			return true;
		case 0x1887 ... 0x18a8:
			return true;
		case 0x18aa:
			return true;
		case 0x18b0 ... 0x18f5:
			return true;
		case 0x1900 ... 0x191e:
			return true;
		case 0x1946 ... 0x196d:
			return true;
		case 0x1970 ... 0x1974:
			return true;
		case 0x1980 ... 0x19ab:
			return true;
		case 0x19b0 ... 0x19c9:
			return true;
		case 0x19d0 ... 0x19da:
			return true;
		case 0x1a00 ... 0x1a16:
			return true;
		case 0x1a20 ... 0x1a54:
			return true;
		case 0x1a80 ... 0x1a89:
			return true;
		case 0x1a90 ... 0x1a99:
			return true;
		case 0x1aa7:
			return true;
		case 0x1b05 ... 0x1b33:
			return true;
		case 0x1b45 ... 0x1b4b:
			return true;
		case 0x1b50 ... 0x1b59:
			return true;
		case 0x1b83 ... 0x1ba0:
			return true;
		case 0x1bae ... 0x1be5:
			return true;
		case 0x1c00 ... 0x1c23:
			return true;
		case 0x1c40 ... 0x1c49:
			return true;
		case 0x1c4d ... 0x1c7d:
			return true;
		case 0x1c80 ... 0x1c88:
			return true;
		case 0x1ce9 ... 0x1cec:
			return true;
		case 0x1cee ... 0x1cf1:
			return true;
		case 0x1cf5 ... 0x1cf6:
			return true;
		case 0x1d00 ... 0x1dbf:
			return true;
		case 0x1e00 ... 0x1f15:
			return true;
		case 0x1f18 ... 0x1f1d:
			return true;
		case 0x1f20 ... 0x1f45:
			return true;
		case 0x1f48 ... 0x1f4d:
			return true;
		case 0x1f50 ... 0x1f57:
			return true;
		case 0x1f59:
			return true;
		case 0x1f5b:
			return true;
		case 0x1f5d:
			return true;
		case 0x1f5f ... 0x1f7d:
			return true;
		case 0x1f80 ... 0x1fb4:
			return true;
		case 0x1fb6 ... 0x1fbc:
			return true;
		case 0x1fbe:
			return true;
		case 0x1fc2 ... 0x1fc4:
			return true;
		case 0x1fc6 ... 0x1fcc:
			return true;
		case 0x1fd0 ... 0x1fd3:
			return true;
		case 0x1fd6 ... 0x1fdb:
			return true;
		case 0x1fe0 ... 0x1fec:
			return true;
		case 0x1ff2 ... 0x1ff4:
			return true;
		case 0x1ff6 ... 0x1ffc:
			return true;
		case 0x2070 ... 0x2071:
			return true;
		case 0x2074 ... 0x2079:
			return true;
		case 0x207f ... 0x2089:
			return true;
		case 0x2090 ... 0x209c:
			return true;
		case 0x2102:
			return true;
		case 0x2107:
			return true;
		case 0x210a ... 0x2113:
			return true;
		case 0x2115:
			return true;
		case 0x2119 ... 0x211d:
			return true;
		case 0x2124:
			return true;
		case 0x2126:
			return true;
		case 0x2128:
			return true;
		case 0x212a ... 0x212d:
			return true;
		case 0x212f ... 0x2139:
			return true;
		case 0x213c ... 0x213f:
			return true;
		case 0x2145 ... 0x2149:
			return true;
		case 0x214e:
			return true;
		case 0x2150 ... 0x2189:
			return true;
		case 0x2460 ... 0x249b:
			return true;
		case 0x24ea ... 0x24ff:
			return true;
		case 0x2776 ... 0x2793:
			return true;
		case 0x2c00 ... 0x2c2e:
			return true;
		case 0x2c30 ... 0x2c5e:
			return true;
		case 0x2c60 ... 0x2ce4:
			return true;
		case 0x2ceb ... 0x2cee:
			return true;
		case 0x2cf2 ... 0x2cf3:
			return true;
		case 0x2cfd:
			return true;
		case 0x2d00 ... 0x2d25:
			return true;
		case 0x2d27:
			return true;
		case 0x2d2d:
			return true;
		case 0x2d30 ... 0x2d67:
			return true;
		case 0x2d6f:
			return true;
		case 0x2d80 ... 0x2d96:
			return true;
		case 0x2da0 ... 0x2da6:
			return true;
		case 0x2da8 ... 0x2dae:
			return true;
		case 0x2db0 ... 0x2db6:
			return true;
		case 0x2db8 ... 0x2dbe:
			return true;
		case 0x2dc0 ... 0x2dc6:
			return true;
		case 0x2dc8 ... 0x2dce:
			return true;
		case 0x2dd0 ... 0x2dd6:
			return true;
		case 0x2dd8 ... 0x2dde:
			return true;
		case 0x2e2f:
			return true;
		case 0x3005 ... 0x3007:
			return true;
		case 0x3021 ... 0x3029:
			return true;
		case 0x3031 ... 0x3035:
			return true;
		case 0x3038 ... 0x303c:
			return true;
		case 0x3041 ... 0x3096:
			return true;
		case 0x309d ... 0x309f:
			return true;
		case 0x30a1 ... 0x30fa:
			return true;
		case 0x30fc ... 0x30ff:
			return true;
		case 0x3105 ... 0x312e:
			return true;
		case 0x3131 ... 0x318e:
			return true;
		case 0x3192 ... 0x3195:
			return true;
		case 0x31a0 ... 0x31ba:
			return true;
		case 0x31f0 ... 0x31ff:
			return true;
		case 0x3220 ... 0x3229:
			return true;
		case 0x3248 ... 0x324f:
			return true;
		case 0x3251 ... 0x325f:
			return true;
		case 0x3280 ... 0x3289:
			return true;
		case 0x32b1 ... 0x32bf:
			return true;
		case 0x3400 ... 0x4db5:
			return true;
		case 0x4e00 ... 0x9fea:
			return true;
		case 0xa000 ... 0xa48c:
			return true;
		case 0xa4d0 ... 0xa4fd:
			return true;
		case 0xa500 ... 0xa60c:
			return true;
		case 0xa610 ... 0xa62b:
			return true;
		case 0xa640 ... 0xa66e:
			return true;
		case 0xa67f ... 0xa69d:
			return true;
		case 0xa6a0 ... 0xa6ef:
			return true;
		case 0xa717 ... 0xa71f:
			return true;
		case 0xa722 ... 0xa788:
			return true;
		case 0xa78b ... 0xa7ae:
			return true;
		case 0xa7b0 ... 0xa7b7:
			return true;
		case 0xa7f7 ... 0xa801:
			return true;
		case 0xa803 ... 0xa805:
			return true;
		case 0xa807 ... 0xa80a:
			return true;
		case 0xa80c ... 0xa822:
			return true;
		case 0xa830 ... 0xa835:
			return true;
		case 0xa840 ... 0xa873:
			return true;
		case 0xa882 ... 0xa8b3:
			return true;
		case 0xa8d0 ... 0xa8d9:
			return true;
		case 0xa8f2 ... 0xa8f7:
			return true;
		case 0xa8fb:
			return true;
		case 0xa8fd:
			return true;
		case 0xa900 ... 0xa925:
			return true;
		case 0xa930 ... 0xa946:
			return true;
		case 0xa960 ... 0xa97c:
			return true;
		case 0xa984 ... 0xa9b2:
			return true;
		case 0xa9cf ... 0xa9d9:
			return true;
		case 0xa9e0 ... 0xa9e4:
			return true;
		case 0xa9e6 ... 0xa9fe:
			return true;
		case 0xaa00 ... 0xaa28:
			return true;
		case 0xaa40 ... 0xaa42:
			return true;
		case 0xaa44 ... 0xaa4b:
			return true;
		case 0xaa50 ... 0xaa59:
			return true;
		case 0xaa60 ... 0xaa76:
			return true;
		case 0xaa7a:
			return true;
		case 0xaa7e ... 0xaaaf:
			return true;
		case 0xaab1:
			return true;
		case 0xaab5 ... 0xaab6:
			return true;
		case 0xaab9 ... 0xaabd:
			return true;
		case 0xaac0:
			return true;
		case 0xaac2:
			return true;
		case 0xaadb ... 0xaadd:
			return true;
		case 0xaae0 ... 0xaaea:
			return true;
		case 0xaaf2 ... 0xaaf4:
			return true;
		case 0xab01 ... 0xab06:
			return true;
		case 0xab09 ... 0xab0e:
			return true;
		case 0xab11 ... 0xab16:
			return true;
		case 0xab20 ... 0xab26:
			return true;
		case 0xab28 ... 0xab2e:
			return true;
		case 0xab30 ... 0xab5a:
			return true;
		case 0xab5c ... 0xab65:
			return true;
		case 0xab70 ... 0xabe2:
			return true;
		case 0xabf0 ... 0xabf9:
			return true;
		case 0xac00 ... 0xd7a3:
			return true;
		case 0xd7b0 ... 0xd7c6:
			return true;
		case 0xd7cb ... 0xd7fb:
			return true;
		case 0xf900 ... 0xfa6d:
			return true;
		case 0xfa70 ... 0xfad9:
			return true;
		case 0xfb00 ... 0xfb06:
			return true;
		case 0xfb13 ... 0xfb17:
			return true;
		case 0xfb1d:
			return true;
		case 0xfb1f ... 0xfb28:
			return true;
		case 0xfb2a ... 0xfb36:
			return true;
		case 0xfb38 ... 0xfb3c:
			return true;
		case 0xfb3e:
			return true;
		case 0xfb40 ... 0xfb41:
			return true;
		case 0xfb43 ... 0xfb44:
			return true;
		case 0xfb46 ... 0xfbb1:
			return true;
		case 0xfbd3 ... 0xfd3d:
			return true;
		case 0xfd50 ... 0xfd8f:
			return true;
		case 0xfd92 ... 0xfdc7:
			return true;
		case 0xfdf0 ... 0xfdfb:
			return true;
		case 0xfe70 ... 0xfe74:
			return true;
		case 0xfe76 ... 0xfefc:
			return true;
		case 0xff10 ... 0xff19:
			return true;
		case 0xff21 ... 0xff3a:
			return true;
		case 0xff41 ... 0xff5a:
			return true;
		case 0xff66 ... 0xffbe:
			return true;
		case 0xffc2 ... 0xffc7:
			return true;
		case 0xffca ... 0xffcf:
			return true;
		case 0xffd2 ... 0xffd7:
			return true;
		case 0xffda ... 0xffdc:
			return true;
		case 0x10000 ... 0x1000b:
			return true;
		case 0x1000d ... 0x10026:
			return true;
		case 0x10028 ... 0x1003a:
			return true;
		case 0x1003c ... 0x1003d:
			return true;
		case 0x1003f ... 0x1004d:
			return true;
		case 0x10050 ... 0x1005d:
			return true;
		case 0x10080 ... 0x100fa:
			return true;
		case 0x10107 ... 0x10133:
			return true;
		case 0x10140 ... 0x10178:
			return true;
		case 0x1018a ... 0x1018b:
			return true;
		case 0x10280 ... 0x1029c:
			return true;
		case 0x102a0 ... 0x102d0:
			return true;
		case 0x102e1 ... 0x102fb:
			return true;
		case 0x10300 ... 0x10323:
			return true;
		case 0x1032d ... 0x1034a:
			return true;
		case 0x10350 ... 0x10375:
			return true;
		case 0x10380 ... 0x1039d:
			return true;
		case 0x103a0 ... 0x103c3:
			return true;
		case 0x103c8 ... 0x103cf:
			return true;
		case 0x103d1 ... 0x103d5:
			return true;
		case 0x10400 ... 0x1049d:
			return true;
		case 0x104a0 ... 0x104a9:
			return true;
		case 0x104b0 ... 0x104d3:
			return true;
		case 0x104d8 ... 0x104fb:
			return true;
		case 0x10500 ... 0x10527:
			return true;
		case 0x10530 ... 0x10563:
			return true;
		case 0x10600 ... 0x10736:
			return true;
		case 0x10740 ... 0x10755:
			return true;
		case 0x10760 ... 0x10767:
			return true;
		case 0x10800 ... 0x10805:
			return true;
		case 0x10808:
			return true;
		case 0x1080a ... 0x10835:
			return true;
		case 0x10837 ... 0x10838:
			return true;
		case 0x1083c:
			return true;
		case 0x1083f ... 0x10855:
			return true;
		case 0x10858 ... 0x10876:
			return true;
		case 0x10879 ... 0x1089e:
			return true;
		case 0x108a7 ... 0x108af:
			return true;
		case 0x108e0 ... 0x108f2:
			return true;
		case 0x108f4 ... 0x108f5:
			return true;
		case 0x108fb ... 0x1091b:
			return true;
		case 0x10920 ... 0x10939:
			return true;
		case 0x10980 ... 0x109b7:
			return true;
		case 0x109bc ... 0x109cf:
			return true;
		case 0x109d2 ... 0x10a00:
			return true;
		case 0x10a10 ... 0x10a13:
			return true;
		case 0x10a15 ... 0x10a17:
			return true;
		case 0x10a19 ... 0x10a33:
			return true;
		case 0x10a40 ... 0x10a47:
			return true;
		case 0x10a60 ... 0x10a7e:
			return true;
		case 0x10a80 ... 0x10a9f:
			return true;
		case 0x10ac0 ... 0x10ac7:
			return true;
		case 0x10ac9 ... 0x10ae4:
			return true;
		case 0x10aeb ... 0x10aef:
			return true;
		case 0x10b00 ... 0x10b35:
			return true;
		case 0x10b40 ... 0x10b55:
			return true;
		case 0x10b58 ... 0x10b72:
			return true;
		case 0x10b78 ... 0x10b91:
			return true;
		case 0x10ba9 ... 0x10baf:
			return true;
		case 0x10c00 ... 0x10c48:
			return true;
		case 0x10c80 ... 0x10cb2:
			return true;
		case 0x10cc0 ... 0x10cf2:
			return true;
		case 0x10cfa ... 0x10cff:
			return true;
		case 0x10e60 ... 0x10e7e:
			return true;
		case 0x11003 ... 0x11037:
			return true;
		case 0x11052 ... 0x1106f:
			return true;
		case 0x11083 ... 0x110af:
			return true;
		case 0x110d0 ... 0x110e8:
			return true;
		case 0x110f0 ... 0x110f9:
			return true;
		case 0x11103 ... 0x11126:
			return true;
		case 0x11136 ... 0x1113f:
			return true;
		case 0x11150 ... 0x11172:
			return true;
		case 0x11176:
			return true;
		case 0x11183 ... 0x111b2:
			return true;
		case 0x111c1 ... 0x111c4:
			return true;
		case 0x111d0 ... 0x111da:
			return true;
		case 0x111dc:
			return true;
		case 0x111e1 ... 0x111f4:
			return true;
		case 0x11200 ... 0x11211:
			return true;
		case 0x11213 ... 0x1122b:
			return true;
		case 0x11280 ... 0x11286:
			return true;
		case 0x11288:
			return true;
		case 0x1128a ... 0x1128d:
			return true;
		case 0x1128f ... 0x1129d:
			return true;
		case 0x1129f ... 0x112a8:
			return true;
		case 0x112b0 ... 0x112de:
			return true;
		case 0x112f0 ... 0x112f9:
			return true;
		case 0x11305 ... 0x1130c:
			return true;
		case 0x1130f ... 0x11310:
			return true;
		case 0x11313 ... 0x11328:
			return true;
		case 0x1132a ... 0x11330:
			return true;
		case 0x11332 ... 0x11333:
			return true;
		case 0x11335 ... 0x11339:
			return true;
		case 0x1133d:
			return true;
		case 0x11350:
			return true;
		case 0x1135d ... 0x11361:
			return true;
		case 0x11400 ... 0x11434:
			return true;
		case 0x11447 ... 0x1144a:
			return true;
		case 0x11450 ... 0x11459:
			return true;
		case 0x11480 ... 0x114af:
			return true;
		case 0x114c4 ... 0x114c5:
			return true;
		case 0x114c7:
			return true;
		case 0x114d0 ... 0x114d9:
			return true;
		case 0x11580 ... 0x115ae:
			return true;
		case 0x115d8 ... 0x115db:
			return true;
		case 0x11600 ... 0x1162f:
			return true;
		case 0x11644:
			return true;
		case 0x11650 ... 0x11659:
			return true;
		case 0x11680 ... 0x116aa:
			return true;
		case 0x116c0 ... 0x116c9:
			return true;
		case 0x11700 ... 0x11719:
			return true;
		case 0x11730 ... 0x1173b:
			return true;
		case 0x118a0 ... 0x118f2:
			return true;
		case 0x118ff:
			return true;
		case 0x11a00:
			return true;
		case 0x11a0b ... 0x11a32:
			return true;
		case 0x11a3a:
			return true;
		case 0x11a50:
			return true;
		case 0x11a5c ... 0x11a83:
			return true;
		case 0x11a86 ... 0x11a89:
			return true;
		case 0x11ac0 ... 0x11af8:
			return true;
		case 0x11c00 ... 0x11c08:
			return true;
		case 0x11c0a ... 0x11c2e:
			return true;
		case 0x11c40:
			return true;
		case 0x11c50 ... 0x11c6c:
			return true;
		case 0x11c72 ... 0x11c8f:
			return true;
		case 0x11d00 ... 0x11d06:
			return true;
		case 0x11d08 ... 0x11d09:
			return true;
		case 0x11d0b ... 0x11d30:
			return true;
		case 0x11d46:
			return true;
		case 0x11d50 ... 0x11d59:
			return true;
		case 0x12000 ... 0x12399:
			return true;
		case 0x12400 ... 0x1246e:
			return true;
		case 0x12480 ... 0x12543:
			return true;
		case 0x13000 ... 0x1342e:
			return true;
		case 0x14400 ... 0x14646:
			return true;
		case 0x16800 ... 0x16a38:
			return true;
		case 0x16a40 ... 0x16a5e:
			return true;
		case 0x16a60 ... 0x16a69:
			return true;
		case 0x16ad0 ... 0x16aed:
			return true;
		case 0x16b00 ... 0x16b2f:
			return true;
		case 0x16b40 ... 0x16b43:
			return true;
		case 0x16b50 ... 0x16b59:
			return true;
		case 0x16b5b ... 0x16b61:
			return true;
		case 0x16b63 ... 0x16b77:
			return true;
		case 0x16b7d ... 0x16b8f:
			return true;
		case 0x16f00 ... 0x16f44:
			return true;
		case 0x16f50:
			return true;
		case 0x16f93 ... 0x16f9f:
			return true;
		case 0x16fe0 ... 0x16fe1:
			return true;
		case 0x17000 ... 0x187ec:
			return true;
		case 0x18800 ... 0x18af2:
			return true;
		case 0x1b000 ... 0x1b11e:
			return true;
		case 0x1b170 ... 0x1b2fb:
			return true;
		case 0x1bc00 ... 0x1bc6a:
			return true;
		case 0x1bc70 ... 0x1bc7c:
			return true;
		case 0x1bc80 ... 0x1bc88:
			return true;
		case 0x1bc90 ... 0x1bc99:
			return true;
		case 0x1d360 ... 0x1d371:
			return true;
		case 0x1d400 ... 0x1d454:
			return true;
		case 0x1d456 ... 0x1d49c:
			return true;
		case 0x1d49e ... 0x1d49f:
			return true;
		case 0x1d4a2:
			return true;
		case 0x1d4a5 ... 0x1d4a6:
			return true;
		case 0x1d4a9 ... 0x1d4ac:
			return true;
		case 0x1d4ae ... 0x1d4b9:
			return true;
		case 0x1d4bb:
			return true;
		case 0x1d4bd ... 0x1d4c3:
			return true;
		case 0x1d4c5 ... 0x1d505:
			return true;
		case 0x1d507 ... 0x1d50a:
			return true;
		case 0x1d50d ... 0x1d514:
			return true;
		case 0x1d516 ... 0x1d51c:
			return true;
		case 0x1d51e ... 0x1d539:
			return true;
		case 0x1d53b ... 0x1d53e:
			return true;
		case 0x1d540 ... 0x1d544:
			return true;
		case 0x1d546:
			return true;
		case 0x1d54a ... 0x1d550:
			return true;
		case 0x1d552 ... 0x1d6a5:
			return true;
		case 0x1d6a8 ... 0x1d6c0:
			return true;
		case 0x1d6c2 ... 0x1d6da:
			return true;
		case 0x1d6dc ... 0x1d6fa:
			return true;
		case 0x1d6fc ... 0x1d714:
			return true;
		case 0x1d716 ... 0x1d734:
			return true;
		case 0x1d736 ... 0x1d74e:
			return true;
		case 0x1d750 ... 0x1d76e:
			return true;
		case 0x1d770 ... 0x1d788:
			return true;
		case 0x1d78a ... 0x1d7a8:
			return true;
		case 0x1d7aa ... 0x1d7c2:
			return true;
		case 0x1d7c4 ... 0x1d7cb:
			return true;
		case 0x1d7ce ... 0x1d7ff:
			return true;
		case 0x1e800 ... 0x1e8c4:
			return true;
		case 0x1e8c7 ... 0x1e8cf:
			return true;
		case 0x1e900 ... 0x1e943:
			return true;
		case 0x1e950 ... 0x1e959:
			return true;
		case 0x1ee00 ... 0x1ee03:
			return true;
		case 0x1ee05 ... 0x1ee1f:
			return true;
		case 0x1ee21 ... 0x1ee22:
			return true;
		case 0x1ee24:
			return true;
		case 0x1ee27:
			return true;
		case 0x1ee29 ... 0x1ee32:
			return true;
		case 0x1ee34 ... 0x1ee37:
			return true;
		case 0x1ee39:
			return true;
		case 0x1ee3b:
			return true;
		case 0x1ee42:
			return true;
		case 0x1ee47:
			return true;
		case 0x1ee49:
			return true;
		case 0x1ee4b:
			return true;
		case 0x1ee4d ... 0x1ee4f:
			return true;
		case 0x1ee51 ... 0x1ee52:
			return true;
		case 0x1ee54:
			return true;
		case 0x1ee57:
			return true;
		case 0x1ee59:
			return true;
		case 0x1ee5b:
			return true;
		case 0x1ee5d:
			return true;
		case 0x1ee5f:
			return true;
		case 0x1ee61 ... 0x1ee62:
			return true;
		case 0x1ee64:
			return true;
		case 0x1ee67 ... 0x1ee6a:
			return true;
		case 0x1ee6c ... 0x1ee72:
			return true;
		case 0x1ee74 ... 0x1ee77:
			return true;
		case 0x1ee79 ... 0x1ee7c:
			return true;
		case 0x1ee7e:
			return true;
		case 0x1ee80 ... 0x1ee89:
			return true;
		case 0x1ee8b ... 0x1ee9b:
			return true;
		case 0x1eea1 ... 0x1eea3:
			return true;
		case 0x1eea5 ... 0x1eea9:
			return true;
		case 0x1eeab ... 0x1eebb:
			return true;
		case 0x1f100 ... 0x1f10c:
			return true;
		case 0x20000 ... 0x2a6d6:
			return true;
		case 0x2a700 ... 0x2b734:
			return true;
		case 0x2b740 ... 0x2b81d:
			return true;
		case 0x2b820 ... 0x2cea1:
			return true;
		case 0x2ceb0 ... 0x2ebe0:
			return true;
		case 0x2f800 ... 0x2fa1d:
			return true;
	} // }}}

	return false;
}

bool
is_CZ_category(char_type code) {
	// C and Z categories (139751 codepoints) {{{
	switch(code) {
		case 0x0 ... 0x20:
			return true;
		case 0x7f ... 0xa0:
			return true;
		case 0xad:
			return true;
		case 0x600 ... 0x605:
			return true;
		case 0x61c:
			return true;
		case 0x6dd:
			return true;
		case 0x70f:
			return true;
		case 0x8e2:
			return true;
		case 0x1680:
			return true;
		case 0x180e:
			return true;
		case 0x2000 ... 0x200f:
			return true;
		case 0x2028 ... 0x202f:
			return true;
		case 0x205f ... 0x2064:
			return true;
		case 0x2066 ... 0x206f:
			return true;
		case 0x3000:
			return true;
		case 0xd800 ... 0xf8ff:
			return true;
		case 0xfeff:
			return true;
		case 0xfff9 ... 0xfffb:
			return true;
		case 0x110bd:
			return true;
		case 0x1bca0 ... 0x1bca3:
			return true;
		case 0x1d173 ... 0x1d17a:
			return true;
		case 0xe0001:
			return true;
		case 0xe0020 ... 0xe007f:
			return true;
		case 0xf0000 ... 0xffffd:
			return true;
		case 0x100000 ... 0x10fffd:
			return true;
	} // }}}

	return false;
}

bool
is_P_category(char_type code) {
	// P category (punctuation) (770 codepoints) {{{
	switch(code) {
		case 0x21 ... 0x23:
			return true;
		case 0x25 ... 0x2a:
			return true;
		case 0x2c ... 0x2f:
			return true;
		case 0x3a ... 0x3b:
			return true;
		case 0x3f ... 0x40:
			return true;
		case 0x5b ... 0x5d:
			return true;
		case 0x5f:
			return true;
		case 0x7b:
			return true;
		case 0x7d:
			return true;
		case 0xa1:
			return true;
		case 0xa7:
			return true;
		case 0xab:
			return true;
		case 0xb6 ... 0xb7:
			return true;
		case 0xbb:
			return true;
		case 0xbf:
			return true;
		case 0x37e:
			return true;
		case 0x387:
			return true;
		case 0x55a ... 0x55f:
			return true;
		case 0x589 ... 0x58a:
			return true;
		case 0x5be:
			return true;
		case 0x5c0:
			return true;
		case 0x5c3:
			return true;
		case 0x5c6:
			return true;
		case 0x5f3 ... 0x5f4:
			return true;
		case 0x609 ... 0x60a:
			return true;
		case 0x60c ... 0x60d:
			return true;
		case 0x61b:
			return true;
		case 0x61e ... 0x61f:
			return true;
		case 0x66a ... 0x66d:
			return true;
		case 0x6d4:
			return true;
		case 0x700 ... 0x70d:
			return true;
		case 0x7f7 ... 0x7f9:
			return true;
		case 0x830 ... 0x83e:
			return true;
		case 0x85e:
			return true;
		case 0x964 ... 0x965:
			return true;
		case 0x970:
			return true;
		case 0x9fd:
			return true;
		case 0xaf0:
			return true;
		case 0xdf4:
			return true;
		case 0xe4f:
			return true;
		case 0xe5a ... 0xe5b:
			return true;
		case 0xf04 ... 0xf12:
			return true;
		case 0xf14:
			return true;
		case 0xf3a ... 0xf3d:
			return true;
		case 0xf85:
			return true;
		case 0xfd0 ... 0xfd4:
			return true;
		case 0xfd9 ... 0xfda:
			return true;
		case 0x104a ... 0x104f:
			return true;
		case 0x10fb:
			return true;
		case 0x1360 ... 0x1368:
			return true;
		case 0x1400:
			return true;
		case 0x166d ... 0x166e:
			return true;
		case 0x169b ... 0x169c:
			return true;
		case 0x16eb ... 0x16ed:
			return true;
		case 0x1735 ... 0x1736:
			return true;
		case 0x17d4 ... 0x17d6:
			return true;
		case 0x17d8 ... 0x17da:
			return true;
		case 0x1800 ... 0x180a:
			return true;
		case 0x1944 ... 0x1945:
			return true;
		case 0x1a1e ... 0x1a1f:
			return true;
		case 0x1aa0 ... 0x1aa6:
			return true;
		case 0x1aa8 ... 0x1aad:
			return true;
		case 0x1b5a ... 0x1b60:
			return true;
		case 0x1bfc ... 0x1bff:
			return true;
		case 0x1c3b ... 0x1c3f:
			return true;
		case 0x1c7e ... 0x1c7f:
			return true;
		case 0x1cc0 ... 0x1cc7:
			return true;
		case 0x1cd3:
			return true;
		case 0x2010 ... 0x2027:
			return true;
		case 0x2030 ... 0x2043:
			return true;
		case 0x2045 ... 0x2051:
			return true;
		case 0x2053 ... 0x205e:
			return true;
		case 0x207d ... 0x207e:
			return true;
		case 0x208d ... 0x208e:
			return true;
		case 0x2308 ... 0x230b:
			return true;
		case 0x2329 ... 0x232a:
			return true;
		case 0x2768 ... 0x2775:
			return true;
		case 0x27c5 ... 0x27c6:
			return true;
		case 0x27e6 ... 0x27ef:
			return true;
		case 0x2983 ... 0x2998:
			return true;
		case 0x29d8 ... 0x29db:
			return true;
		case 0x29fc ... 0x29fd:
			return true;
		case 0x2cf9 ... 0x2cfc:
			return true;
		case 0x2cfe ... 0x2cff:
			return true;
		case 0x2d70:
			return true;
		case 0x2e00 ... 0x2e2e:
			return true;
		case 0x2e30 ... 0x2e49:
			return true;
		case 0x3001 ... 0x3003:
			return true;
		case 0x3008 ... 0x3011:
			return true;
		case 0x3014 ... 0x301f:
			return true;
		case 0x3030:
			return true;
		case 0x303d:
			return true;
		case 0x30a0:
			return true;
		case 0x30fb:
			return true;
		case 0xa4fe ... 0xa4ff:
			return true;
		case 0xa60d ... 0xa60f:
			return true;
		case 0xa673:
			return true;
		case 0xa67e:
			return true;
		case 0xa6f2 ... 0xa6f7:
			return true;
		case 0xa874 ... 0xa877:
			return true;
		case 0xa8ce ... 0xa8cf:
			return true;
		case 0xa8f8 ... 0xa8fa:
			return true;
		case 0xa8fc:
			return true;
		case 0xa92e ... 0xa92f:
			return true;
		case 0xa95f:
			return true;
		case 0xa9c1 ... 0xa9cd:
			return true;
		case 0xa9de ... 0xa9df:
			return true;
		case 0xaa5c ... 0xaa5f:
			return true;
		case 0xaade ... 0xaadf:
			return true;
		case 0xaaf0 ... 0xaaf1:
			return true;
		case 0xabeb:
			return true;
		case 0xfd3e ... 0xfd3f:
			return true;
		case 0xfe10 ... 0xfe19:
			return true;
		case 0xfe30 ... 0xfe52:
			return true;
		case 0xfe54 ... 0xfe61:
			return true;
		case 0xfe63:
			return true;
		case 0xfe68:
			return true;
		case 0xfe6a ... 0xfe6b:
			return true;
		case 0xff01 ... 0xff03:
			return true;
		case 0xff05 ... 0xff0a:
			return true;
		case 0xff0c ... 0xff0f:
			return true;
		case 0xff1a ... 0xff1b:
			return true;
		case 0xff1f ... 0xff20:
			return true;
		case 0xff3b ... 0xff3d:
			return true;
		case 0xff3f:
			return true;
		case 0xff5b:
			return true;
		case 0xff5d:
			return true;
		case 0xff5f ... 0xff65:
			return true;
		case 0x10100 ... 0x10102:
			return true;
		case 0x1039f:
			return true;
		case 0x103d0:
			return true;
		case 0x1056f:
			return true;
		case 0x10857:
			return true;
		case 0x1091f:
			return true;
		case 0x1093f:
			return true;
		case 0x10a50 ... 0x10a58:
			return true;
		case 0x10a7f:
			return true;
		case 0x10af0 ... 0x10af6:
			return true;
		case 0x10b39 ... 0x10b3f:
			return true;
		case 0x10b99 ... 0x10b9c:
			return true;
		case 0x11047 ... 0x1104d:
			return true;
		case 0x110bb ... 0x110bc:
			return true;
		case 0x110be ... 0x110c1:
			return true;
		case 0x11140 ... 0x11143:
			return true;
		case 0x11174 ... 0x11175:
			return true;
		case 0x111c5 ... 0x111c9:
			return true;
		case 0x111cd:
			return true;
		case 0x111db:
			return true;
		case 0x111dd ... 0x111df:
			return true;
		case 0x11238 ... 0x1123d:
			return true;
		case 0x112a9:
			return true;
		case 0x1144b ... 0x1144f:
			return true;
		case 0x1145b:
			return true;
		case 0x1145d:
			return true;
		case 0x114c6:
			return true;
		case 0x115c1 ... 0x115d7:
			return true;
		case 0x11641 ... 0x11643:
			return true;
		case 0x11660 ... 0x1166c:
			return true;
		case 0x1173c ... 0x1173e:
			return true;
		case 0x11a3f ... 0x11a46:
			return true;
		case 0x11a9a ... 0x11a9c:
			return true;
		case 0x11a9e ... 0x11aa2:
			return true;
		case 0x11c41 ... 0x11c45:
			return true;
		case 0x11c70 ... 0x11c71:
			return true;
		case 0x12470 ... 0x12474:
			return true;
		case 0x16a6e ... 0x16a6f:
			return true;
		case 0x16af5:
			return true;
		case 0x16b37 ... 0x16b3b:
			return true;
		case 0x16b44:
			return true;
		case 0x1bc9f:
			return true;
		case 0x1da87 ... 0x1da8b:
			return true;
		case 0x1e95e ... 0x1e95f:
			return true;
	} // }}}

	return false;
}


END_ALLOW_CASE_RANGE
