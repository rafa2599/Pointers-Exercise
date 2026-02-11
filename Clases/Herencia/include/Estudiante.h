#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include "Persona.h" // Necesario para heredar
#include <string>
#include <iostream> 
#include <utility>
// FALTABA ": public Persona"
class Estudiante : public Persona {
private:
    int numeroEstudiante_;

public:
    // Constructores
    Estudiante(const string& nombre, int edad, int numeroEstudiante);
    
    // Sobreescribimos mostrarInfo
    void mostrarInfo() override;
};

#endif