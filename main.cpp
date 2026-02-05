#include <cstdio>

int main (){
    int x = 110;
    int * prt = nullptr;
    printf ("La direccion del puntero es: %p", (void*)prt);
    prt = &x;
    printf ("La dirrecion del puntero es: %p", *prt); 
}