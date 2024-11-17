#include <iostream>

using namespace std;

vector<int>::iterator Find(vector<int>::iterator first, vector<int>::iterator last, int el){
    for(vector<int>::iterator it = first; it != last; ++it)
    {
        if (*it == el)
        {
            return it;
        }
    }
    return last;
}




int main() {
    vector<int> massive = {1, 3, 6, 4, 10, 9, 7, 4, 8};
    int number = *Find(massive.begin(), massive.end(), 5);
    cout << number;
    
    
    return 0;
}
