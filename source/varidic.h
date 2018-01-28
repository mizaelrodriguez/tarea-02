/*
 * varidic.h
 *
 *  Created on: Jan 27, 2018
 *      Author: Mizael
 */

#ifndef VARIDIC_H_
#define VARIDIC_H_

typedef enum{FALSE, TRUE} BooleanType;
/*! This definition is as a general definitions to bits turn-on or turn-off any bit*/
typedef enum {BIT_OFF, BIT_ON} BIT_ONOFF;
/*! This data type is unsigned integer of 8 bits*/
typedef unsigned char uint8;
/*! This data type is signed integer of 8 bits*/
typedef char sint8;
/*! This data type is 16-bit unsigned integer*/
typedef unsigned short int uint16;
/*! This data type is 16-bit signed integer*/
typedef short int sint16;
/*! This data type is 32-bit unsigned integer*/
typedef unsigned long int uint32;
/*! This data type is 16-bit signed integer*/
typedef long int sint32;
/*! This data type is 16-bit signed integer*/
typedef double int32;
/*! This data type is 16-bit signed integer*/
typedef int int16;

/********************************************************************************************/
/********************************************************************************************/
/********************************************************************************************/
/*!
 	 \funcion para recibir un valor infinto de parametros

 	 \param[in] Dates
 	 \return void
 */
void infinit_variables (uint32_t  *Dates)
{
  while (*Dates)
  {
	  infinit_variables(*Dates++);
  }
}

/********************************************************************************************/
/********************************************************************************************/
/********************************************************************************************/
/*!
 	 \Nos entrega el promedio de los valores insertados en la funcion

 	 \param[in]
 	 \return void
 */
uint32 average(uint32 dates, ...);


/********************************************************************************************/
/********************************************************************************************/
/********************************************************************************************/
/*!
 	 \muestra el promedio

 	 \param[in]
 	 \return void
 */
void Show_result();

#endif /* VARIDIC_H_ */
