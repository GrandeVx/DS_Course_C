#include <iostream>
#include <stack>          // std::stack

using std::cin;
using std::cout;

char number[] = {'(','[',')',']'};

int main() {

    bool valid = true;
     std::stack<int> check;

        for(char x : number) {

            if (x == '[' || x == '(' || x == '{' ) {
                switch (x)
                {
                   case '[' : check.push(']'); break;
                   case '(' : check.push(')'); break;
                   case '{' : check.push('}'); break;                    
                }
            }

            if (x == ']' || x == ')' || x == '}' ) {
                char a = check.top();
                if (a != x) valid = false;
                check.pop();
            }   

        }


    if (valid) cout << "valido \n";
    else cout << "Non Valido \n";

}