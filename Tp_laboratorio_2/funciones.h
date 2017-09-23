#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#define MAX 50
typedef struct
{

    char nombre[MAX];
    int edad;
    int estado;
    int dni;

} EPersona;

/** \brief Obtiene el primer indice libre del array.
 *
 * @param lista el array se pasa como parametro.
 * @param tamaño del array de la estructura.
 * @return el primer indice disponible
 *
 */
int obtenerEspacioLibre(EPersona lista[],int tamb);




/** \brief Obtiene el indice que coincide con el dni pasado por parametro.
 *
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @param tamaño del array de la estructura.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni y si no lo encuentra devuelve -1.
 *
 */
int buscarPorDni(EPersona lista[], int docum, int tam);




/** \brief inicia todos los estados de la estructura en 0.
 *
 * \param el array de la estrucutura.
 * \param tamaño del array de la estructura.
 * \return void.
 *
 */
void estadosEn0(EPersona personas[],int tam);




/** \brief ordena los nombres alfabeticamente y si hay 2 nombres iguales los ordena por dni.
 *
 * \param el array de la estrucutura.
 * \param tamaño del array de la estructura.
 * \return void.
 *
 */
void ordenarNombre(EPersona lista[],int tam);



/** \brief ingreso de una persona al sistema.Pide dni,nombre,edad y las valida.
 *
 * \param el array de la estrucutura.
 * \param tamaño del array de la estructura.
 * \param cantidad maxima de caracteres para ingresar el nombre.
 * \return void.
 *
 */
void altaPersona(EPersona lista[],int tam,int maximo);



/** \brief valida la cantidad maxima de caracteres que se puede ingresar.
 *
 * \param array donde se guarda el nombre ingresado.
 * \param cantidad maxima de caracteres para ingresar el nombre.
 * \return devuelve 0 si cumple con la condicion y devuelve 1 si no cumple .
 *
 */
int validarNombre(char aux[],int tam);



/** \brief cambia el estado a 0 de la persona que se quiere dar de baja en el sistema.
 *
 * \param el array de la estrucutura.
 * \param tamaño del array de la estructura.
 * \return void.
 *
 */
void bajaPersona(EPersona lista[],int tam);



/** \brief Muestra los datos de las personas (dni,nombre,edad).
 *
 * \param el array de la estrucutura.
 * \param tamaño del array de la estructura.
 * \return void.
 *
 */
void mostrarPersonas(EPersona lista[],int tam);



/** \brief muestra los datos de 1 sola persona(dni,nombre,edad).
 *
 * \param un array solo de la estructura.
 * \return void.
 *
 */
void mostrarPersona(EPersona unaPersona);




/** \brief valida si el numero ingresado no contenga letras.
 *
 * \param cadena de char donde se guarda el numero
 * \return devuelve distinto de 0 si contiene letras.
 *
 */
int validarNumero(char num[]);



/** \brief cuenta la cantidad de edades ingresadas y las separa en 3 rangos
 *
 * \param el array de la estrucutura.
 * \param cantidad de rangos en la que quiero dividir las edades.
 * \param tamaño del array de la estructura.
 * \return void.
 *
 */
void cantidadEdad(EPersona lista[],int cont[],int tam);



/** \brief busca el rango que mayor cantidad de edades tiene.
 *
 * \param rango.
 * \param cantidad de rangos.
 * \return devuelve el rango que mas cantidad de edades contiene.
 *
 */
int maximoContEdad(int cont[],int tam);




/** \brief va mostrando con un "*" a que rango pertenece cada edad ingresada.
 *
 * \param el array de la estrucutura.
 * \param tamaño del array de la estructura.
 * \return void.
 *
 */
void graficoRango(EPersona lista[],int tam);



#endif // FUNCIONES_H_INCLUDED
