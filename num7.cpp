#include <iostream>
#include <list>

using namespace std;

list<int> reverseNum(list<int>& container){
    list<int> reversed_num;
    for(int it : container)
    {
        reversed_num.push_back(-1 * it);
        reversed_num.push_back(it);
    }
    
    return reversed_num;
}


int main()
{
    std::list<int> nums = {1, 5, 4, -3};
    nums = reverseNum(nums);
    
    for(int i : nums)
    {
        cout << i << endl;
    }
    
    return 0;
}
