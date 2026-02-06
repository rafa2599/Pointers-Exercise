#include <cstdio>

int main (){
    int x = 110; // integer 
    int * ptr = nullptr; // pointer to integer
    printf ("La direccion del puntero es: %p\n", (void*)ptr);
    ptr = &x;
    // Para direcciones de memoria (ptr, &x, &ptr) usa %p
    printf("ptr --> La direccion del puntero es: %p\n", ptr);
    printf("&a  --> La direccion de x es: %p\n", &x); 
    printf("&ptr --> La direccion donde se almacena el puntero es: %p\n", &ptr);

    // Para el VALOR al que apunta (*ptr), asumiendo que es un entero (int), usa %d
    printf("*ptr --> El valor de la direccion que almacena el puntero es: %d\n", *ptr);
    return 0;

}