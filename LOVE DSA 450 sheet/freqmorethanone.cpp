#include <iostream>
#include <vector>
#include <unordered_set>

void repeatingelement(std::vector<int> arr)
{
    std::unordered_set<int> unique;
    std::unordered_set<int> repeating;

    for(auto ele:arr)
    {
        if(unique.find(ele)==unique.end())
        {
            unique.insert(ele);
        }
        else
        repeating.insert(ele);
    }
    std::cout<<"repeating elements in the array are : "<<std::endl;
    for(const auto& ele:repeating)
    {
        std::cout<<ele<<" ";
    }
    std::cout<<std::endl;
}
int main()
{
    std::vector<int> arr = {1,1,2,3,4,5,5,5};
    repeatingelement(arr);
    return 0;
}