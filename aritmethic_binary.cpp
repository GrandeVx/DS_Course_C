#include <iostream>

using std::cin;
using std::cout;

class Nodo {

    public: 
        std::string Valore;
        Nodo *Destra;   
        Nodo *Sinistra;


        Nodo(std::string Valore,Nodo* Sinistra,Nodo* Destra ){
            this->Valore = Valore;
            this->Sinistra = Sinistra;
            this->Destra = Destra;
 
        }

        Nodo(std::string Valore){
            this->Valore = Valore;
            this->Sinistra = NULL;
            this->Destra = NULL;

        }

        int get() {

            if (this->Destra != NULL && this->Sinistra != NULL) {


                if( this->Valore == "*" )  return this->Sinistra->get() * this->Destra->get(); 


                if( this->Valore == "+" )  return this->Sinistra->get() + this->Destra->get();
                 

                if( this->Valore == "-" ) return this->Sinistra->get() - this->Destra->get();
                    

               if( this->Valore == "/" ) return this->Sinistra->get() / this->Destra->get();
          
        
            }

            else return std::stoi(this->Valore);

        }
    
};


int main() {

    Nodo* t3 = new Nodo("+",
                        new Nodo("/",new Nodo("6"),new Nodo("2")),
                        new Nodo("*",new Nodo("8"),new Nodo("4")));
    Nodo* t2 = new Nodo("-",new Nodo("21"),new Nodo("23"));

    Nodo* t = new Nodo("*",t2,t3);

    cout << t->get() << "\n";

}