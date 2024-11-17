#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

vector<int> Sort(vector<int>&massive)
{
    double factor = 1.247;
    int distance = massive.size();
    int elem1;
    int elem2;
    while (distance > 1)
    {
        distance = max(1, int(distance/factor));
        elem1 = 0;
        elem2 = distance;
        for(; elem2 < massive.size(); ++elem1, ++elem2)
        {
            if (massive.at(elem1) > massive.at(elem2)) // по возрастающему
            {
                int cur = massive[elem1];
                massive[elem1] = massive[elem2];
                massive[elem2] = cur;
            }
        }
    }
    return massive;
}

vector<int>::iterator Find_In_Sorted(vector<int>::iterator first, vector<int>::iterator last, int el)
{
    vector<int>::iterator cur = first + (last - first)/2;
    while(first <= last)
    {
        if(*cur > el)
        {
            last = cur - 1;
            cur = first + (last - first)/2;
        }
        if(*cur < el)
        {
            first = cur + 1;
            cur = first + (last - first)/2;
        }
        if(*cur == el) return cur;
    }
    return last;
}

int main() {
    vector<int> massive = {1, 3, 6, 10, 9, 7, 4, 8, 5};
    int el = 11;
    Sort(massive);
    
    for(int i = 0; i < massive.size(); ++i)
    {
        cout << massive.at(i) << '\n';
    }
    
    vector<int>::iterator number = Find_In_Sorted(massive.begin(), massive.end(), el);
    
    if(number != massive.end() and *number == el){
        cout << "Returned element: "<< *number << '\n';
    } else cout << "Not found" << endl;
    
    return 0;
}
