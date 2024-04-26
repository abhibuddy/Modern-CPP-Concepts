#include<iostream>
#include <vector>
#include <algorithm>
int main()
{
    std::vector<int> v = {1,2,3,3,4,5};
    auto itr = std::adjacent_find(v.begin(),v.end());
    if(itr ==v.end())
    {
        std::cout<<"there is no adjacent element in vector"<<std::endl;
    }
    else{
        std::cout<<"there is adjacent elements in vector "<<*itr<<" at distance "<<std::distance(v.begin(),itr)<<std::endl;
    }
    return 0;
}