#include <cstdio>

int main (){
    printf ("================ PRIMER CASO ==================================\n");
    int x = 110; // integer 
    int * ptr = nullptr; // pointer to integer
    printf(" int x = 110;\n int * ptr = nullptr;\n");
    printf (" La direccion del puntero es: %p\n", (void*)ptr);
    printf(" ptr = &x;\n");
    ptr = &x;
    // Para direcciones de memoria (ptr, &x, &ptr) usa %p
    printf(" ptr --> La direccion del puntero es: %p\n", ptr);
    printf(" &a  --> La direccion de x es: %p\n", &x); 
    printf(" &ptr --> La direccion donde se almacena el puntero es: %p\n", &ptr);

    // Para el VALOR al que apunta (*ptr), asumiendo que es un entero (int), usa %d
    printf("*ptr --> El valor de la direccion que almacena el puntero es: %d\n", *ptr);

    printf ("================ SEGUNDO CASO ==================================\n");
    int a ; int *p; // pointer and integer
    a = 10;
    p = &a; // pointer to adress or a 
    printf(" int a ; int *p;\n a = 10;\n p = &a\n");
    printf (" La dirreccion de p es: %d \n", p);
    printf (" La valor de p es: %d \n", *p);
    int b = 20;
    *p = b; 
    printf ( " si hago int b = 20; \n *p = b;\n");
    printf ("La dirreccion de p es: %d \n", p);
    printf ("La valor de p es: %d \n", *p);

    printf("Aqui estamos cambiando el valor de la variable pero no su dirreccion\n");
    printf("Para ello");
    printf(" p=&b;\n");
    p=&b;
    printf("La dirreccion de p es: %d \n", p);
    return 0;
    

}