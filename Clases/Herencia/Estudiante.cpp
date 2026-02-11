#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <cstdio>
#include <iostream>
#include <cstdlib>
#include "Persona.h"


using namespace std; 



class Estudiante: public  Persona {
    public:
        Estudiante(const string& nombre, int edad , int numeroEstudiante) : Persona (edad,nombre ) {
            numeroEstudiante_ = numeroEstudiante;
        }
        Estudiante (string &nombre, int edad, int numeroEstudiante){
            Persona (edad,nombre);
            numeroEstudiante_ = numeroEstudiante;

        }
        void mostrarInfo (){
            printf ("Numero de estudiante %d", numeroEstudiante_);
            printf ("Nombre %s\n",getNombre());
            printf("Edad %d\n", getEdad());
        }
    private: 
        int numeroEstudiante_;
};