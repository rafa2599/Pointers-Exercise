/*Desafío 6: El Guerrero Dinámico (Estructuras + Punteros a Funciones)

Este ejercicio mezcla los dos temas que más se usan en la vida real. Imagina un videojuego:

    Crea una estructura Personaje con: nombre (string) y un puntero a función llamado accion.

    El puntero accion debe apuntar a funciones que no devuelvan nada (void) y no reciban parámetros.

    Define dos funciones: gritar() (imprime "¡Aaaah!") y curar() (imprime "Recuperando vida...").

    En el main:

        Crea un personaje.

        Si el usuario elige "Ataque", asigna gritar a su puntero accion.

        Si elige "Defensa", asigna curar.

    Ejecuta la acción usando miPersonaje.accion();.*/
#include <iostream>
#include <string>
using namespace std;

    typedef struct {
        string nombre;
        void (*pr)(void);
    } Personaje;

void gritar (void);
void curar (void);

int main (int argc, char * argv[]){
    Personaje *P = new Personaje;

    int c; string n;
    cout << "Eliga un nombre para el personaje\n"<<endl;
    cin>>n;
    P->nombre=n;
    cout << "Eliga un ataque\n(1)para Atacar o (2) para Defensa"<<endl;
    cin >> c;

    if (c==1){
        P->pr=&gritar;

    }else if (c==2){
        P->pr=&curar;
    }else {
        cout << "\nError\n"<< endl;
        return 1;
    }
    P->pr();
    delete P;
    return 0;
}

void gritar (){cout<< "¡Aaaah!"<<endl;}
void curar (){cout <<"Recuperando vida..."<<endl;}