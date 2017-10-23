#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#define ARCH  "datos.bin"

typedef struct
{
    char titulo[20];
    char genero[20];
    int duracion;
    char descripcion[50];
    int puntaje;
    char linkImagen[50];
    int estado;
} EMovie;


/**
 *  Agrega una pelicula al archivo binario
 *  @param la estructura a ser agregada al archivo
 *  @return retorna 1 o 0 de acuerdo a si pudo agregar la pelicula o no
 */
int agregarPelicula(EMovie);

/**
 *  Borra una pelicula del archivo binario
 *  @param la estructura a ser eliminada al archivo
 *  @return retorna 1 o 0 de acuerdo a si pudo eliminar la pelicula o no
 */
int borrarPelicula(EMovie);



 /** \brief modifica los datos de la pelicula del archivo binario
  *
  * \param la estructura a ser modificada al archivo
  * \return retorna 1 o 0 de acuerdo a si pudo eliminar la pelicula o no
  */
 int modificarPelicula(EMovie);


/** \brief muestra las peliculas que tienen estado en 1
 *
 * \param la estructura a ser mostrada de un archivo
 * \return void
 */
void mostrarPeliculas(EMovie);


/** \brief valida la cantidad maxima de caracteres que se puede ingresar.
 *
 * \param array donde se guarda la cadena ingresada.
 * \param cantidad maxima de caracteres para ingresar.
 * \return devuelve 0 si cumple con la condicion y devuelve 1 si no cumple .
 *
 */
int validarString(char[],int);


/** \brief valida si el numero ingresado no contenga letras.
 *
 * \param cadena de char donde se guarda el numero
 * \return devuelve distinto de 0 si contiene letras.
 *
 */
int validarNumero(char[]);


#endif // FUNCIONES_H_INCLUDED
