#include <string>
#include <cstdio>
#include <iostream>
#include <cstdlib>
using namespace std;

void swap (int &a , int &b);

int main (int argc , char * argv[] ) {
    
    int x, y; //Definimos dos variables enteros
    int *px, *py ; // Defininmos dos punteros a enteros
    x = 55, y = - 22; // Le asignamos valores

    printf ("El valor de x es : %d\n\n", x);
    printf ("El valor de y es : %d\n\n", y);

    printf ("El tamanño de un entero es: %d\n\n", sizeof(int));

    px = &x , py = &y; // Asignamos la direc de memoria de x e y a px y py

    printf ("px = %p\n\n",px); //Asi imprimimos la direccion de px y py 
    printf ("py = %p\n\n",py);

    printf ("*px = %d\n\n", *px); //Asi imprimimos el valor de x e y a traves de sus punteros
    printf("*py = %d\n\n", *py);



    printf ("======================================\n\n");
    
    *px=7; //Accedemos y cambiamos el valor de x a traves de su puntero px 
    printf ("x = %d\n\n", x );
    printf ("*px = %d\n\n", *px);

    py = px ; //Ahora el puntero py apunta a px 

    printf ( "px = %p\n\n", px);
    printf ( "py = %p\n\n", py);

    printf ("======================================\n\n");

    printf ("El valor de x es : %d\n\n", x);
    printf ("El valor de y es : %d\n\n", y);

    swap (x,y);

    return 0; 

}
void swap(int &a, int &b){
    int c;
    cout << "Recibido a=" << a << " b=" << b << "\n"<<endl;
    c=a; a=b; b=c;
    cout << " Cambiado a=" << a << " b=" << b << "\n\n"<<endl;
}