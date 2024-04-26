#include <iostream>
#include <algorithm>
#include <vector>
int main()
{
    std::vector<int> v = {1,2,3,5,6,7,1};
    std::cout<<"Is the vector sorted ? "<<std::boolalpha<<std::is_sorted(v.begin(),v.end())<<std::endl;
    
    auto itr = std::is_sorted_until(v.begin(),v.end());
    if(itr==v.end())
    {
        std::cout<<"vector is sorted till end"<<std::endl;
    } 
    std::sort(v.begin(),v.end());
    
    std::cout<<"Is the vector sorted ? "<<std::boolalpha<<std::is_sorted(v.begin(),v.end())<<std::endl;
    return 0;
}