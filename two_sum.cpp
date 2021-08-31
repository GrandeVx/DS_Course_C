#include <iostream>
#include <vector>
#include <map>


using std::map;
using std::cin;
using std::cout;
using std::vector;

int main() {

    int Vettore[] = {2,7,11,15};
    int search = 9;

    vector<int> Vet(Vettore, Vettore + sizeof(Vettore) / sizeof(int) );
    map<int,int> hash;

        for (int i = 0; i < Vet.size(); i++)
        {
            hash[Vet.at(i)] = i;
        }

            bool trovato = false;

        for (int i = 0; i < Vet.size() && !trovato; i++)
        {
            if(hash.find(search - Vet[i]) != hash.end()) {cout << i << " " << hash[search - Vet[i]] << "\n"; trovato = true;}
        }
        




}