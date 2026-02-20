#include <cstdlib>
#include <iostream>
#include <sstream>

using namespace std;

class Nodo {
    public:
        int dato ;
        Nodo* izquierdo, *derecho;
        Nodo (int d){izquierdo = derecho = NULL; dato = d;};
};

class BST {
    private:
    Nodo* raiz;
    int esBalanceadoRecursivo(Nodo* aux);
    public: 
     BST(Nodo * r){raiz = r;}
     bool esBalanceado();
};

bool BST::esBalanceado() {

    if (raiz == NULL){
        return true;
    }
    int izq = esBalanceadoRecursivo(raiz->izquierdo);
    int der = esBalanceadoRecursivo(raiz->derecho);

    if (izq == 0 && der == 0 ){return true ;}

    if (abs (izq-der)<=1){return true;}

    else {return false;}
}

int BST::esBalanceadoRecursivo(Nodo* aux) {
    // Caso base: un árbol vacío tiene altura 0 y es balanceado
    if (aux == NULL) {
        return 0;
    }
    
    return 1 + max(esBalanceadoRecursivo(aux->izquierdo),esBalanceadoRecursivo(aux->derecho));

}

int main (int argc , char* argv []){

    Nodo* raiz = new Nodo(10);
    raiz->izquierdo = new Nodo(5);
    raiz->derecho = new Nodo(15);
    raiz->izquierdo->izquierdo = new Nodo(3);
    BST* arbol = new BST(raiz);
    cout << (arbol->esBalanceado() ? "Si" : "No") << endl;

    cout << "\n==================================\n"<<endl;

    Nodo* raiz1 = new Nodo(10);
    raiz1->izquierdo = new Nodo(5);
    raiz1->izquierdo->izquierdo = new Nodo(3);
    raiz1->izquierdo->izquierdo->izquierdo = new Nodo(1);
    BST* arbol1 = new BST(raiz);
    cout << (arbol1->esBalanceado() ? "Si" : "No") << endl;

    cout << "\n==================================\n"<<endl;

    Nodo* raiz2 = new Nodo(1);
    BST* arbol2 = new BST(raiz);
    cout << (arbol2->esBalanceado() ? "Si" : "No") << endl;

    cout << "\n==================================\n"<<endl;

    Nodo* raiz3 = nullptr;
    BST* arbol3 = new BST(raiz);
    cout << (arbol3->esBalanceado() ? "Si" : "No") << endl;

    cout << "\n==================================\n"<<endl;

    Nodo* raiz4 = new Nodo(20);
    raiz4->izquierdo = new Nodo(10);
    raiz4->derecho = new Nodo(30);
    raiz4->izquierdo->derecho = new Nodo(15);
    raiz4->derecho->izquierdo = new Nodo(25);
    raiz4->derecho->derecho = new Nodo(35);
    BST* arbol4 = new BST(raiz);
    cout << (arbol4->esBalanceado() ? "Si" : "No") << endl;

}