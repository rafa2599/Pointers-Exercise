//Clase_1_EJ1.cpp
#include <string>
#include <cstdio>
#include <iostream>
#include <cstdlib>
using namespace std;

void swap(int,int);
void swap(int *a, int *b);
void swap(int &a, int &b);

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

    py++ ; //Ahora el puntero py apunta a la siguiente direccion en memoria

    printf( "py = %p\n\n", py);

    printf ("======================================\n\n");

    printf ("El valor de x es : %d\n\n", x);
    printf ("El valor de y es : %d\n\n", y);

    swap (px,py);
    

    printf ("===================================================================\n\n");

    printf ("Definimos el vector v[5]= {23,1,-8,14,7}");

    int v[5]={23,1,-8,14,7};
    
    printf ("\n\nHacer px = &v[0]; y hacer py = v ; es lo mismo\n\n");

    px = &v[0] ; 

    py = v ; //

    printf ("px = %p \n", px);
    printf ("py = %p \n", py);
    printf ("El valor de px = %d \n", *px);
    printf ("El valor de py = %d \n", *py);

    printf("\n Recorremos el array imprimiendo sus valores y sus respectivas direcciones en memoria\n");

    for (int i = 0 ; i < 5; i ++){
        printf ("v[%d] = %d\n",i , v[i]);
        printf ("v[%d] se encuentra en --> %p\n\n",i, (px++));
    }
    return 0; 

}
void swap(int a, int b) //Aqiu cambiamos el valor de las variables localmente
{ int c;
  cout<<"\n a="<<a<<"  b="<<b;
  c=a; a=b; b=c;
  cout<<"\n a="<<a<<"  b="<<b;   
     
}
void swap(int *a, int *b) //Aqui si modificamos el valor de las variables 
{ int c; //Accediendo al valor de las variables a traves de punteros
  cout<<"\n a="<<*a<<"  b="<<*b;
  c=*a; *a=*b; *b=c;
  cout<<"\n a="<<*a<<"  b="<<*b;   
     
}

void swap(int &a, int &b) //Aqui modificamos los valores mediante el pasaje por referencia
{int c;
  cout<<"\n a="<<a<<"  b="<<b;
  c=a; a=b; b=c;
  cout<<"\n a="<<a<<"  b="<<b;   
}

  