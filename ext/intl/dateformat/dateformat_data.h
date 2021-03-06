/*
   +----------------------------------------------------------------------+
   | PHP Version 7                                                        |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Authors: Kirti Velankar <kirtig@yahoo-inc.com>                       |
   +----------------------------------------------------------------------+
*/
#ifndef DATE_FORMAT_DATA_H
#define DATE_FORMAT_DATA_H

#include <php.h>

#include <unicode/udat.h>

#include "intl_error.h"

typedef struct {
	// error hangling
	intl_error      error;

	// formatter handling
	UDateFormat *  udatf;
} dateformat_data;

dateformat_data* dateformat_data_create( TSRMLS_D );
void dateformat_data_init( dateformat_data* datef_data TSRMLS_DC );
void dateformat_data_free( dateformat_data* datef_data TSRMLS_DC );

#endif // DATE_FORMAT_DATA_H
