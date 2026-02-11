#ifndef PERSONA_H
#define PERSONA_H

#include <string>

class Persona {
private:
    int edad;
    std::string nombre;

public:
    Persona();
    Persona(int edadParametro, const std::string& nombreParametro);
    Persona(const Persona &otra);
    Persona(Persona &&otra);
    ~Persona();
    void mostrarInfo ();
    string getNombre ();
    int getEdad ();

};

#endif // PERSONA_Hs