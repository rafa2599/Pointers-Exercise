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
   
   printf ("==================== TERCER CASO ==================================\n");

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
   
   printf ("=================== CUARTO CASO ==================================\n\n");

   printf ("Asignacion mediante memoria dinamica\n\n");
   
   printf ("double * p1 = new double;\n");
   double * p1 = new double;
   double r = 88.433;
   p1 = &r; // tambien se puede hacer asi *p1 = r;
   printf("*p1 = 88.33;\n");
   printf ("el valor de p1 es %d\n", p1);
   
   
   printf ("=================== QUINTO CASO ==================================\n\n");
    double x1 = 5.5; // Le asignamos a x1 el valor de 5.5
    double y1 = 10.2; // le asignamos ay1  el valor de 10.2
    double z1;// instanciamos z1
    printf("double x1 = 5.5;\n  double y1 = 10.2;\n double z1;\n");
    
    double *px1 = &x1; // al puntero px1 le asignamos la direccion de x1
    printf("double *px1 = &x1;\n");
    printf("al puntero px1 le asignamos la direccion de x1\n\n");
    double& ry1 = y1; // A la y1 le damos una "referencia" ry1
    printf("double& ry1 = y1;\n");
    printf("A la y1 le damos una referencia ry1\n\n");
    *px1 = 3.14; // la variable x1 ahora toma el valor  3.14
    printf("*px1 = 3.14;\n");
    printf("la variable x1 ahora toma el valor  3.14\n\n"); 
    z1 = ry1; // ahora z1 toma el valor de ry1 (que es y1 = 10.2)
    printf("z1 = ry1;\n");
    printf("ahora z1 toma el valor de ry1 (que es y1 = 10.2)\n\n");
    double &r1 = *px1; // a px1 (x= 3.14) le damos una referencia r1
    printf("double &r1 = *px1;");
    printf("a px1 (x= 3.14) le damos una referencia r1\n\n");
    r1 = 99.44; // como r1 es una referencia ahora *px1 = x1 = 99.44
    printf("r1 = 99.44;\n");
    printf("como r1 es una referencia ahora *px1 = x1 = 99.44\n\n");
    px1 = &z1; // el puntero px1 ahora apunta a la variable z1
    printf("px1 = &z1;\n");
    printf("el puntero px1 ahora apunta a la variable z1\n\n");
    ry1 = *px1; // ahora ry1 pasa a ser una referencia de *px1 = z1 = 10.2
    printf("ry1 = *px1;\n");
    printf("ahora ry1 pasa a ser una referencia de *px1 = z1 = 10.2\n\n");
    return 0;

}