/*Desafío 3: El "Jefe" de los Punteros (Punteros a Punteros)

Vamos a simular una actualización de base de datos muy básica.

    Declara una variable entera nivelDeAcceso = 1.

    Crea un puntero int *ptrNivel que apunte a esa variable.

    Crea un puntero a puntero int **ptrJefe que apunte a ptrNivel.

    Escribe una función que reciba int **p y, mediante la doble desreferenciación, cambie el valor de nivelDeAcceso a 10.

    Imprime el valor original desde el main para verificar que cambió.*/
#include <cstdio>

    void cambioValor (int **);

    int main (int argc , char * argv[]){

        int n1 = 1; // NIVEL DE ACCESO 1
        int* p1 =&n1; // prt nivel
        int** pjefe = &p1;
        printf ( "El valor original es %d\n", **pjefe);
        cambioValor (pjefe);
        printf ( "El valor nuevo es %d \n", **pjefe);

    }

    void cambioValor (int **pr){

        **pr=10;

    }