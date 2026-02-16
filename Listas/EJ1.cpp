#include <stack>
#include <string>
#include <queue>
typedef struct 
{
    int codigo;
    int urgencia; 
}Tarea;

class ColaDeTareasUrgentes : public std::stack<Tarea>
{   
    private: 
        std:: string nombre ;
    public:
        ColaDeTareasUrgentes (std:: string n ) : std::stack<Tarea>(){
            nombre = n ;

        }
        void agregarTarea (Tarea t){
            
            this->push(t);
        }
        void eliminarTarea (){
            this->pop();
        }
        void cambiarTarea (Tarea quito,Tarea pongo){
            std :: queue<Tarea> aux;

            while (!this-> empty()){

                if (this->top().codigo == quito.codigo){

                    this->pop();
                    this->push(pongo);
                    break;

                }
                aux.push(this->top());
                this->pop();

            }
            while (!aux.empty()){

                this->push(aux.front());
                aux.pop();
            }
        }
        void eliminarTarea(Tarea t){
            std:: queue<Tarea> aux; 

            while (!this->empty()){

                if (this->top().codigo == t.codigo){
                    this->pop();
                    break;
                }
                aux.push(this->top());
                this->pop();
            }
            while (!aux.empty()){
                this->push(aux.front());
                aux.pop();
            }

            
        }
        int contarUrgencias (int u){
            std::queue<Tarea> aux;
            int contador=0;
            while (!this->empty()){
               if (this->top().urgencia>= u){
                    contador++ ;
                } 
                aux.push(this->top());
                this->pop();
            }
            while (!aux.empty()){
                this->push(aux.front());
                aux.pop();
            }
            return contador;

        }
        int contarUrgenciasRecursivo(int u){
            std:: queue<Tarea> aux;
            int total = ayudaRecursiva (aux,u);
            while (! aux.empty()){
                this->push(aux.front());
                aux.pop();
            }
            return total;
        }
        int ayudaRecursiva( std::queue <Tarea> aux , int u){

            if (this->empty()){return 0;}

            Tarea t = this->top();
            aux.push(t);
            this->pop();

            int suma = (t.urgencia>= u)? 1 : 0 ;

            return suma + ayudaRecursiva(aux,u);


            }
        

        
    };        
