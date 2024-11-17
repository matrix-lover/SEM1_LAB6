#include <iostream>
#include <map>

using namespace std;

std::vector<string> uniqueWords(const string& str)
{
    string cur_word = "";
    map<string, int> container;
    vector<string> unique;
    for(char cur_simb : str)
    {
        if(cur_simb != ' ' and cur_simb != ',' and cur_simb != '.')
        {
            cur_word += cur_simb;
        } else {
            if (container[cur_word] < 1)
            {
                unique.push_back(cur_word);
            }
            container[cur_word] += 1;
            cur_word = "";
        }
    }
    if (container[cur_word] < 1) // последнее слово
    {
        unique.push_back(cur_word);
    }
    cur_word = "";
    return unique;
}

int main()
{
    string str = "could you and you would could can you";
    
    vector<string> b = uniqueWords(str);
    for(string unique_word : b)
    {
        cout << unique_word << endl;
    }
    
    return 0;
}
