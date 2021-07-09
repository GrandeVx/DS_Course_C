#include <iostream>



using std::cin;
using std::cout;

int a[] = {-5,1,3,4};


int main() {

    size_t size = (sizeof(a)/sizeof(*a));
    int res = -1;

    for (size_t i = 0; i < size; i++)
    {
        if(i == a[i]) res = i;
    }
    

    cout << res << "\n";



}