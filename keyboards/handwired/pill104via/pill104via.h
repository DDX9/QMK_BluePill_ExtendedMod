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
	K0000, K0001, K0002, K0003, K0004, K0005, K0006, K0007, K0008, K0009, \
	K0100, K0101, K0102, K0103, K0104, K0105, K0106, K0107, K0108, K0109, \
	K0200, K0201, K0202, K0203, K0204, K0205, K0206, K0207, K0208, K0209, \
	K0300, K0301, K0302, K0303, K0304, K0305, K0306, K0307, K0308, K0309, \
	K0400, K0401, K0402, K0403, K0404, K0405, K0406, K0407, K0408, K0409, \
	K0500, K0501, K0502, 			   K0505, K0506, K0507, K0508, K0509,  \
	K0600, K0601, K0602, K0603, K0604, K0605, K0606, K0607, K0608, \
	K0700, K0701, K0702, K0703, K0704, K0705, K0706, K0707, K0708, K0709,\
	K0800, K0801, K0802, K0803, K0804, K0805, K0806, K0807, K0808, K0809,\
	K0900, K0901, K0902, K0903, K0904, K0905,  		 K0907,	K0908, K0909,\
	K1000, K1001, 		 K1003, K1004, K1005, K1006, K1007, K1008, K1009\
) { \
	{ K0000,  K0001, K0002,   K0003,  K0004,  K0005,  K0006,  K0007,  K0008,  K0009,}, \
	{ K0100,  K0101,  K0102,  K0103,  K0104,  K0105,  K0106,  K0107,  K0108,  K0109,}, \
	{ K0200,  K0201,  K0202,  K0203,  K0204,  K0205,  K0206,  K0207,  K0208,  K0209,}, \
	{ K0300,  K0301,  K0302,  K0303,  K0304,  K0305,  K0306,  K0307,  K0308,  K0309,}, \
	{ K0400,  K0401,  K0402,  K0403,  K0404,  K0405,  K0406,  K0407,  K0408,  K0409,}, \
	{ K0500,  K0501,  K0502,  KC_NO,  KC_NO,  K0505,  K0506,  K0507,  K0508,  K0509,}, \
	{ K0600,  K0601,  K0602,  K0603,  K0604,  K0605,  K0606,  K0607,  K0608,  KC_NO,}, \
	{ K0700,  K0701,  K0702,  K0703,  K0704,  K0705,  K0706,  K0707,  K0708,  K0709,}, \
	{ K0800,  K0801,  K0802,  K0803,  K0804,  K0805,  K0806,  K0807,  K0808,  K0809,}, \
	{ K0900,  K0901,  K0902,  K0903,  K0904,  K0905,  KC_NO,  K0907,  K0908,  K0909,}, \
	{ K1000,  K1001,  KC_NO,  K1003,  K1004,  K1005,  K1006,  K1007,  K1008,  K1009}  \
}

