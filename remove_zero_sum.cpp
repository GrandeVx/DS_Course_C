#include <iostream>
#include <map>

using std::cin;
using std::cout;
using std::string;

class Nodo {

    public:
        int val;
        int prefix;
        Nodo *next;
        
        Nodo(int Valore,Nodo* next){
            this->val = Valore;
            this->next = next;
        }

        Nodo(int Valore){
            this->val = Valore;
            this->next = NULL;
        }


};

class LinkedList {

    public:
        Nodo *First;
        std::map<int,bool> checker;

        LinkedList(Nodo *First) {

            this->First = First;

        }


    void iterate() {

        Nodo* check = this->First;
        Nodo* old  = this->First;

            while(check->next != NULL) {

                if (check->val == First->val) {
                    check->prefix = check->val; 
                    check->next->prefix = check->next->val + check->val;
                    }

                else check->next->prefix = check->next->val + check->prefix;

                cout << check->prefix << " ";
                
                old = check;
                check = check->next;

            }


            check->prefix = old->prefix + check->val;
            cout << check->prefix << " ";

    }

    void Resolve(){

        Nodo* check = this->First;
        checker[0] = true;

            while(check->next != NULL) {

                if (this->checker[check->prefix]) { 
                    cout << "VADO CON " << check->prefix << " \n";     
                    Remove(check->prefix);
                    return;
                    }
                else checker[check->prefix] = true;

                check = check->next;

            }


    } 

    void Remove(int val) {

        Nodo* start = NULL;
        Nodo* end = NULL;


        Nodo* check = this->First;
        if (val == 0) check->prefix = 0;

            while(end == NULL){
                
                if (check->prefix == val && start == NULL){
                    start = check;
                }
                else if (check->prefix == val && start != NULL){
                    end = check;
                    if (end->next != NULL) start->next = end->next;
                    else start->next = NULL;

                    if (this->First->prefix == 0) {this->First = end->next;}
                }
                check = check->next;

            }


    }


    void view() {

        Nodo *check = this->First;

            while(check->next != NULL) {

                 cout << check->val << " ";
                 check = check->next;
            }


            cout << check->val << " ";


    }


};




int main() {


    LinkedList* Link = new LinkedList(new Nodo(1,new Nodo(2,new Nodo(3, new Nodo(-3, new Nodo(4))))));
    //LinkedList* Link = new LinkedList(new Nodo(1,new Nodo(2,new Nodo(-3, new Nodo(3, new Nodo(1))))));
    Link->view();
    cout << "\n";
    Link->iterate();

    cout << "After \n";

    Link->Resolve(); 
    Link->view();

}