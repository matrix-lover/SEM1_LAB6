#include <iostream>
#include <list>

using namespace std;

list<int> Sort(list<int>& container)
{
    for(list<int>::iterator i = container.begin(); i != container.end(); ++i)
    {
        for(list<int>::iterator j = i; j != container.end(); ++j)
        {
            if(*i < *j)
            {
                int cur = *i;
                *i = *j;
                *j = cur;
            }
        }
    }

    return container;
}

int main()
{
    std::list<int> nums = {1, 5, 4, -3};
    
    nums = Sort(nums);
    
    for(int i : nums){
        cout << i << endl;
    }
    return 0;
}
