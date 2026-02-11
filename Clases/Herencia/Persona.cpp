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



class Persona {
    private: 
        int edad;
        string nombre;


    public:
        Persona(){
            edad = 0;
            nombre = "Sin nombre";
            cout << "\nConstructor por defecto "<< endl;
        }

        Persona (int edadParametro, const string& nombreParametro){
            edad = edadParametro;
            nombre = nombreParametro;
            cout << "\nConstructor con parametros"<< endl;
        }

        Persona (const Persona &otra ){
            edad = otra.edad;
            nombre = otra.nombre;
            cout << "\nConstructor de copia"<< endl;

        }
        Persona (Persona &&otra){
            edad = otra.edad;
            nombre = move(otra.nombre);
            cout << "\nConstructor de movimiento"<< endl;
        }


        ~Persona (){
            cout << "\nDestructor llamado para "<<nombre<< endl;
        }
        
        void mostrarInfo (){
            printf ("Nombre %s\n", nombre );
            printf("Edad %d\n", edad);
        }
        string getNombre (){
            return nombre;
        }
        int getEdad (){
            return edad; 
        }

};