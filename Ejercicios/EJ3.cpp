/*3. Puntero de punteros

    Declara un entero y crea un puntero que apunte al entero.

    Crea un puntero de punteros y cambia el valor de a usando **q.

    Pregunta: ¿Qué dirección almacena q y qué valor obtienes con **q?*/

#include <string>
#include <cstdio>
#include <iostream>
#include <cstdlib>

int main (int argc,char *argv[]){
    
    int a = 5 ;
    int *p =&a;
    int **q = &p;
    printf ("El valor de a desde **q es %d\n", **q);
}