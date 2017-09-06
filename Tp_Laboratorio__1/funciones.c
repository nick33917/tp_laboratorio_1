#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
float suma(float num1,float num2)
{
    float resultado;
    resultado=num1 + num2;
    return resultado;
}

float resta(float num1,float num2)
{
    float resultado;
    resultado=num1 - num2;
    return resultado;
}
float divisionConValidacion(float num1,float num2)
{
    float resultado;
    if(num2==0)
    {
        printf("\tImposible realizar la division por 0!!! Por favor ingrese otro valor para el 2do operando.\n\n");
    }
    else
    {
        resultado=(float)num1/num2 ;
    }
    return resultado;

}
float multiplicacion(float num1,float num2)
{
    float resultado;
    resultado=(float)num1 * num2;
    return resultado;
}
int factorial(float num1)
{
    int i;
    int acum=1;
    int valEntero=num1;
    if(num1-valEntero!=0 || num1<0)
    {
        printf("\tSolo se puede hacer factorial de numeros enteros positivos\n\n");
        acum=0;
    }
    else
    {
        for(i=num1;i>0;i--)
        {
            acum=acum*i;
        }

    }
    return acum;
}

float pedirNumero(char mensaje[])
{
    float num;
    printf(mensaje);
    scanf("%f",&num);
    return num;

}
