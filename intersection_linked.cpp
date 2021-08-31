#include <iostream>
#include <map>


using std::cin;
using std::cout;
using std::string;

class Nodo{

    public:
        int val;
        Nodo* Successivo;

        Nodo(int Val, Nodo* Successivo) {
            this->val = Val;
            this->Successivo = Successivo;
        }

        Nodo(int Val) {
            this->val = Val;
            this->Successivo = NULL;
        }

        string Successivi() {

            Nodo* check = this->Successivo;
            string Res = "";

                while(check!= NULL){  
                    Res.append(std::to_string(check->val));
                    check = check->Successivo;
                }

            return Res;

        } 


};

class LinkedList {

    public:
        Nodo* First;

        LinkedList(Nodo* First) {
            this->First = First;
        }   
};

int Interseca(LinkedList n1,LinkedList n2) {

    Nodo* check = n1.First;

        while(check->Successivo != NULL) {
            int val = check->val;
            Nodo* check2 = n2.First;

                while(check2->Successivo != NULL) {
                    if (val == check2->val) {
                        if(check->Successivi() == check2->Successivi()){
                            return check->val;
                        } else check2 = check2->Successivo;
                    } else check2 = check2->Successivo;

                }

            check = check->Successivo;

        }

        return 0;

}


int Interseca_Ottimizzato(LinkedList n1,LinkedList n2) {

    std::map<int,int> Hash;
    Nodo* check = n1.First;

        while(check->Successivo != NULL) {
            Hash[check->val] = 1;
            check = check->Successivo;
        }

        check = n2.First;

        while(check->Successivo != NULL) {
            if(Hash[check->val] == 1) return check->val;
            check = check->Successivo;
        }        
        return 0;

}


int main() {

    LinkedList n1 = LinkedList(
        new Nodo(4,new Nodo(1,new Nodo(8,new Nodo(4,new Nodo(5)))))
    );

    LinkedList n2 = LinkedList(
        new Nodo(5,new Nodo(0,new Nodo(1,new Nodo(8,new Nodo(4,new Nodo(5))))))
    );

    LinkedList n3 = LinkedList(
        new Nodo(0,new Nodo(9,new Nodo(1,new Nodo(2,new Nodo(4)))))
    );

    LinkedList n4 = LinkedList(
        new Nodo(3,new Nodo(2,new Nodo(4)))
    );



       cout << Interseca_Ottimizzato(n1,n2) << "\n";
       cout << Interseca_Ottimizzato(n3,n4) << "\n";

}