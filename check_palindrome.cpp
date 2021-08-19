#include <iostream>

using std::cin;
using std::cout;
using std::string;

bool isPalindrome(string s) {

    int start = 0;
    int end = (s.size()-1);

        while(start != end) {
            if (s[start] != s[end]) return false;
            start++;
            end--;
        }


    return true;

}



int main(){

    string s = "mosmom";

    if (isPalindrome(s)) cout << "palindromo \n";
    else cout << "None \n";



} 