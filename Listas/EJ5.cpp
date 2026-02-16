/*Herencia y Filtrado de Colas (Prioridad)

Contexto: Un router de red recibe paquetes de datos. Cada paquete tiene un tamaño y un nivel de 
prioridad (1 a 5, donde 5 es crítico).
C++

struct Paquete {
    int id;
    int tamano;
    int prioridad;
};

Consigna: Crea la clase ColaDeTrafico que herede de std::queue<Paquete>.

    Implementa un método recursivo int contarCriticosRecursivo(int nivel) que devuelva cuántos paquetes 
    tienen una prioridad mayor o igual al nivel pasado por parámetro. 
    Restricción: La cola debe quedar idéntica a como estaba al inicio.

    Implementa un método iterativo void depurarPaquetesGrandes(int limite) que elimine de la cola todos 
    los paquetes cuyo tamano supere el limite. El resto de los paquetes deben mantener 
    su orden relativo original.*/

#include <stack>
#include <queue>
#include <iostream>
#include <string>

using namespace std;

typedef struct {
    int id; 
    int tamano;
    int prioridad;
}Paquete;

class ColaDeTrafico : public queue<Paquete>{

    public:
        int contarCriticosRecursivo(int nivel){
            queue<Paquete> aux; 

            int total = recursivoAuxiliar(aux,nivel);

            while (!aux.empty()){
                this->push(aux.front());
                aux.pop();
            }
        }
        void depurarPaquetesGrandes(int limite){
            queue<Paquete> aux; 
            while (!this->empty()){

                if (this->front().tamano> limite){ this->pop(); } 
                else {
                    aux.push(this->front());
                    this->pop();
                }
            
            while (!aux.empty()){
                this->push(aux.front());
                aux.pop();
            }

            }
        }

    private:
        int recursivoAuxiliar(queue<Paquete> &aux, int nivel){

            if (this->empty()){
                return 0;

            }
            int suma = (this->front().prioridad>=nivel)? 1:0;
            aux.push(this->front());
            this->pop();

            return suma + recursivoAuxiliar(aux,nivel);
        }

};