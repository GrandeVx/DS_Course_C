#include <iostream>

using std::cin;
using std::cout;

char Trovalo(std::string s) {

    size_t Size = s.size();
    std::string cache;

    size_t i = 0;

        while (i < Size) {

            if (cache.find(s[i]) != std::string::npos) return s[i];
            cache+=s[i];
            i++;
        }

        return 'N';

}



int main() {



    cout << Trovalo("qwerty") << "\n";



}