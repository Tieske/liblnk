/*
 * Codepage definitions for liblnk
 *
 * Copyright (c) 2009-2012, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _LIBLNK_CODEPAGE_H )
#define _LIBLNK_CODEPAGE_H

#include <liblnk/types.h>

#if defined( __cplusplus )
extern "C" {
#endif

/* The codepage definitions
 */
enum LIBLNK_CODEPAGE
{
	LIBLNK_CODEPAGE_ASCII				= 20127,

	LIBLNK_CODEPAGE_ISO_8859_1			= 28591,
	LIBLNK_CODEPAGE_ISO_8859_2			= 28592,
	LIBLNK_CODEPAGE_ISO_8859_3			= 28593,
	LIBLNK_CODEPAGE_ISO_8859_4			= 28594,
	LIBLNK_CODEPAGE_ISO_8859_5			= 28595,
	LIBLNK_CODEPAGE_ISO_8859_6			= 28596,
	LIBLNK_CODEPAGE_ISO_8859_7			= 28597,
	LIBLNK_CODEPAGE_ISO_8859_8			= 28598,
	LIBLNK_CODEPAGE_ISO_8859_9			= 28599,
	LIBLNK_CODEPAGE_ISO_8859_10			= 28600,
	LIBLNK_CODEPAGE_ISO_8859_11			= 28601,
	LIBLNK_CODEPAGE_ISO_8859_13			= 28603,
	LIBLNK_CODEPAGE_ISO_8859_14			= 28604,
	LIBLNK_CODEPAGE_ISO_8859_15			= 28605,
	LIBLNK_CODEPAGE_ISO_8859_16			= 28606,

	LIBLNK_CODEPAGE_KOI8_R				= 20866,
	LIBLNK_CODEPAGE_KOI8_U				= 21866,

	LIBLNK_CODEPAGE_WINDOWS_874			= 874,
	LIBLNK_CODEPAGE_WINDOWS_932			= 932,
	LIBLNK_CODEPAGE_WINDOWS_936			= 936,
	LIBLNK_CODEPAGE_WINDOWS_949			= 949,
	LIBLNK_CODEPAGE_WINDOWS_950			= 950,
	LIBLNK_CODEPAGE_WINDOWS_1250			= 1250,
	LIBLNK_CODEPAGE_WINDOWS_1251			= 1251,
	LIBLNK_CODEPAGE_WINDOWS_1252			= 1252,
	LIBLNK_CODEPAGE_WINDOWS_1253			= 1253,
	LIBLNK_CODEPAGE_WINDOWS_1254			= 1254,
	LIBLNK_CODEPAGE_WINDOWS_1255			= 1255,
	LIBLNK_CODEPAGE_WINDOWS_1256			= 1256,
	LIBLNK_CODEPAGE_WINDOWS_1257			= 1257,
	LIBLNK_CODEPAGE_WINDOWS_1258			= 1258
};

#define LIBLNK_CODEPAGE_US_ASCII			LIBLNK_CODEPAGE_ASCII

#define LIBLNK_CODEPAGE_ISO_WESTERN_EUROPEAN		LIBLNK_CODEPAGE_ISO_8859_1
#define LIBLNK_CODEPAGE_ISO_CENTRAL_EUROPEAN		LIBLNK_CODEPAGE_ISO_8859_2
#define LIBLNK_CODEPAGE_ISO_SOUTH_EUROPEAN		LIBLNK_CODEPAGE_ISO_8859_3
#define LIBLNK_CODEPAGE_ISO_NORTH_EUROPEAN		LIBLNK_CODEPAGE_ISO_8859_4
#define LIBLNK_CODEPAGE_ISO_CYRILLIC			LIBLNK_CODEPAGE_ISO_8859_5
#define LIBLNK_CODEPAGE_ISO_ARABIC			LIBLNK_CODEPAGE_ISO_8859_6
#define LIBLNK_CODEPAGE_ISO_GREEK			LIBLNK_CODEPAGE_ISO_8859_7
#define LIBLNK_CODEPAGE_ISO_HEBREW			LIBLNK_CODEPAGE_ISO_8859_8
#define LIBLNK_CODEPAGE_ISO_TURKISH			LIBLNK_CODEPAGE_ISO_8859_9
#define LIBLNK_CODEPAGE_ISO_NORDIC			LIBLNK_CODEPAGE_ISO_8859_10
#define LIBLNK_CODEPAGE_ISO_THAI			LIBLNK_CODEPAGE_ISO_8859_11
#define LIBLNK_CODEPAGE_ISO_BALTIC			LIBLNK_CODEPAGE_ISO_8859_13
#define LIBLNK_CODEPAGE_ISO_CELTIC			LIBLNK_CODEPAGE_ISO_8859_14

