#include <cstdio>

int main (){
    int x = 110;
    int * ptr = nullptr;
    printf ("La direccion del puntero es: %p", (void*)ptr);
    ptr = &x;
    printf ("ptr --> La dirrecion del puntero es: ",ptr); 
    printf ("&a --> La dirrecion del puntero es: ",&x);
    printf ( "&prt --> La direccion en que esta almacenado el puntero es: ", &ptr);
    printf ( "*ptr -->  El valor de la direccion que almacena el puntero es: ", *ptr);
    
}