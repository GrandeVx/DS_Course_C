// Joma Class DS Course 
// C++ Resolution

#include <iostream>
using std::cin;
using std::cout;


int longest(std::string check) {

    int lenght = check.size();
    int max_size = 0;
    
        for (int i = 0; i < lenght/2; i++)
        {
            
            std::string control = check.substr(0,i+1);
            std::string other = check.substr(i+1,i+1);
                if(other != control) max_size++;
                else return max_size+1;
        }
        
    return max_size;
    
}

int main() {

    std::string check = "pwwkew";
        cout << longest(check) << "\n";


} 