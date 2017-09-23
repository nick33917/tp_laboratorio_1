#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

void estadosEn0(EPersona personas[],int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        personas[i].estado=0;
    }
}




int buscarPorDni(EPersona lista[], int docum, int tam)
{
    int indice=-1,i;
    for(i=0; i<tam; i++)
    {
        if(lista[i].dni==docum && lista[i].estado ==1)
        {
            indice=i;
            break;
        }

    }

    return indice;

}




void ordenarNombre(EPersona lista[],int tam)
{
    int i;
    int j;
    EPersona auxEPersona;

    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(strcmp(lista[i].nombre, lista[j].nombre) >0 )
            {
                auxEPersona = lista[j];
                lista[j] = lista[i];
                lista[i] = auxEPersona;
            }

            if(strcmp(lista[i].nombre, lista[j].nombre) ==0 )
            {
                if(lista[i].dni>lista[j].dni)
                {
                    auxEPersona = lista[j];
                    lista[j] = lista[i];
                    lista[i] = auxEPersona;

                }
            }
        }

    }

}



void mostrarPersona(EPersona unaPersona)
{

    printf("%d     %s\t      %d  \n",unaPersona.dni,unaPersona.nombre,unaPersona.edad);
    printf("\n--------------------------------------------------\n");

}




void mostrarPersonas(EPersona lista[],int tam)
{
    int flag=-1, i;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==1)
        {
            mostrarPersona(lista[i]);
            flag=1;
        }

    }
    if(flag==-1)
    {
        printf("No hay ninguna persona cargada para mostrar\n");
    }


}




int obtenerEspacioLibre(EPersona lista[],int tam)
{
    int indice=-1, i;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==0)
        {
            indice=i;
            break;
        }
    }
    return indice;

}




void altaPersona(EPersona lista[],int tam,int maximo)
{
    EPersona nuevaPersona;
    int espacio;
    int esta;
    int edad;
    int dni;
    char buffer[2000];
    espacio=obtenerEspacioLibre(lista,tam);
    if(espacio==-1)
    {
        printf("No hay mas lugar para cargar Personas !!! \n");

    }
    else
    {
        printf("Ingrese el dni: ");
        fflush(stdin);
        gets(buffer);

        while(validarNumero(buffer)!=0)
        {
            printf("\nReingrese el dni: ");
            fflush(stdin);
            gets(buffer);
        }
        dni=atoi(buffer);
        nuevaPersona.dni=dni;
        esta=buscarPorDni(lista,dni,tam);
        if(esta!=-1)
        {
            printf("\nEl dni: %d  ya fue ingresado !!!",dni);


        }
        else
        {


            printf("\nIngrese el nombre: ");
            fflush(stdin);
            gets(buffer);
            while(validarNombre(buffer,maximo)==0)
            {
                printf("\nReingre el nombre: ");
                fflush(stdin);
                gets(buffer);
            }
            strcpy(nuevaPersona.nombre,buffer);

            printf("\nIngrese la edad: ");
            fflush(stdin);
            gets(buffer);
            while(validarNumero(buffer)!=0 || strlen(buffer)<0 || strlen(buffer)>3)
            {
                printf("\nReingrese la Edad: ");
                fflush(stdin);
                gets(buffer);

            }
            edad=atoi(buffer);
            nuevaPersona.edad=edad;

            nuevaPersona.estado=1;
            lista[espacio]=nuevaPersona;


        }

    }


    printf("\n");

}




void bajaPersona(EPersona lista[],int tam)
{
    int dni;
    int i;
    char eliminar='n';
    printf("Ingrese el dni de la persona a buscar: ");
    scanf("%d",&dni);
    i=buscarPorDni(lista, dni, tam);
    if(i!=-1)
    {
        printf("\tLos datos de la persona son: \nDNI----------NOMBRE--------EDAD\n");
        printf("%d     %s        %d\n",lista[i].dni,lista[i].nombre,lista[i].edad);
        printf("Desea dar de baja del sistema a esta persona? s/n: ");
        fflush(stdin);
        scanf("%c",&eliminar);
        if(eliminar=='s')
        {
            printf("\nLa persona fue dada de baja\n");
            lista[i].estado=0;

        }
        else
        {
            printf("\nLa persona no fue dada de baja\n");

        }

    }
    else
    {
        printf("\nEl documento no se encontro en el sistema\n");

    }


}


int validarNombre(char aux[],int maximo)
{
    int flag=0;
    if(strlen(aux)<maximo-1)
    {
        flag=1;
    }
    return flag;
}





int validarNumero(char num[])
{
    int flag=0;
    int i;
    int cant;
    cant=strlen(num);

    for(i=0; i<cant; i++)
    {
        if(isdigit(num[i])==0)
        {
            flag=1;
            break;

        }
    }
    return flag;
}




int maximoContEdad(int cont[],int tam)
{
    int maximo=0;
    int i;
    for(i=0; i<tam; i++)
    {
        if(maximo==0 || cont[i]>maximo)
        {
            maximo=cont[i];
        }
    }
    return maximo;
}





void cantidadEdad(EPersona lista[],int rango[],int tam)
{

    int i;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado!=0)
        {
            if(lista[i].edad<18)
            {
                rango[0]++;
            }
            else if(lista[i].edad>35)
            {
                rango[2]++;
            }
            else
            {
                rango[1]++;
            }
        }
    }
}





void graficoRango(EPersona lista[],int tam)
{
    int rango[3]= {};
    int i;
    int j;
    int max;


    cantidadEdad(lista,rango,tam);
    max=maximoContEdad(rango,3);

    for(i=max; i>0; i--)
    {
        for(j=0; j<3; j++)
        {
            if(rango[j]>=i)
            {
                printf("\t  *");
            }
            else
            {
                printf("\t  ");
            }
        }
        printf("\n");
    }
    printf("\t<18\t18-35\t>35\n");


}




















