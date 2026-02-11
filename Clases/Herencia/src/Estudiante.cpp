#include "Estudiante.h"
#include <iostream>
#include <utility>
using namespace std;

// Implementación del constructor
// Nota como llamamos a Persona(edad, nombre) DESPUÉS de los dos puntos
Estudiante::Estudiante(const string& nombre, int edad, int numeroEstudiante) 
    : Persona(edad, nombre) 
{
    this->numeroEstudiante_ = numeroEstudiante;
    cout << "Constructor Estudiante" << endl;
}

void Estudiante::mostrarInfo() {
    Persona::mostrarInfo(); 
    
    cout << "\nNumero de estudiante: " << numeroEstudiante_ << endl;

}