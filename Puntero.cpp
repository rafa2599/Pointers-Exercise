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

    printf("\n");
   
    printf ("================ SEGUNDO CASO ==================================\n");

    printf("\n");
   
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
    printf ("El valor de p es: %d \n", *p);

    printf("Aqui estamos cambiando el valor de la variable pero no su dirreccion\n");
    printf("Para ello");
    printf(" p=&b;\n");
    p=&b;
    printf("La dirreccion de p es: %d \n", p);
    
    printf("\n");
   
   printf ("================ TERCER CASO ==================================\n");

   printf("Puntero de Punteros\n");
   printf("Definimos un entero y\n int y = 5;\n");
   int y = 5;
   printf("Definimos un puntero pr y le asignamos la direccion de y\n int *pr = &y; \n");
   printf("La direccion de y es %d \n", p);
   int *pr= &y;
   printf("cambiamos el valor de la variable y \n *pr = 6; \n");
   *pr=6;
   printf ("Ahora el valor de y es %d \n", y);
   
   printf("Declaramos un puntero de punteros q y le asignamos la direc de pr \n");
   printf ("int **q= &pr;\n");
   int **q= &pr;
   printf("La dirreccion del puntero pr es %d \n", q);
   
    return 0;

}