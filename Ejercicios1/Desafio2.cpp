/*Desafío 2: El Buscador "Ciego" (Arreglos y Aritmética de Punteros)

Escribe una función que busque un número en un arreglo de enteros, pero tienes prohibido usar corchetes [] dentro de la función.

    Firma: int* buscarElemento(int *inicio, int tamano, int valorABuscar)

    La función debe devolver el puntero a la posición de memoria donde se encontró el valor, o nullptr si no existe.

    Usa un bucle while o for incrementando el puntero (ptr++).*/

#include <cstdio>

int * buscarElemento (int *, int , int );

int main (int argc , char * argv[]){

   int v[5]={33,25,99,4,88};

   buscarElemento(&v[0],5,88);

}

int * buscarElemento(int *pr, int tamano , int valor){
 
    for ( int i = 0 ; i< tamano ; i++){
        
        if ( *pr == valor ){
            printf ("La direccion en memoria del valor es %p\n", pr);
            return pr;}
        pr++;
    }
    printf ("El valor %d no se encuentra en el array\n",valor);
    return nullptr;
}