/*Ejercicio 2: Pilas y Lógica de Navegación (Dificultad Media)

Inspirado en el sistema de Undo/Redo de la Pregunta 2.  

Enunciado:
Simula el historial de navegación de un navegador web utilizando dos pilas de strings: historialAtras y historialAdelante.

    Implementa una función void navegarAtras(int pasos, stack<string>& atras, stack<string>& adelante) que mueva n páginas 
    desde la pila de atrás hacia la de adelante.  

    Implementa una función void mostrarEstado(stack<string> atras) que imprima la página actual (el top de la pila atras) 
    y todas las anteriores, sin destruir la pila original (usando una estructura auxiliar).*/

#include <stack> 
#include <string>
#include <iostream>
using namespace std;
void navegarAtras(int, stack<string>&, stack<string>&);
void mostrarEstado(stack<string>);
int main (int argc , char* argv[]){

    
}

void navegarAtras(int pasos, stack<string>& atras, stack<string>& adelante){
   
        for (int i = 0 ; i<pasos && !atras.empty() ; i++){
        adelante.push(atras.top());
        atras.pop();
    
    cout<<"Error"<<endl;

    }
}
void mostrarEstado(stack<string> &atras){
    stack<string> aux;

    while (!atras.empty()){

        cout<<atras.top()<<"\n"<<endl;
        aux.push(atras.top());
        atras.pop();

    }
    while (!aux.empty()){

        atras.push(aux.top());
        aux.pop();
    }
}