#include "Persona.h"
#include <iostream> // <--- AGREGA ESTO
#include <utility>
// Constructor por defecto
Persona::Persona() {
    edad = 0;
    nombre = "Sin nombre";
    cout << "Constructor por defecto Persona" << endl;
}

// Constructor con parámetros
Persona::Persona(int edadParametro, const string& nombreParametro) {
    edad = edadParametro;
    nombre = nombreParametro;
    cout << "Constructor con parametros Persona" << endl;
}

// Constructor de copia
Persona::Persona(const Persona &otra) {
    edad = otra.edad;
    nombre = otra.nombre;
    cout << "Constructor de copia Persona" << endl;
}

// Constructor de movimiento
Persona::Persona(Persona &&otra) {
    edad = otra.edad;
    nombre = move(otra.nombre); // Movemos el recurso
    otra.edad = 0;
    cout << "Constructor de movimiento Persona" << endl;
}

// Destructor
Persona::~Persona() {
    cout << "Destructor llamado para " << nombre << endl;
}

void Persona::mostrarInfo() {
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
}

string Persona::getNombre() {
    return nombre;
}

int Persona::getEdad() {
    return edad;
}