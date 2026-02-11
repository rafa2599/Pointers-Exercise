#include "Persona.h"
#include "Estudiante.h"

int main (int argc , char * argv []){
    Persona persona (25, "JUAN");
    persona.mostrarInfo();
    Estudiante e ("Maria",23,1565);
    e.mostrarInfo();
    return 0;
}