/*Desafío 4: La Calculadora Dinámica (Punteros a Funciones)

Define dos funciones simples: sumar(int a, int b) y multiplicar(int a, int b).

    Crea un puntero a función que sea compatible con ambas.

    Pregunta al usuario: "¿Quieres (1) Sumar o (2) Multiplicar?".

    Dependiendo de la respuesta, asigna la función correspondiente al puntero.

    Ejecuta la operación usando solo el puntero y muestra el resultado.*/

#include <iostream>
using namespace std;

int sumar (int, int );
int multiplicar (int,int );

int main (int argc ,char * argv []){
    int n,a,b;
    int (*pfx)(int,int);
    cout <<"¿Quieres (1) Sumar o (2) Multiplicar?\n"<< endl;
    cin >> n ;
    cout<< "Ingrese el primer numero\n"<< endl;
    cin>> a ;
    cout<< "Ingrese el segundo numero\n"<< endl;
    cin >> b ;
    if (n==1){
        pfx = &sumar;
        int r = pfx(a,b);
        cout<<r<<endl;
    }

    else if (n==2){
        pfx= &multiplicar;
        int r = pfx(a,b);
        cout<<"\nresultado: "<<r<<endl;
    }

    else {cout<< "Numero incorrecto\n"<< endl;}

}
int sumar (int a , int b){return a+b;}
int multiplicar (int a , int b){return a*b;}
