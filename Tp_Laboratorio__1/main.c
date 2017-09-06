#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
    //declaro las variables//
    int opcion=0;
    float numero1;
    float numero2;
    float resultado;
    char seguir='s';



    while(seguir=='s')
    {
        printf("\t\t\t\t\t------ CALCULADORA ------\n\n");
        printf("1- Ingresar 1er operando (A=%.2f)\n",numero1);
        printf("2- Ingresar 2do operando (B=%.2f)\n",numero2);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n\n");

        scanf("%d",&opcion);
        //limpio pantalla //
        system("cls");


        switch(opcion)
        {
            case 1:
                //pido el 1er numero y lo guardo //
                numero1=pedirNumero("Ingrese el primer operando: ");
                break;

            case 2:
                //pido el 2do numero y lo guardo //
                numero2=pedirNumero("Ingrese el segundo operando: ");
                break;
            case 3:
                //realizo la suma de los 2 numeros y lo muestro por pantalla //
                resultado=suma(numero1,numero2);
                printf("El resultado de la suma es: %.3f\n",resultado);
                break;
            case 4:
                //realizo la resta de los 2 numeros y lo muestro por pantalla //
                resultado=resta(numero1,numero2);
                printf("El resultado de la resta es:%.3f\n",resultado);
                break;
            case 5:
                //realizo la division de los 2 numeros y lo muestro por pantalla //
                resultado=divisionConValidacion(numero1,numero2);
                // verifico que el 2do numero no sea 0 //
                if(numero2!=0)
                {
                    printf("El resultado de la division es: %.3f\n",resultado);
                }
                break;
            case 6:
                //realizo la multiplicacion de los 2 numeros y lo muestro por pantalla//
                resultado=multiplicacion(numero1,numero2);
                printf("El resultado de la multiplicacion es:%.3f\n",resultado);
                break;
            case 7:
                //reaizo el factorial del 1er numero ,verifico si es entero positivo y muestro por pantalla//
                resultado=factorial(numero1);
                // muestro el resultado solamente si devuelve 0 la funcion factorial//
                if(resultado>0)
                {
                   printf("El resultado del factorial es:%.0f\n",resultado);
                }
                break;

            case 8:
                //muestro los 2 numeros ingresados //
                printf("El primer operando es: %.3f\n",numero1);
                printf("El segundo operando es: %.3f\n\n",numero2);

               //realizo la suma de los 2 numeros y lo muestro por pantalla //
                resultado=suma(numero1,numero2);
                printf("\tEl resultado de la suma es: %.3f\n\n",resultado);

                //realizo la resta de los 2 numeros y lo muestro por pantalla //
                resultado=resta(numero1,numero2);
                printf("\tEl resultado de la resta es: %.3f\n\n",resultado);

                //realizo la division de los 2 numeros y lo muestro por pantalla //
                resultado=divisionConValidacion(numero1,numero2);
                //verifico que el 2do numero no sea 0 //
                if(numero2!=0)
                {
                    printf("\tEl resultado de la division es: %.3f\n\n",resultado);
                }

                //realizo la multiplicacion de los 2 numeros y lo muestro por pantalla//
                resultado=multiplicacion(numero1,numero2);
                printf("\tEl resultado de la multiplicacion es: %.3f\n\n",resultado);

                //reaizo el factorial del 1er numero ,valido si es entero positivo y muestro por pantalla//
                resultado=factorial(numero1);
                // muestro el resultado solamente si devuelve 0 la funcion factorial//
                if(resultado>0)
                {
                   printf("\tEl resultado del factorial es:%.0f\n\n",resultado);
                }
                 break;
            case 9:
                seguir = 'n';
                break;
            default :
                //si la opcion ingresada es diferente de 1 a 9 , muestro el mensaje//
                printf("Opcion invalida, Vuelva a elegir una opcion correcta.\n ");
        }


        //pausa el programa cuando se cumple la condicion //
        if(opcion!=1 && opcion!=2 && opcion!=9)
        {
            system("pause");
        }
        //limpio pantalla //
        system("cls");

    }
    return 0;


}


