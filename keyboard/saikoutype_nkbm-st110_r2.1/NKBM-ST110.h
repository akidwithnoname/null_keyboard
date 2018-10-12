/*
Copyright 2018 Yuki Rea <null-src.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef ACTIONMAP_COMMON_H
#define ACTIONMAP_COMMON_H

// MATRIX LAYOUT --------------------------------------------------------------------------------------------------------\
            ,-----------------------------------------------------------------------------------------------.            \
            | ,---.   ,---------------. ,---------------. ,---------------. ,-----------.                   |            \
            | |K00|   |K02|K03|K04|K05| |K06|K07|K08|K09| |K0B|K0C|K0D|K0E| |K60|K61|K62|                   |            \
            | `---'   `---------------' `---------------' `---------------' `-----------'       o   o   o   |            \
            | ,-----------------------------------------------------------. ,-----------. ,---------------. |            \
            | |K10|K11|K12|K13|K14|K15|K16|K17|K18|K19|K1A|K1B|K1C|K1D|K1E| |K63|K64|K65| |K6D|K6E|K70|K71| |            \
            | |-----------------------------------------------------------| |-----------| |---------------| |            \
            | | K20 |K21|K22|K23|K24|K25|K26|K27|K28|K29|K2A|K2B|K2C| K3C | |K66|K67|K68| |K72|K73|K74|   | |            \
            | |------------------------------------------------------ K3E | `-----------' |------------K75| |            \
            | | K30  |K31|K32|K33|K34|K35|K36|K37|K38|K39|K3A|K3B|K3C|K3E |               |K76|K77|K78|   | |            \
            | |-----------------------------------------------------------|     ,---.     |---------------| |            \
            | | K40 K41|K42|K43|K44|K45|K46|K47|K48|K49|K4A|K4B|K4C  K4D  |     |K69|     |K79|K7A|K7B|   | |            \
            | |-----------------------------------------------------------| ,-----------. |------------K7C| |            \
            | | K50|K51|K52 |K53| K54   K55   K57 |K58 |K59 |K5A |K5D|K5E | |K6A|K6B|K6C| |  K7D  |K7E|   | |            \
            | `-----------------------------------------------------------' `-----------' `---------------' |            \
            `-----------------------------------------------------------------------------------------------'            \
                                                                                                                         /
#define ACTIONMAP(                                                                                                       \
    K00,       K02, K03, K04, K05,   K06, K07, K08, K09,   K0B, K0C, K0D, K0E,    K60, K61, K62,                         \
                                                                                                                         \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E,    K63, K64, K65,    K6D, K6E, K70, K71,  \
    K20,   K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C,            K66, K67, K68,    K72, K73, K74,       \
    K30,    K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C,   K3E,                      K76, K77, K78, K75,  \
    K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, K4C,      K4D,         K69,         K79, K7A, K7B,       \
    K50, K51, K52, K53,        K54, K55, K57,         K58, K59, K5A, K5D, K5E,    K6A, K6B, K6C,    K7D,      K7E, K7C   \
) {                                                                                                                                                           \
    { AC_##K00, AC_NO,    AC_##K02, AC_##K03, AC_##K04, AC_##K05, AC_##K06, AC_##K07, AC_##K08, AC_##K09, AC_NO,    AC_##K0B, AC_##K0C, AC_##K0D, AC_##K0E }, \
    { AC_##K10, AC_##K11, AC_##K12, AC_##K13, AC_##K14, AC_##K15, AC_##K16, AC_##K17, AC_##K18, AC_##K19, AC_##K1A, AC_##K1B, AC_##K1C, AC_##K1D, AC_##K1E }, \
    { AC_##K20, AC_##K21, AC_##K22, AC_##K23, AC_##K24, AC_##K25, AC_##K26, AC_##K27, AC_##K28, AC_##K29, AC_##K2A, AC_##K2B, AC_##K2C, AC_NO,    AC_NO    }, \
    { AC_##K30, AC_##K31, AC_##K32, AC_##K33, AC_##K34, AC_##K35, AC_##K36, AC_##K37, AC_##K38, AC_##K39, AC_##K3A, AC_##K3B, AC_##K3C, AC_NO,    AC_##K3E }, \
    { AC_##K40, AC_##K41, AC_##K42, AC_##K43, AC_##K44, AC_##K45, AC_##K46, AC_##K47, AC_##K48, AC_##K49, AC_##K4A, AC_##K4B, AC_##K4C, AC_##K4D, AC_NO    }, \
    { AC_##K50, AC_##K51, AC_##K52, AC_##K53, AC_##K54, AC_##K55, AC_NO,    AC_##K57, AC_##K58, AC_##K59, AC_##K5A, AC_NO,    AC_NO,    AC_##K5D, AC_##K5E }, \
    { AC_##K60, AC_##K61, AC_##K62, AC_##K63, AC_##K64, AC_##K65, AC_##K66, AC_##K67, AC_##K68, AC_##K69, AC_##K6A, AC_##K6B, AC_##K6C, AC_##K6D, AC_##K6E }, \
    { AC_##K70, AC_##K71, AC_##K72, AC_##K73, AC_##K74, AC_##K75, AC_##K76, AC_##K77, AC_##K78, AC_##K79, AC_##K7A, AC_##K7B, AC_##K7C, AC_##K7D, AC_##K7E }  \
}

#define ACTIONMAP_NKBMST110(                                                                                             \
    K00,       K02, K03, K04, K05,   K06, K07, K08, K09,   K0B, K0C, K0D, K0E,    K60, K61, K62,                         \
                                                                                                                         \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E,    K63, K64, K65,    K6D, K6E, K70, K71,  \
    K20,   K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C,            K66, K67, K68,    K72, K73, K74,       \
    K30,    K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C,   K3E,                      K76, K77, K78, K75,  \
    K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, K4C,      K4D,         K69,         K79, K7A, K7B,       \
    K50, K51, K52, K53,        K54, K55, K57,         K58, K59, K5A, K5D, K5E,    K6A, K6B, K6C,    K7D,      K7E, K7C   \
) ACTIONMAP(                                                                                                             \
    K00,       K02, K03, K04, K05,   K06, K07, K08, K09,   K0B, K0C, K0D, K0E,    K60, K61, K62,                         \
                                                                                                                         \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E,    K63, K64, K65,    K6D, K6E, K70, K71,  \
    K20,   K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C,            K66, K67, K68,    K72, K73, K74,       \
    K30,    K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C,   K3E,                      K76, K77, K78, K75,  \
    K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, K4C,      K4D,         K69,         K79, K7A, K7B,       \
    K50, K51, K52, K53,        K54, K55, K57,         K58, K59, K5A, K5D, K5E,    K6A, K6B, K6C,    K7D,      K7E, K7C   \
)

#endif
