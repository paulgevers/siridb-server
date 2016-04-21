/*
 * iso8601.h - Library to parse ISO 8601 dates
 *
 * author       : Jeroen van der Heijden
 * email        : jeroen@transceptor.technology
 * copyright    : 2016, Transceptor Technology
 *
 * changes
 *  - initial version, 21-04-2016
 *
 */
#pragma once

#include <inttypes.h>

typedef int iso8601_tz_t;

/* Returns a time-zone identifier from a given name or a negative value
 * in case of an error or when the time-zone is not found.
 * Examples of tzname are: Europe/Amsterdam, UTC etc.
 */
iso8601_tz_t iso8601_tz(const char * tzname);

/* Returns a time-stamp in seconds for a given date or a negative value in
 * case or an error. Time-zone information can be parsed but is also allowed
 * in the string.
 */
int64_t iso8601_parse_date(const char * str, iso8601_tz_t tz);
