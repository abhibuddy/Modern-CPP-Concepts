#include <iostream>
#include <vector>
#include <unordered_set>
bool isSubset(std::vector<int>arr1,std::vector<int> arr2)
{
    std::unordered_set<int> uset(arr1.begin(),arr1.end());
    for(auto i : arr2)
    {
        if(uset.find(i) == uset.end())
        {
            return false;
        }
    }
    return true;
}
int main()
{
    std::vector<int> arr1 = {1, 2, 3, 4, 5};
    std::vector<int> arr2 = {1, 2, 3};

    if (isSubset(arr1, arr2)) {
        std::cout << "arr2 is a subset of arr1" << std::endl;
    } else {
        std::cout << "arr2 is not a subset of arr1" << std::endl;
    }
    return 0;
}