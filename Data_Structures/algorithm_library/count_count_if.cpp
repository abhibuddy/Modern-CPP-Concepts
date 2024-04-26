#include <iostream>
#include <algorithm>
#include <vector>
int main()
{
    std::vector<int> v = {1,2,2,3,4,5,6,8};
    int count = std::count(v.begin(),v.end(),2);
    int count_even = std::count_if(v.begin(),v.end(),[](int x){ return x%2==0;});
    std::cout<<"count : "<<count<<"\ncount of even : "<<count_even<<std::endl;
    return 0;
}