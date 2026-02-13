/*Desafío 5: El Validador de Números (Punteros a Funciones - Nivel Medio)

En lugar de una calculadora, vamos a hacer un sistema que "analiza" un número.

    Crea dos funciones:

        bool esPar(int n) (devuelve true si es par).

        bool esPositivo(int n) (devuelve true si es mayor a 0).

    En el main, declara un puntero a función que reciba un int y devuelva un bool.

    Pide al usuario un número y qué validación quiere hacer.

    El reto: Usa el puntero para evaluar el número e imprime "CUMPLE" o "NO CUMPLE" usando un solo if al final.*/
    
#include <iostream>
using namespace std;

    bool esPar(int);
    bool esPositivo(int);

    int main (int argc, char * argv[]){
        int n,c;
        cout<< "Ingrese (1) para validar si es par o (2) si es positivo)"<<endl;
        cin>> c;
        cout<< "Ingrese un numero entero\n"<<endl;
        cin >>n;
        bool (*pfx)(int)=nullptr;
        if(c==1) {
            pfx = &esPar;
            bool par = pfx(n);
            (par)? cout<<"CUMPLE\n"<<endl: cout<<"NO CUMPLE\n"<<endl;
        } else if (c==2) {

            pfx = &esPositivo;
            bool posi = pfx(n);

            (posi)? cout<<"CUMPLE\n"<<endl: cout<<"NO CUMPLE\n"<<endl;
        }else {
            cout<<"Error"<<endl;
            return 1;
        }
        
    }

    bool esPar (int a){ 
        bool r ;
        return r = (a%2 == 0)? true:false;
    }
    bool esPositivo (int a){
        bool r ;
        return r= (a>=0)? true: false;
    }