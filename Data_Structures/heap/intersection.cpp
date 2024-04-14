/**
Input:
5 3
89 24 75 11 23
89 2 4

Output: 
1

Explanation: 
89 is the only element in the intersection of two arrays.
**/
#include <iostream>
#include <vector>
#include <unordered_set>
std::vector<int> intersection(std::vector<int> v1, std::vector<int> v2)
{
    std::unordered_set<int> set1(v1.begin(),v1.end());
    std::vector<int> result;
    for(auto val:v2)
    {
        if(set1.find(val)!=set1.end())
        {
            result.push_back(val);
            set1.erase(val);
        }
    }
    return result;
}
int main()
{
    std::vector<int> vec1={89,24,75,11,23};
    std::vector<int> vec2={89,2,4,89};
    std::vector<int> intersect = intersection(vec1,vec2);
    for(auto val:intersect)
    {
        std::cout<<val<<std::endl;
    }
    return 0;
}