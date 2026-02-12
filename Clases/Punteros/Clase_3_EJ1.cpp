#include <cstdlib> 
#include <iostream>
#include <cstdio>

/*PUNTEROS A FUNCIONES*/

void f1(int);
void f2 (int);

int main (int argc , char * argv[]){

    void (*pf)(int); //Definimos un puntero a una funcion 
    // 1ero lo que devuelve la funcion en este caso void
    // 2do el nombre del puntero (* + nombre)
    // 3ro el parametro que recibe la funcion  (int)
   
    pf =&f2; //le damos la direccion de f2

    pf(5); // Llamamos a la funcion f2 a traves del puntero pf 
    std:: cout << "\n\n"<<std::endl;
    f2 (5); 

}

void f1 (int n)
{for (int i = 0 ; i<n ; i++) {std::cout << "Soy la funcion f1"<<std:: endl;}}

void f2 (int n)
{for (int i = 0 ; i<n ; i++) {std::cout << "Soy la funcion f2"<<std:: endl;}}