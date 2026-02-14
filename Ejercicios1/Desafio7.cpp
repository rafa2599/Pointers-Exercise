/*Desafío 7: El Buscador de Máximos (Aritmética de Punteros)

Vamos a reforzar el Desafío 2 pero con una vuelta de tuerca.

    Crea una función int* buscarMaximo(int *inicio, int tamano).

    Debe recorrer el arreglo usando solo aritmética de punteros (ptr++ y *ptr).

    Debe devolver la dirección de memoria del número más grande del arreglo.

    En el main, usa ese puntero devuelto para imprimir tanto el valor máximo 
    
    como su posición (haciendo resta de punteros: punteroMaximo - inicio).*/

#include <iostream>
using namespace std;
int* buscarMaximo (int * , int );
int* buscarMaximoRecursivo (int *,int );

int main (int argc , char* argv []){
    int v[5]={33,5,66,77,12};
    int* max = buscarMaximo(&v[0],5);
    cout<<"El numero maximo del arreglo es "<< *max <<endl;
    cout<< "\nSu direccion es "<<max<<endl;
    cout<<"\nY esta en la posicion "<< max- &v[0] << endl;
    int* maxR = buscarMaximoRecursivo(v,5);
    cout << "\nMAXIMO RECURSIVO \n" << endl;
    cout << *maxR << endl;
    return 0; 
}

int* buscarMaximo(int *pr , int tamano){
    int*  max= pr+1;
    for (int i = 0 ; i<tamano-1 ; i++){
    
        (*pr>*max)? max = pr , pr++ : pr++;        
    }
    return max;
}

int* buscarMaximoRecursivo (int *pr,int n){
   
    
    if ( n == 0) { return pr; } 
    else { 
        int* max = buscarMaximoRecursivo(pr+1, n-1);
        if (*pr > *max) {return pr ;} 
        else { return max;} 
    }        
    
}