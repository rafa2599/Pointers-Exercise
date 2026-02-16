#include <queue>
#include <string>

struct Documento {
    int id;
    int paginas;
};

class ColaDeImpresion : public std::queue<Documento> {
private:
    std::string nombre;

public:
    ColaDeImpresion(std::string n = "") : std::queue<Documento>() {
        nombre = n;
    }

    int sumaTotalPaginasRecursivo() {
        std::queue<Documento> aux;
        int total = recurisvoAuxiliar(aux);
        
        
        while (!aux.empty()) {
            this->push(aux.front());
            aux.pop();
        }
        return total;
    }

    bool cancelarDocumentoIterativo(int idBuscado) {
        std::queue<Documento> aux;
        bool encontrado = false;

        
        while (!this->empty()) {
            // Chequeamos si es el que buscamos y no lo hemos encontrado aún
            if (this->front().id == idBuscado && !encontrado) {
                encontrado = true;
                this->pop(); // Lo eliminamos pero NO lo guardamos en aux
            } else {
                aux.push(this->front()); // Guardamos los demás
                this->pop();
            }
        }

        // 3. Restauramos todos los elementos en el orden correcto
        while (!aux.empty()) {
            this->push(aux.front());
            aux.pop();
        }
        return encontrado;
    }

private:
    int recurisvoAuxiliar(std::queue<Documento> &aux) {
        if (this->empty()) {
            return 0; 
        }

        int suma = this->front().paginas;
        aux.push(this->front());
        this->pop(); 

        return suma + recurisvoAuxiliar(aux);
    }
};