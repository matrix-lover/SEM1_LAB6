#include <iostream>
#include <map>

using namespace std;

map<string, int> WordsMapCounter(string& str)
{
    string cur_word = "";
    map<string, int> container;
    for(char cur_simb : str)
    {
        if(cur_simb != ' ' and cur_simb != ',' and cur_simb != '.'){
            cur_word += cur_simb;
        } else{
            container[cur_word] += 1;
            cur_word = "";
        }
    }
    container[cur_word] += 1; //последнее слово
    cur_word = "";
    return container;
}

int main() {
    string str = "you can you";
    
    map<string, int> words = WordsMapCounter(str);
    
    cout << words["can"] << endl;
    
    
    return 0;
}
