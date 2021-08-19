#include <iostream>
#include <map>

using std::cin;
using std::cout;
using std::string;




string find_pa(string s) {

    std::map<char,int> char_count;

        string sum = "";

        for (int i = 0; i < s.size(); i++)
        {
            if (!(sum.find(s[i]) != std::string::npos)) sum+= s[i];
            char_count[s[i]]++;
        }

        string center_char = "";
        string palind = "";
                
        for (int i = 0; i < sum.size(); i++)
        {
            if (char_count[sum[i]] % 2 == 0) palind += (sum[i] * (char_count[sum[i]]/2));
            else if (center_char == "") {
                center_char = sum[i];
                palind += (sum[i] * (char_count[sum[i]]/2));
                }
            else return "None";
        }


        string reverse = palind;
        std::reverse(reverse.begin(), reverse.end());



        return palind + center_char + reverse;





}

int main() {

    string s = "mommo";

    cout << find_pa(s) << "\n";



}