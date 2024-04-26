#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> ones(5);
    //std::fill(ones.begin(),ones.end(),10);
    std::fill_n(ones.begin(),3,10);
    for(auto i : ones)
    {
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
    std::vector<int> num = {1,2,3,4,5,6};
    std::vector<int> even(num.size()); 
    //std::copy(num.begin(),num.end(),even.begin()); 
    std::copy_if(num.begin(),num.end(),even.begin(),[](int n){return n%2==0;});
    for(auto i : even)
    {
        std::cout<<i<<" ";
    }
    return 0;
}