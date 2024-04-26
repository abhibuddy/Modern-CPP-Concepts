#include <iostream>
#include <algorithm>
#include <vector>
int main()
{
    std::vector<int> v = {10,20,30,5,60};
    std::vector<int> sv = {20,30};
    //auto itr = std::find(v.begin(),v.end(),30);
    //auto itr = std::find_if(v.begin(),v.end(),[](int x){return x%2==0;});
    //auto itr = std::find_if_not(v.begin(),v.end(),[](int x){return x%2==0;});
    auto itr = std::find_first_of(v.begin(),v.end(),sv.begin(),sv.end());

    if(itr!=v.end())
    {
        std::cout<<"element "<<*itr<<" present in vector at "<<std::distance(v.begin(),itr)<<"th position"<<std::endl;
    }
    return 0;
}