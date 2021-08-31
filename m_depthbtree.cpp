#include <iostream>
using std::cin;
using std::cout;

class Nodo {

    public: 
        int Valore;
        int Depth = 0;
        Nodo *Destra;   
        Nodo *Sinistra;


        Nodo(int Valore,Nodo* Destra,Nodo* Sinistra){
            if (this->Depth == 0 ) this->Depth = 1;
            this->Valore = Valore;
            this->Destra = Destra;
            this->Destra->Depth = this->Depth + 1;
            this->Sinistra = Sinistra;
            this->Sinistra->Depth = this->Depth + 1;
        }

        Nodo(int Valore){
            this->Valore = Valore;
            this->Destra = NULL;
            this->Sinistra = NULL;
        }


};

int MaxDepth(Nodo* n) {

    int a,b;

    if (n->Destra == NULL || n->Sinistra == NULL) return n->Depth;

    else {

         a = MaxDepth(n->Sinistra);
         b = MaxDepth(n->Destra);

    }

    if (a > b) return a;
    else return b;

}



int main() {


     Nodo* n = new Nodo(3, new Nodo(20,new Nodo(15),new Nodo(17)), new Nodo(9));

    cout << MaxDepth(n) + 1 << "\n";

}