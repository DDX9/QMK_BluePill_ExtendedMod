 /* Copyright 2020 Imam Rafii 
  * 
  * This program is free software: you can redistribute it and/or modify 
  * it under the terms of the GNU General Public License as published by 
  * the Free Software Foundation, either version 2 of the License, or 
  * (at your option) any later version. 
  * 
  * This program is distributed in the hope that it will be useful, 
  * but WITHOUT ANY WARRANTY; without even the implied warranty of 
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
  * GNU General Public License for more details. 
  * 
  * You should have received a copy of the GNU General Public License 
  * along with this program.  If not, see <http://www.gnu.org/licenses/>. 
  */
#pragma once

#include "quantum.h"

#define LAYOUT( \
	K000, 		K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013, K014, K015, K016, \
	K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, K115, K116, \
	K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K213, K214, K215, K216,       \
	K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311,       K313,       \
	K400, K401, K402, K403, K404, K405, K406, K407, K408, K409, K410,	    K412,					  K415,       \
	K500, K501, K502,             K505,                   K509, K510, K511, K512,			K514, K515, K516\
) { \
	{ K000,  KC_NO, K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013,  K014,  K015,  K016, }, \
	{ K100,  K101,  K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114,  K115,  K116, }, \
	{ K200,  K201,  K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  K213,  K214,  K215,  K216, }, \
	{ K300,  K301,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  KC_NO, K313,  KC_NO, KC_NO, KC_NO,}, \
	{ K400,  K401,  K402,  K403,  K404,  K405,  K406,  K407,  K408,  K409,  K410,  KC_NO, K412,  KC_NO, KC_NO, K415,  KC_NO,}, \
	{ K500,  K501,  K502,  KC_NO, KC_NO, K505,  KC_NO, KC_NO, KC_NO, K509,  K510,  K511,  K512,  KC_NO, K514,  K515,  K516}, \
}


/*
#define KEYMAP( \
	K000,       K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013, K014, K015, K016,                                     \
	K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, K115, K116,       K118, K119, K120, K121,       \
	K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K213, K214, K215, K216,       K218, K219, K220, K221,       \
	K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311,       K313,                         K318, K319, K320,             \
	K400, K401, K402, K403, K404, K405, K406, K407, K408, K409, K410,             K413,       K415,             K418, K419, K420, K421,       \
	K500, K501, K502,             K505,             K508, K509, K510,             K513, K514, K515, K516,       K518,       K520             \
	                                                                                                                                          \
) { \
	{ K000,  KC_NO, K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013,  K014,  K015,  K016,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ K100,  K101,  K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114,  K115,  K116,  KC_NO, K118,  K119,  K120,  K121,  KC_NO }, \
	{ K200,  K201,  K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  K213,  K214,  K215,  K216,  KC_NO, K218,  K219,  K220,  K221,  KC_NO }, \
	{ K300,  K301,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  KC_NO, K313,  KC_NO, KC_NO, KC_NO, KC_NO, K318,  K319,  K320,  KC_NO, KC_NO }, \
	{ K400,  K401,  K402,  K403,  K404,  K405,  K406,  K407,  K408,  K409,  K410,  KC_NO, KC_NO, K413,  KC_NO, K415,  KC_NO, KC_NO, K418,  K419,  K420,  K421,  KC_NO }, \
	{ K500,  K501,  K502,  KC_NO, KC_NO, K505,  KC_NO, KC_NO, K508,  K509,  K510,  KC_NO, KC_NO, K513,  K514,  K515,  K516,  KC_NO, K518,  KC_NO, K520,  KC_NO, KC_NO }, \
}
*/
/*
#define LAYOUT( \
	K000,       K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013, K014, K015, K016,                                     \
	K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, K115, K116,       K118, K119, K120, K121,       \
	K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K213, K214, K215, K216,       K218, K219, K220, K221,       \
	K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311,       K313,                         K318, K319, K320,             \
	K400, K401, K402, K403, K404, K405, K406, K407, K408, K409, K410,             K413,       K415,             K418, K419, K420, K421,       \
	K500, K501, K502,             K505,             K508, K509, K510,             K513, K514, K515, K516,       K518,       K520             \
)\
 { \
	{ K000,  KC_NO, K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013,  K014,  K015,  K016,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO}, \
	{ K100,  K101,  K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114,  K115,  K116,  KC_NO, K118,  K119,  K120,  K121}, \
	{ K200,  K201,  K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  K213,  K214,  K215,  K216,  KC_NO, K218,  K219,  K220,  K221}, \
	{ K300,  K301,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  KC_NO, K313,  KC_NO, KC_NO, KC_NO, KC_NO, K318,  K319,  K320,  KC_NO}, \
	{ K400,  K401,  K402,  K403,  K404,  K405,  K406,  K407,  K408,  K409,  K410,  KC_NO, KC_NO, K413,  KC_NO, K415,  KC_NO, KC_NO, K418,  K419,  K420,  K421 }, \
	{ K500,  K501,  K502,  KC_NO, KC_NO, K505,  KC_NO, KC_NO, K508,  K509,  K510,  KC_NO, KC_NO, K513,  K514,  K515,  K516,  KC_NO, K518,  KC_NO, K520,  KC_NO } \
}
*/




/*   LAYOUT
  ENCODER
  ESC| 1  | 2  | 3  | 4  | 5  | 6  | 7  | 8  | 9  | 0  | -  | =  |BCKS | DEL  
  TAB| Q  | W  | E  | R  | T  | Y  | U  | I  | O  | P  | [  | ]  |     \    
  CAP| A  | S  | D  | F  | G  | H  | J  | K  | L  | ;  | '  |    ENTER 
  LSHFT| Z  | X  | C  | V  | B  | N  | M  | ,  | .  | /  |   RSHIF | FN 
  LCT| WIN| ALT|               ESPACE             | ALT| WIN | MN| RCT| 
*/

/*
#define LAYOUT( \
    e00, \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e, \
    k10,  k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c,   k1e, \
    k20,   k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b,    k2e, \
    k30,    k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b,     k3c, k3e, \
    k40,  k41,  k42,               k47,                 k4a, k4b, k4c, k4e \
) { \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d }, \
    { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1e }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2e, k0e }, \
    { k30, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c, k3e, KC_NO }, \
    { k40, k41, k42, e00, KC_NO, KC_NO, k47, KC_NO, KC_NO, KC_NO, k4a, k4b, k4c, k4e }\
}
*/

