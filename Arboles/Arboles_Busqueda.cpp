/*
Realizar los siguientes metodos de la clase arbol
void MostrarHojas() //muestra todas las hojas del arbol
bool Esta(x) //retorna true si x esta en el arbol
T Menor() // retorna el menor valor del arbol
T Mayor() // retorna el mayor valor del arbol
void Borrar(x) // elimina el nodo que contiene el dato x

*/


#include <cstdlib>
#include <iostream>
#include <sstream>

using namespace std;

template <class T> class Nodo{

    public:
        T dato;
        Nodo *izq, *der;
};

template <class T> class Arbol{
    private:
        Nodo<T>* raiz;
        T menorAuxiliar (Nodo<T>* aux );
        void hojasAuxiliar (Nodo<T>* aux);
        int alturaAuxiliar(Nodo<T>* aux);
        void eliminarAuxiliar (Nodo<T>* &aux, T x);

    
    public:
        arbol() {raiz = NULL;}
        ~arbol();
        void ArbolBusq (T x , Nodo<T>* &nuevo);
        void rid (Nodo<T>* aux);
        void ird (Nodo<T>* aux);
        void idr (Nodo<T>* aux);
        void VerArbol() { show(raiz, 0); }
        //******************************** */
        bool encontrar (Nodo<T>* aux ,T x);
        T menorIterativo();
        T menorRecursivo(); 
        void mostrarHojas ();
        int contarNodos();
        int contarAuxiliar (Nodo<T>* aux);
        int calcularAltura();
        void eliminarNodo(T x);

};


template <class T> 
void Arbol<T> :: ArbolBusq (T x ,Nodo<T>* &nuevo){

    if ( nuevo == NULL){
        nuevo = new nodo<T>;
    }
    if (x>nuevo->dato){ ArbolBusq(x,nuevo->der);}
    if (x>nuevo->dato){ArbolBusq(x,nuevo->izq);}
}


template <class T> 
void Arbol<T> :: idr (Nodo <T> * aux){

    if (aux != NULL){
        idr(aux->izq);
        cout<< "\n"<< aux->info << endl;
        idr (aux->der);

    }
}

template <class T> 
void Arbol<T>::ird(Nodo<T>* aux)
{
    if (aux != NULL) {
        ird(aux->izq);
        cout << "\n" << aux->info;
        ird(aux->der);
    }
}
template <class T> 
void Arbol<T>::rid(Nodo<T>* aux)
{
    if (aux != NULL) {
        cout << "\n" << aux->info;
        rid(aux->izq);
        rid(aux->der);
    }
}
template <class T> 
void Arbol<T>::idr(Nodo<T>* aux)
{
    if (aux != NULL) {
        idr(aux->izq);
        idr(aux->der);
        cout << "\n" << aux->info;
    }
}

template <class T> 
bool Arbol<T> :: encontrar (Nodo <T>* aux , T x ){
    if (aux==NULL){return false;} 

    else if (aux->dato == x){return true;}

    else if (x<aux->dato){encontrar(aux->izq,x);}

    else {encontrar (aux->der,x);}
}

template <class T> 
T Arbol<T> ::menorIterativo (){

    // 1. Verificación de seguridad: ¿Hay algo en el árbol?
    if (raiz == NULL) {
        // Aquí podrías lanzar una excepción o devolver un valor por defecto
        throw runtime_error("El árbol está vacío");
    }

    Nodo<T>* aux = raiz;

    // 2. Navegación: "Deslizarse" hacia la izquierda
    while (aux->izq != NULL) {
        aux = aux->izq;
    }

    // 3. Retornar el dato del último nodo encontrado
    return aux->dato;
}

template <class T>  
T Arbol<T> :: menorRecursivo(){
    

    if (raiz == NULL){ throw runtime_error("El árbol está vacío");}
    
    else { return menorAuxiliar(raiz);}


}

template <class T>  
T Arbol<T> :: menorAuxiliar(Nodo<T>* aux){

    if (aux->izq == NULL){return aux->dato;}
    
    else if (aux->izq!= NULL){ menorAuxiliar(aux->izq);}
    
}

template <class T> 
void Arbol<T> :: mostrarHojas (){
    if (raiz == NULL){ 
        cout << "El árbol está vacío" << endl; 
        return;
    }
    hojasAuxiliar(raiz);
} 

