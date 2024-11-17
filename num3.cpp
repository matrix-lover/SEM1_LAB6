#include <iostream>

using namespace std;

int wordsCounter(const string& str)
{
    int count_words = 0;
    for(auto i = str.begin(); i < str.end(); ++i)
    {
        if(*i == ' ' or *i == '.' or *i == ',' ){
            ++count_words;
        }
    }
    if (str[str.size()-1] == '.'){ //если есть точка в конце предложения
        return count_words;
    }
    return count_words + 1; // если ее нет
    
}

int main()
{
    string sentence = "can you can";
    int number = wordsCounter(sentence);
    cout << "Number of words in the text = " << number << endl;
    
}
