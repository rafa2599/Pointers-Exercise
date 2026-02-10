/*2. Intercambio con punteros y referencias

    Implementa una función swap que reciba dos punteros a enteros y los intercambie.

    Implementa otra versión que use referencias.

    Llama a ambas funciones desde main y observa las diferencias.

    Pregunta: ¿Qué versión modifica realmente las variables originales?*/

#include <string>
#include <cstdio>
#include <iostream>
#include <cstdlib>
void swapp (int *px, int *py){
    int c;
    c=*px; 
    *px = *py;
    *py=c;
}
void swapr(int &x,int &y){ //Aqui se modifican las variables originales 
    int c = x;
    x = y;
    y = c ;
}
int main (int argc,char *argv[]){
    int x = 55;
    int y = 22;
    int *px,*py;
    px = &x , py=&y;

    printf ("La direccion de px es %p\n",px);
    printf ("La direccion de py es %p\n",py);

    printf ("\nswapp(px,py);\n");
    
    swapp(px,py);
    
    printf ("La direccion de px es %p\n",px);
    printf ("La direccion de py es %p\n",py);

    printf ("=============================\n");
    printf ("El valor de x es %d\n", x);
    printf ("El valor de y es %d\n", y);
    
    printf ("\nswapr(x,y);\n");
    
    swapr(x,y);
    
    printf ("El valor de x es %d\n", x);
    printf ("El valor de y es %d\n", y);

    return 0; 
}