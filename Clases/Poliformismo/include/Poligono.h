#ifndef POLIGONO_H
#define POLIGONO_H

#include <iostream>
#include <stdio.h>


class Poligono {

    protected:
        int nLados;
        double perimetro;
    
    public:
    Poligono (int n);
    void setCantLados(int l);
    double setPerimetro ();
    void setArea();
    
};
#endif