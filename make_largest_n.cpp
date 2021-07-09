#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::string;

string number[] = {"17","7","2","45","72"};

std::vector<string> numbers(number,number + sizeof(number) / sizeof(string) );


bool wayToSort(string i, string j) { return i+j > j+i; }

int main() {


    std::sort(numbers.begin(), numbers.end(), wayToSort);

    for(string x : numbers) {
        cout << x << " ";
    }

}