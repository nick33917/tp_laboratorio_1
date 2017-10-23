#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
//#include "funciones.h"



void mostrarPeliculas(EMovie);

int main()
{
    char seguir='s';
    int opcion=0;
    EMovie pelicula;
    int flag;




    while(seguir=='s')
    {
        printf("\t-------------CARTELERA DE PELICULAS-------------\n\n");
        printf("1- Agregar pelicula\n");
        printf("2- Borrar pelicula\n");
        printf("3- Modificiar pelicula\n");
        printf("4- Mostrar lista de peliculas cargadas\n");
        printf("5- Salir\n\n");
        printf("Ingrese la opcion elegida: ");
        scanf("%d",&opcion);
        system("cls");
        switch(opcion)
        {


        case 1:
            system("cls");
            flag=agregarPelicula(pelicula);
            if(flag)
            {
                printf("\n\nLa pelicula se cargo exitosamente.\n\n");
            }
            else
            {
                printf("\n\nLa pelicula no se pudo cargar.\n\n");
            }
            system("pause");
            break;
        case 2:
            system("cls");
            flag=borrarPelicula(pelicula);
            if(flag)
            {
                printf("\n\nLa pelicula se borro exitosamente.\n\n");
            }
            else
            {
                printf("\n\nLa pelicula no se encontro.\n\n");
            }
            system("pause");
            break;
        case 3:
            system("cls");
            flag=modificarPelicula(pelicula);
            if(flag)
            {
                printf("\n\nLa pelicula se modifico exitosamente.\n\n");
            }
            else
            {
                printf("\n\nLa pelicula no se encontro.\n\n");
            }
            system("pause");
            break;
        case 4:
            system("cls");
            mostrarPeliculas(pelicula);
            system("pause");
            break;
        case 5:
            seguir='n';
            break;
        default:
            system("cls");
            printf("Opcion incorrecta, Ingrese una opcion correcta !!!\n");
            system("pause");
            break;
        }
        system("cls");
    }
    return 0;

}



