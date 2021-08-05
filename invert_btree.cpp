// Joma Class DS Course 
// C++ Resolution

#include <iostream>
using std::cin;
using std::cout;

class Nodo {

    public: 
        int Valore;
        Nodo *Destra;   
        Nodo *Sinistra;


        Nodo(int Valore,Nodo* Destra,Nodo* Sinistra){
            this->Valore = Valore;
            this->Destra = Destra;
            this->Sinistra = Sinistra;
        }

        Nodo(int Valore){
            this->Valore = Valore;
            this->Destra = NULL;
            this->Sinistra = NULL;
        }

    std::string get() {
        if (this->Destra != NULL & this->Sinistra != NULL)
            return std::to_string(Valore) + "-" + Destra->get() + "-" + Sinistra->get();
        else return std::to_string(Valore);
    }

};

Nodo* Invert(Nodo* n) {


    if (n->Destra == NULL || n->Sinistra == NULL) return n;

    else {

        Nodo* right = Invert(n->Destra);
        Nodo* left = Invert(n->Sinistra);

        n->Sinistra = right;
        n->Destra = left;

    }


    return n;

}




int main () {

    Nodo* n = new Nodo(4, new Nodo(7,new Nodo(6),new Nodo(9)), new Nodo(2,new Nodo(3),new Nodo(1)));

    cout << n->get() << "\n";

    n = Invert(n);

    cout << n->get() << "\n";

}