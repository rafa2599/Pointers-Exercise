/*Realizar el metodo de ordenamiento de la burbuja mediante punteros
 y de la forma original 
*/
#include <cstdlib> 
#include <iostream>
#include <cstdio>
#include <iterator>

void burbujarOrigial (int v[],int N, int o){
   
    if (o==1){
        printf("\nOrdenamiento de menor a mayor\n");
        
        for (int i = 0 ; i<N-1; i++){ 
            for (int j =i+1 ; j<N ;j++){
                if (v[i]>v[j]){int c =v[i]; v[i]=v[j]; v[j]=c; }
            }
        }

    }else if ( o==2){
        printf ("\nOrdenamiento de mayor a menor\n");
        for (int i = 0 ; i<N-1; i++){ 
            for (int j =i+1 ; j<N ;j++){
                if (v[i]<v[j]){int c =v[i]; v[i]=v[j]; v[j]=c; }
            }
        }
    }   
}

void burbujaPunteros (int v[],int N,int o){
    
    int *pi,*pj;
    int c;
    if (o==1){
        printf("\nOrdenamiento de menor a mayor\n");
        
        for (int i = 0 ; i< N-1; i++){
            for(int j = i+1 ; j<N ;j++){
                pi= &v[i];pj=&v[j];
                if (*pi>*pj){c=*pi; *pi = *pj ; *pj = c;}
            }
        }
    } else if (o == 2){
        printf ("\nOrdenamiento de mayor a menor\n");
        for (int i = 0 ; i< N-1; i++){
            for(int j = i+1 ; j<N ;j++){
                pi= &v[i];pj=&v[j];
                if (*pi<*pj){c=*pi; *pi = *pj ; *pj = c;}
            }
        }
    }    
}
void imprimir (int v[], int N){
    
    for (int i = 0 ; i<N; i++){
        printf ("%d\n",v[i]);
    }
}

int main (int argc , char * argv[]){

    int w[5]= {32,55,-3,100,8};
    
    imprimir(w,5);
    burbujarOrigial(w,5,1);
    imprimir(w,5);
    burbujarOrigial(w,5,2);
    imprimir(w,5);
    burbujaPunteros(w,5,1);
    imprimir(w,5);
    burbujaPunteros(w,5,2);
    imprimir(w,5);
}