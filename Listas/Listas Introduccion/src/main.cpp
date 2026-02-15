#include "../include/Nodo.h";
#include "../include/Lista1.h";


using namespace std;
int main()
{
    Lista<string>* l = new Lista<string>();
    Lista<int>* r = new Lista<int>();
    Lista<string>* l2 = new Lista<string>();
    
    
    l->add(" 11x");
    l->add(" 22y");
    l->add(" 33z");
    r->add(100);
    r->add(22);
    cout << "l= "<<l->toPrint("fin") << endl;
    cout << "r= " << r->toPrint("fin") << endl;
    cout << "l2= " << l2->toPrint("fin") << endl;
    cout << "suma:" << r->suma(0) << endl<<endl;
    cout << "size l= " << l->size() << endl;
    cout << "size r= " << r->size() << endl;
    cout << "size l2= " << l2->size() << endl<<endl;

    l2->add(" AA");
    l2->add(" BB");
    l2->concat(l);
    cout << l2->toPrint(" soy l2 concatenada con l");
    cout << l->toPrint(" soy l");
    Lista<string>* copia = l->copy();
    cout << copia->toPrint(" soy copia de l");
    l->borrar_last();
    cout << l->toPrint(" soy l");
    l->borrar_last();
    cout << l->toPrint(" soy l");
    l = copia->copy();
    cout << l->toPrint(" soy l");
    l->borrar();
    cout << l->toPrint(" soy l");

    cout << l2->toPrint(" soy l2");
    l2->tomar(4);
    cout << l2->toPrint(" soy l2");
    

    cout << endl << endl;
    system("PAUSE");
    return EXIT_SUCCESS;

}