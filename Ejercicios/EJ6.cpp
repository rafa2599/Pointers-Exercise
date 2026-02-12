#include <iomanip>
#include <cstdlib>
#include <iostream>

using namespace std;
void imprimir (int [],int );
bool ascendente (int ,int );
bool descendente (int, int );
void swap(int *,int *);
void burbuja (int [], int ,bool (*)(int,int));

int main (int argc , char* argv[]){

    const int N = 10;
    int orden; 
    int a[ N] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

    cout << "Introduzca 1 para ordenar de manera ascendente,\n" 
        << "Introduzca 2 para ordenar de manera descendente: ";
    cin >> orden;
    cout << "\nElementos de datos en el orden original\n";
   
    imprimir(a,N);

    if (orden == 1){
        burbuja( a, N, ascendente );
        cout << "\nElementos de datos en orden ascendente\n";
    }else {
      burbuja( a, N, descendente );
      cout << "\nElementos de datos en orden descendente\n";
   }
   imprimir(a,N);
}

void imprimir (int v[],int n){

    for (int i=0 ; i<n ; i++){
        cout << setw( 4 ) << v[i];
    }
}
bool ascendente (int a, int b){return  b<a;}
bool descendente (int a , int b){return b>a;}

void swap (int *p1 , int *p2){
    int c = *p1;
    *p1 = *p2;
    *p2 = c;
}
void burbuja (int v[], int N , bool (*comparar)(int a , int b)){
    for (int i = 0; i<N-1; i++){
        for (int j=i+1; j<N ;j++){
           
            if ( (*comparar)(v[i],v[j])){

                swap(&v[i],&v[j]);
           } 
        }
    }
}