template <class T> 
void Arbol<T> :: hojasAuxiliar (Nodo<T>* aux){
    // 1. Caso base fundamental: Si el nodo no existe, salimos
    if (aux == NULL) return;

    // 2. ¿Es una hoja? (Tu lógica perfecta)
    if (aux->izq == NULL && aux->der == NULL){
        cout << aux->dato << "  " << endl;
    }

    // 3. Navegación: Visitamos ambos lados para seguir buscando hojas
    // No usamos "+", solo llamamos a las funciones una por una
    hojasAuxiliar(aux->izq); 
    hojasAuxiliar(aux->der); 
}
 template <class T> 
 int Arbol<T> :: contarNodos (){
    

    if (raiz == NULL){return 0;}

    int total = contarAuxiliar(raiz);
    
    return total;
    
 }
 template<class T> 
 int Arbol<T> :: contarAuxiliar (Nodo<T>* aux){
    
    if (aux==NULL){return 0;}

    int izq =   contarAuxiliar(aux->izq);
    int der =  contarAuxiliar(aux->der);
    return 1 + izq + der;

 }
template <class T> 
int Arbol<T> :: calcularAltura() {
    return alturaAuxiliar(raiz);
}

template <class T> 
int Arbol<T> :: alturaAuxiliar(Nodo<T>* aux) {
    // 1. Escudo de Protección: Si llegamos al vacío, la altura es 0
    if (aux == NULL) {
        return 0;
    }

    // 2. Recursión: Preguntamos la altura de ambos lados
    int altIzquierda = alturaAuxiliar(aux->izq);
    int altDerecha = alturaAuxiliar(aux->der);

    // 3. Decisión: ¿Cuál camino fue más largo? 
    // Sumamos 1 (por el nodo actual) al mayor de los dos
    if (altIzquierda > altDerecha) {
        return 1 + altIzquierda;
    } else {
        return 1 + altDerecha;
    }
}

template <class T> 
void Arbol<T> :: eliminarNodo(T x){
    Nodo<T> aux = raiz; 

    if (raiz == NULL){
    }
    eliminarAuxiliar(raiz);
}

template <class T> 
void Arbol<T>::eliminarAuxiliar(Nodo<T>* &aux, T x) {
    
    // 1. ESCUDO: Si llegamos al final y no estaba (o el árbol está vacío)
    if (aux == NULL) {
        return; 
    }

    // 2. BÚSQUEDA: Navegamos hasta encontrar al culpable
    if (x < aux->dato) {
        eliminarAuxiliar(aux->izq, x); // Buscamos por la izquierda
    } 
    else if (x > aux->dato) {
        eliminarAuxiliar(aux->der, x); // Buscamos por la derecha
    } 
    
    // 3. EJECUCIÓN: ¡Lo encontramos! (aux->dato == x)
    else {
        
        // CASO A: No tiene hijo izquierdo (Cubre cuando es Hoja o solo tiene hijo derecho)
        if (aux->izq == NULL) {
            Nodo<T>* a_borrar = aux; // Guardamos al nodo actual para no perderlo
            aux = aux->der;          // Magia del &: La flecha del padre ahora apunta al hijo derecho
            delete a_borrar;         // Destruimos el nodo original
        }
        
        // CASO B: No tiene hijo derecho (Solo tiene hijo izquierdo)
        else if (aux->der == NULL) {
            Nodo<T>* a_borrar = aux; 
            aux = aux->izq;          // La flecha del padre ahora apunta al hijo izquierdo
            delete a_borrar;         
        }
        
        // CASO C: Tiene DOS hijos (El jefe final)
        else {
            // 1. Buscamos al reemplazo ideal: "El menor de los mayores"
            // (Nos vamos 1 paso a la derecha, y luego todo a la izquierda)
            Nodo<T>* reemplazo = aux->der;
            while (reemplazo->izq != NULL) {
                reemplazo = reemplazo->izq;
            }
            
            // 2. Clonamos el dato del reemplazo en el nodo actual
            aux->dato = reemplazo->dato;
            
            // 3. Mandamos a borrar al nodo de reemplazo original (que ahora está duplicado)
            eliminarAuxiliar(aux->der, reemplazo->dato);
        }
    }
}
   
    


