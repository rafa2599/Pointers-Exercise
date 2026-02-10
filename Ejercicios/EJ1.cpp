/*1. Direcciones y valores

    Declara una variable int n = 42; y un puntero int *pn;.

    Asigna la dirección de n a pn.

    Imprime:

        La dirección de n.

        La dirección almacenada en pn.

        El valor de n accediendo con *pn.

    Pregunta: ¿Qué ocurre si cambias el valor de *pn a 100?*/
#include <string>
#include <cstdio>
#include <iostream>
#include <cstdlib>

int main (int argc,char *argv[]){

        int n =  42;
        int *pn = &n;
        printf ("La dirección de n es %p\n", &n);
        printf ("La dirección almacenada en pn es %p\n",pn);
        printf ("El valor de n accediendo con *pn es %d", *pn);

        //"Si *pn = 100; entonces n= 100"
        return 0;
}