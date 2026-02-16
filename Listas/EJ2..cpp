#include <stack>
#include <iostream>
#include <string> 
#include <queue>
using namespace std;


void rewind(int n, stack<string>& realizadas, stack<string>& deshechas){

    while (realizadas.size()>= n){

        for ( int i =0; i<n ; i++){
            deshechas.push(realizadas.top());
            realizadas.pop();
        }
        break;
    }
}
void redo(stack<string>& realizadas, stack<string>& deshechas){
    if (!deshechas.empty()){
        realizadas.push(deshechas.top());
        deshechas.pop();
    }
}
void imprimir (stack<string>& realizadas){
    stack<string> aux;

    while (!realizadas.empty()){
        cout<<realizadas.top()<<"\n"<<endl;
        aux.push(realizadas.top());
        realizadas.pop();
    }
    while (!aux.empty()){
        realizadas.push(aux.top());
        aux.pop();
        }

}



int main (int argc, int argv[]){

    stack<string> accionesRealizadas;
    stack<string> accionesDeshechas;
    int na; 
    cin >> na;
    for (int i = 0; i<na ; i++){
        string acciones;
        cin >> acciones;
        accionesRealizadas.push(acciones);

    }
    int nd;
    cin >> nd;
    rewind(nd,accionesRealizadas,accionesDeshechas);
    int nr; 
    cin>> nr;
    for (int i = 0 ; i<nr ; i++){
        redo(accionesRealizadas,accionesDeshechas);
    }
    imprimir(accionesRealizadas);

}
