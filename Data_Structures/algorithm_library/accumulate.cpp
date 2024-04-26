#include <iostream>
#include <numeric>
#include <vector>
int main()
{
    std::vector<int> v = {1,11,5,6,8};
    std::cout<<std::accumulate(v.begin(),v.end(),0);
    return 0;
}