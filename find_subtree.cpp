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

bool comparazione(Nodo* s,Nodo* t){
    if(s->get().find(t->get()) != std::string::npos) return true;
    else return false;
}


int main () {

    Nodo* n = new Nodo(4, new Nodo(3), new Nodo(2));

    Nodo* t3 = new Nodo(4,new Nodo(3),new Nodo(2));
    Nodo* t2 = new Nodo(5,new Nodo(4),new Nodo(-1));
    Nodo* t = new Nodo(1,t2,t3);

    Nodo* s = new Nodo(4,new Nodo(3),new Nodo(2));

    
    if(comparazione(t,s)) cout << ":: Trovato \n";
    else cout << ":: Non Trovato \n";

}