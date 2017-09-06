#include <stdio.h>
#include <stdlib.h>

/** \brief Realiza la suma de 2 float.
 *
 * \param Primer numero float.
 * \param Segundo numero float.
 * \return Devuelve un float (el resultado de la suma).
 *
 */
float suma(float num1,float num2);



/** \brief Realiza la resta de 2 float.
 *
 * \param Primer numero float
 * \param Segundo numero float.
 * \return Devuelve un float (el resultado de la resta).
 *
 */
float resta(float num1,float num2);



/** \brief Realiza la division de 2 float y valida que el segundo no sea 0.
 *
 * \param Primer numero float.
 * \param Segundo numero float.
 * \return Devuelve un float (el resultado de la division).
 *
 */
float divisionConValidacion(float num1,float num2);



/** \brief Realiza la multiplicacion de 2 float.
 *
 * \param Primer numero float.
 * \param Segundo numero float.
 * \return Devuelve un float(el resultado de la multiplicacion).
 *
 */
float multiplicacion(float num1,float num2);



/** \brief Realiza el factorial de 1 int , verifica que sea mayor a 0 y entero .
 *
 * \param Primer numero float.
 * \return Devuelve un int , si acum vale 0 sale un error , si vale 1 muestra el resultado.
 *
 */
int factorial(float num1);



/** \brief Pide que ingresen un numero.
 *
 * \param Se le pasa un mensaje char [].
 * \return Devuelve un float (el numero ingresado).
 *
 */
float pedirNumero(char mensaje[]);


