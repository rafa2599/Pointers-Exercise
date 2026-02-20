#include <iostream>

using namespace std;

template <class T> class Nodo {

    public : 
        T dato;
        Nodo* izq , *der;
        Nodo (){izq = der = nullptr;}
        Nodo (T x){dato = x ; izq = der = nullptr; }
};


template <class T> class Arbol {

    private: 
        Nodo<T>* raiz;
        bool encontrarAuxiliar(Nodo<T>* aux , T x);
        void hojasAuxiliar(Nodo<T>* aux);
        int contarAuxiliar(Nodo<T>* aux);
        int  balanceadoAux (Nodo<T>* aux);
        int contarHojasAux (Nodo<T>* aux);
        
    public:
        Arbol (){raiz=NULL;}
        ~Arbol();
        bool encontrarDato (T x);
        void mayor();
        T menor ();
        void mostrarHojas ();
        int contarNodos();
        bool esBalanceado();
        int contarHojas();
};

template <class T>
bool Arbol<T>::encontrarDato(T x){

    if (raiz== NULL){return false;}

    //Buscamos en los subarboles izq y der 

    if (x>raiz->dato ){return encontrarAuxiliar(raiz->der,x);}
    else if (x< raiz->dato ){return encontrarAuxiliar(raiz->izq,x);}

}

template <class T> 
bool Arbol<T> :: encontrarAuxiliar(Nodo<T>* aux ,T x){

    if (aux->dato==x){return true;}

    if (aux->dato<x){return encontrarAuxiliar(aux->der,x);}

    if (x<aux->dato){return encontrarAuxiliar(aux->izq,x);}

    else {return false;}
}

template<class T> 
void Arbol<T>::mayor(){
    Nodo <T> * aux = raiz;
    if (raiz==NULL){return ;}
    
    while(aux->der != NULL){

        aux = aux->der;
    }
    cout<< aux->dato << endl;


}
template<class T> 
T Arbol<T>:: menor(){
    Nodo<T>* aux = raiz;

    if (aux == NULL){
        return ;
    }
    while (aux->izq !=NULL){

        aux = aux->izq;
    }
    return aux->dato;
}

template <class T> 
void Arbol<T> :: mostrarHojas(){

    //Caso 0: La raiz es NULL
    if(raiz == NULL){cout << "No hay nodos\n"<< endl;}

    Nodo<T>* aux = raiz;
    hojasAuxiliar(aux->izq);
    hojasAuxiliar(aux->der);

}

template <class T> 
void Arbol<T> :: hojasAuxiliar(Nodo<T>* aux){
    
    if (aux == nullptr){return;}

    if (aux->izq==NULL && aux->der==NULL) {

        cout << aux->dato <<"\n"<< endl;
        return ;
    }
 
    hojasAuxiliar (aux->izq);
    hojasAuxiliar(aux->der);
    
}

template <class T> 
int Arbol<T> :: contarNodos(){
    if (raiz == NULL){
        return 0;
    }
    Nodo<T>*aux = raiz;

    return contarAuxiliar(aux->izq) + contarAuxiliar(aux->der);

}
template <class T> 
int Arbol<T> :: contarAuxiliar(Nodo<T>* aux){
    
    if (aux == NULL) {return 0;}

    return 1 + contarAuxiliar(aux->izq) + contarAuxiliar(aux->der);
}

template <class T> 
bool Arbol<T> :: esBalanceado(){

    if (raiz == NULL){
        return true; 
    }
    Nodo<T>* aux = raiz;
    int alturaIzq = balanceadoAux(aux->izq);
    int alturaDer = balanceadoAux(aux->der);

    if (abs(alturaDer - alturaIzq)<= 1){ return true; }
    
    else{return false;}
}

template <class T> 
int Arbol<T> :: balanceadoAux(Nodo<T>*aux){

    if (aux== NULL){
        return 0;
    }

    int alt_izq = balanceadoAux(aux->izq);
    int alt_der = balanceadoAux(aux->der);

    // La altura es 1 (el nodo actual) + la altura del hijo más alto
    return 1 + (alt_izq > alt_der ? alt_izq : alt_der);


}
template<class T>
int Arbol<T> :: contarHojas(){

    if (raiz == nullptr) { return 0}

    return contarHojasAux(raiz);
}

template<class T>
int Arbol<T> :: contarHojasAux(Nodo<T>* aux){

        if (aux == nullptr){return 0;}

        if (aux->der == NULL && aux->izq == NULL){
            return 1;
        }

        return contarHojasAux(aux->der) + contarHojasAux(aux->izq);

}