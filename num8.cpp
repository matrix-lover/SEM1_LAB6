#include <iostream>
#include <vector>

using namespace std;

vector<int> plusesDeleter(vector<int>& vec)
{
    vector<int> pluses_del;
    for(int it : vec)
    {
        if(it <= 0) pluses_del.push_back(it);
    }
    return pluses_del;
}

int main()
{
    vector<int> v = {1, 5, 4, -3};
    
    v = plusesDeleter(v);
    
    for(int i : v)
    {
        cout << i << endl;
    }
    return 0;
}
