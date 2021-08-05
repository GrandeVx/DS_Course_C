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

};


int val = 1;
void comp(Nodo* n){
    if (n->Destra == NULL) return;

    if (n->Destra != NULL) {
        val++;
        comp(n->Destra);
    }

}


int main() {

    Nodo* n = new Nodo(3,

        new Nodo(20, 
            new Nodo(3,new Nodo(4),new Nodo(4)),
            new Nodo(3)
        ),
        
        new Nodo(9));
        

    comp(n->Destra);
    int des = val;
    val = 1;
    comp(n->Sinistra);
    int sin = val;

    if ((des - val) == -1 || (des - val) == 1) cout << "Bilanciato \n"; 
    else cout << " Non Bilanciato \n"; 
}