#define LIBLNK_CODEPAGE_ISO_LATIN_1			LIBLNK_CODEPAGE_ISO_8859_1
#define LIBLNK_CODEPAGE_ISO_LATIN_2			LIBLNK_CODEPAGE_ISO_8859_2
#define LIBLNK_CODEPAGE_ISO_LATIN_3			LIBLNK_CODEPAGE_ISO_8859_3
#define LIBLNK_CODEPAGE_ISO_LATIN_4			LIBLNK_CODEPAGE_ISO_8859_4
#define LIBLNK_CODEPAGE_ISO_LATIN_5			LIBLNK_CODEPAGE_ISO_8859_9
#define LIBLNK_CODEPAGE_ISO_LATIN_6			LIBLNK_CODEPAGE_ISO_8859_10
#define LIBLNK_CODEPAGE_ISO_LATIN_7			LIBLNK_CODEPAGE_ISO_8859_13
#define LIBLNK_CODEPAGE_ISO_LATIN_8			LIBLNK_CODEPAGE_ISO_8859_14
#define LIBLNK_CODEPAGE_ISO_LATIN_9			LIBLNK_CODEPAGE_ISO_8859_15
#define LIBLNK_CODEPAGE_ISO_LATIN_10			LIBLNK_CODEPAGE_ISO_8859_16

#define LIBLNK_CODEPAGE_KOI8_RUSSIAN			LIBLNK_CODEPAGE_KOI8_R
#define LIBLNK_CODEPAGE_KOI8_UKRAINIAN			LIBLNK_CODEPAGE_KOI8_U

#define LIBLNK_CODEPAGE_WINDOWS_THAI			LIBLNK_CODEPAGE_WINDOWS_874
#define LIBLNK_CODEPAGE_WINDOWS_JAPANESE		LIBLNK_CODEPAGE_WINDOWS_932
#define LIBLNK_CODEPAGE_WINDOWS_CHINESE_SIMPLIFIED	LIBLNK_CODEPAGE_WINDOWS_936
#define LIBLNK_CODEPAGE_WINDOWS_KOREAN			LIBLNK_CODEPAGE_WINDOWS_949
#define LIBLNK_CODEPAGE_WINDOWS_CHINESE_TRADITIONAL	LIBLNK_CODEPAGE_WINDOWS_950
#define LIBLNK_CODEPAGE_WINDOWS_CENTRAL_EUROPEAN	LIBLNK_CODEPAGE_WINDOWS_1250
#define LIBLNK_CODEPAGE_WINDOWS_CYRILLIC		LIBLNK_CODEPAGE_WINDOWS_1251
#define LIBLNK_CODEPAGE_WINDOWS_WESTERN_EUROPEAN	LIBLNK_CODEPAGE_WINDOWS_1252
#define LIBLNK_CODEPAGE_WINDOWS_GREEK			LIBLNK_CODEPAGE_WINDOWS_1253
#define LIBLNK_CODEPAGE_WINDOWS_TURKISH			LIBLNK_CODEPAGE_WINDOWS_1254
#define LIBLNK_CODEPAGE_WINDOWS_HEBREW			LIBLNK_CODEPAGE_WINDOWS_1255
#define LIBLNK_CODEPAGE_WINDOWS_ARABIC			LIBLNK_CODEPAGE_WINDOWS_1256
#define LIBLNK_CODEPAGE_WINDOWS_BALTIC			LIBLNK_CODEPAGE_WINDOWS_1257
#define LIBLNK_CODEPAGE_WINDOWS_VIETNAMESE		LIBLNK_CODEPAGE_WINDOWS_1258

#if defined( __cplusplus )
}
#endif

#endif

