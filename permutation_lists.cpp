#include <iostream>
#include <vector> 

using std::cin;
using std::cout;


std::vector<std::vector<int> > Res;

void PermutazioneRicorsiva(std::vector<int> A,std::vector<int> S,int b) {

    if(A.empty()) Res.push_back(S);

    else {

        std::vector<int> C(A);

            for (int i = 0; i < C.size(); i++)
            {
                S.at(b) = C[i];
                A.erase(A.begin()+i);
                PermutazioneRicorsiva(A,S,b+1);
                A.insert(A.begin()+i,C[i]);
            }
    }

}

void Permutazione(std::vector<int> A ){

    std::vector<int> S(A);
    PermutazioneRicorsiva(A,S,0);
}

int main() {

    int myints[] = {1,2,3};
     std::vector<int> Start (myints, myints + sizeof(myints) / sizeof(int) );
    Permutazione(Start);

    for (int i = 0; i < Res.size(); i++)
    {
        cout << "[ ";
        
            for (int j = 0; j < Res[i].size(); j++)
            {
                cout << " " << Res[i][j] << " ";
            }
        
        cout << " ] ";
    }
    

}