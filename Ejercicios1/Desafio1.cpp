/*Gestión de Inventario (Operador -> y Estructuras)

Crea una estructura llamada Producto que tenga: nombre (string), precio (float) y stock (int).

    Crea una función void aplicarDescuento(Producto *p, float porcentaje) que use el operador -> para reducir el precio del producto.

    En el main, reserva memoria dinámica para un producto usando new.

    Asigna valores, aplica un descuento del 10% y muestra el resultado.

    ¡No olvides el delete!*/

#include <iostream> // Para cout
#include <string>
#include <cstdio>
using namespace std;
typedef struct {
        string nombre;
        float precio;
        int stock;
}Producto;

void aplicarDescuento (Producto *, float);
void imprimir(Producto *);

int main (int argc , char * argv []){
    Producto *pr = new Producto;
    pr->nombre="CARNE";
    pr->precio=22.500;
    pr->stock= 700;
    imprimir(pr);
    aplicarDescuento(pr,15);
    printf ("\n\n");
    imprimir(pr);
    delete(pr);
    return 0;

}
void aplicarDescuento (Producto *p , float porcentaje){
    p->precio =(porcentaje > 0) ? p->precio-(p->precio*porcentaje/100) : p->precio;
}
void imprimir (Producto *p){
    cout << p->nombre<<endl;
    printf("%.3f\n",p->precio);
    printf("%d\n",p->stock);
}