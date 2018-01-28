/*
 * varidic.c
 *
 *  Created on: Jan 27, 2018
 *      Author: Mizaael
 */


#include <stdarg.h>
#include <stdio.h>

double average(int dates, ...)
{
    va_list ap;
    int j;
    double sum = 0;

    va_start(ap, dates); /* Requires the last fixed parameter (to get the address) */
    for (j = 0; j < dates; j++) {
        sum += va_arg(ap, int); /* Increments ap to the next argument. */
    }
    va_end(ap);

    return sum / dates;
}

int variadic(int argc, char const *argv[])
{
	printf("%f\n", average(3, 1, 2, 3) );
	return 0;
}
