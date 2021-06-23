#include <iostream>
#include <vector>
using std::cin;
using std::cout;

class ListFastSum {

    public:
        int state[];
        ListFastSum(int arr[],int size)
        {
            state[0] = arr[0];
            for(int i=1;i<size;++i)
               state[i] = (arr[i]+state[i-1]);
        }

        int Somma(int x,int y) {
            return (state[y-1] - state[x-1]);
        }

};



int main() {

    int a[] =  {1,2,3,4,5,6,7};
    ListFastSum* val = new ListFastSum(a,(sizeof(a)/sizeof(*a)));
    
    cout << val->Somma(2,5);

}