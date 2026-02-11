#ifndef PERSONA_H
#define PERSONA_H

#include <string>
#include <iostream>

using namespace std;

class Persona {
protected: // Cambiado a protected para que Estudiante pueda acceder si es necesario
    int edad;
    string nombre;

public:
    Persona();
    Persona(int edadParametro, const string& nombreParametro);
    Persona(const Persona &otra);
    Persona(Persona &&otra); // Constructor de movimiento
    virtual ~Persona();      // Virtual es importante para herencia
    
    // Virtual para que se pueda sobreescribir en hijos
    virtual void mostrarInfo(); 
    
    string getNombre();
    int getEdad();
};

#endif