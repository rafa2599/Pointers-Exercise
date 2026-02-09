#include <string>
#include <cstdio>
#include <iostream>
#include <cstdlib>
using namespace std;

int *copiax2(int *x, int N){ //La parte int * indica que la funcion devuelve un puntero 
    int co[4];
    //static int co[4];
    //int *co=(int *)malloc(sizeof(int)*4); 
    int *co= new int[4];
    for (int i=0;i<4;i++) {
        co[i]=*(x+i)*2;
    }
    return co; //Devulvo la direccion de memoria 
}

int main() {
    int v[4] = {5, 6, 2, 7};
    int *px;
    
    px = copiax2(v, 4);
    
    for (int i=0; i<4; i++) {
        printf ("%d\n", *(px+i));
    }
    return 0;
}