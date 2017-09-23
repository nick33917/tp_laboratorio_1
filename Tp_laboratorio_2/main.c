#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"
#define TAM 20



int main()
{
    EPersona personas[TAM];
    char seguir='s';
    int opcion=0;

    estadosEn0(personas,TAM);



    while(seguir=='s')
    {
        printf("--------------------Sistema para Alta y Baja de personas--------------------\n\n");
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n\n\n");
        printf("Ingrese opcion: ");



        scanf("%d",&opcion);

        system("cls");



        switch(opcion)
        {
        case 1:
            altaPersona(personas,TAM,MAX);
            break;
        case 2:
            bajaPersona(personas,TAM);
            break;
        case 3:
            ordenarNombre(personas,TAM);
            printf("DNI-----------NOMBRE---------EDAD\n\n");
            mostrarPersonas(personas,TAM);

            break;
        case 4:
            graficoRango(personas,TAM);

            break;
        case 5:
            seguir = 'n';
            break;
        default:
            printf("La opcion ingresada no es valida !!!\n");
        }

        if(opcion!=5)
        {
            system("pause");
        }

        system("cls");
    }

    return 0;
}
