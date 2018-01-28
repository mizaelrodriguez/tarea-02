/*
 * varidic.c
 *
 *  Created on: Jan 27, 2018
 *      Author: Mizaael
 */

#include "stdarg.h"
#include "stdio.h"
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "MK64F12.h"
#include "fsl_debug_console.h"

double average(int dates, ...)
{
    va_list ap;
    int contador;
    double sum = 0;

    va_start(ap, dates); /* Requires the last fixed parameter (to get the address) */
    for (contador = 0; contador < dates; contador++) {
        sum += va_arg(ap, int); /* Increments ap to the next argument. */
    }
    va_end(ap);

    return sum / contador;
}

/*
 * funcion que imprime el promedio
*/
void Show_result()
{
	printf("%f\n", average(3, 1, 2, 3) );
}
