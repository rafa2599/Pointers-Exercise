//Clase_2_EJ2.cpp
#include <string>
#include <cstdio>
#include <iostream>
#include <cstdlib>
using namespace std;

void copiax2 (int *x, int N , int *w){

    for (int i=0; i<N;i++){
        w[i]= x[i]*2;
        printf ("W[%d] = %d\n",i,*(w+i));
    }
    
}

int main (int argc , char * argsv []){
    int v[4] = {5, 6, 2, 7};
    int *px;
    int co[4];
    
    copiax2(v, 4,co);
}