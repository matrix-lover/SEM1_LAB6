#include <iostream>
#include <map>

using namespace std;

int diffWordsCounter(const string& str)
{
    int count = 0;
    map<string, int> words;
    string cur_word = "";
    for(char cur_simb : str)
    {
        if(cur_simb != ' ' and cur_simb != ',' and cur_simb != '.')
        {
            cur_word += cur_simb;
        } else {
            if (words[cur_word] < 1)
            {
                count += 1;
            }
            words[cur_word] += 1;
            cur_word = "";
        }
    }
    if (words[cur_word] < 1)
    {
        count += 1; // последнее слово
    }
    words[cur_word] += 1;
    cur_word = "";
    return count;
}

int main()
{
    string str = "could you and you would could can you";
    int words = diffWordsCounter(str);
    cout << words << endl;;
    
    return 0;
}
