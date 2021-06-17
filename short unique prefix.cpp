// Joma Class DS Course 
// C++ Resolution

#include <iostream>
#include <map>
#include <string>

using std::cin;
using std::cout;
using std::string;
using std::vector;
string Word[] = {"joma","john","jack","techlead"};


class Trie {
    public:
        int Contatore = 0;
        std::map<char,Trie*> children;

    void insert(string word){
        Trie *current=this;
        for (int i = 0; i < word.size(); i++)
        {
            Trie *node=current->children[word[i]];
            if(!node){
                node=new Trie();
			    current->children[word[i]]=node;
            }
		    current=node;
		    current->Contatore++;
        }
        
    }

    string Unique_Prefix(string word) {
        
        Trie *current=this->children[word[0]];
        string Prefix = "";
        Prefix += word[0];
        for (int i = 1; i < word.size(); i++)
        {  
            Trie *node=current;
            if(node->Contatore == 1){ return Prefix;}
            else {current = current->children[word.at(i)]; Prefix+=word[i]; }

        }


}
};


int main() {
        
	Trie root = Trie();

    for (int i = 0; i < Word->size(); i++)
    {
        root.insert(Word[i]);
    }
    
    for (int i = 0; i < Word->size(); i++)
    {
        cout << root.Unique_Prefix(Word[i]) << " ";
    }
    cout << "\n";

}