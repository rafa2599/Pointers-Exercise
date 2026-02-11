#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>
using namespace std;
class Estudiante{
    private:
        int numeroEstudiante_;
    
    public:
        Estudiante(const string& nombre, int edad , int numeroEstudiante);
        Estudiante (string &nombre, int edad, int numeroEstudiante);
        void mostrarInfo ();
};
#endif 