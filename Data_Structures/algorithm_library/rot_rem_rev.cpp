#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> v = {10,20,30,30,40,50,60};
    std::vector<int> rv(v.size());
    std::reverse(v.begin(),v.end());
    std::reverse_copy(v.begin(),v.end(),rv.begin());
    std::rotate(v.begin(),v.begin()+2,v.end());
    /*for(auto i:v)
    {
        std::cout<<i<<" ";
    }*/
    auto ritr=std::remove(v.begin(),v.end(),40);
    v.erase(ritr,v.end());
    for(auto i:v)
    {
        std::cout<<i<<" ";
    }
    return 0;
}