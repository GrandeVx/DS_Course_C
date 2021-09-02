#include <iostream>
#include <vector>


using std::cin;
using std::cout;

bool myfunction (int i,int j) { return (i<j); }

std::vector<std::vector<int> > Two_Sum(int search,std::vector<int>Lista) {
    

    std::vector<std::vector<int> > full_res;
        cout << "Cerco " << search << "\n";
        int i = 0;
        int j= Lista.size()-1;

        while(i != j) {
            cout << Lista[i] + Lista[j] << " \n";
            if ((Lista[i] + Lista[j]) == search) {    std::vector<int> res; cout << "trovato \n"; res.push_back(Lista[i]); res.push_back(Lista[j]); full_res.push_back(res); j--;}
            else if ((Lista[i] - Lista[j]) < 0) i++;
            else j--;
        }

        return full_res;

}

std::vector<std::vector<int> > Resolve(std::vector<int> Lista) {

    std::vector<std::vector<int> > res;
    int i = 0;
    std::sort(Lista.begin(), Lista.end(),myfunction);

    while(i != Lista.size()-1)

    {

        cout << Lista.size()<<" \n";
        std::vector<std::vector<int> > res_1;
            int search = (Lista[i] * -1);
            Lista.erase(Lista.begin(),Lista.begin()+1);
            res_1 = Two_Sum(search,Lista);
            if (res_1.size() > 0) {
                for (int i = 0; i < res_1.size(); i++)
                {
                    res_1[i].push_back(search);
                    res.push_back(res_1[i]);
                }
                
            }
            
    }


    return res;
    

}

int main() {

    int lista[] = {-1,0,1,2,-1,-4};
    std::vector<int> Vet(lista, lista + sizeof(lista) / sizeof(int) );
    std::vector<std::vector<int> > result;
    result = Resolve(Vet);

        cout << result.size() << " a \n";

}