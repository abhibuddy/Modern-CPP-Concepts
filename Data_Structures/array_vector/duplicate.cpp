#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

int main()
{
    std::vector<int> vec = {1,1,2,2,2,3,5,5,6};
    /*
    std::unordered_set<int> us(vec.begin(),vec.end());
    std::vector<int> res;
    for(auto ele :  us)
    {
       res.push_back(ele); 
    }
    for(auto it : res)
    {
        std::cout<<it<<" ";
    }*/
    sort(vec.begin(),vec.end());
    vec.erase(unique(vec.begin(),vec.end()),vec.end());
    for(auto it : vec)
    {
        std::cout<<it<<" ";
    }
    return 0;
}