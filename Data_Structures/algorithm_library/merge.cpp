#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
std::vector<int> v1 = {1,2,3,4,5};
std::vector<int> v2 = {6,7,8,9,10};
std::vector<int> merge_vec(v1.size()+v2.size());
std::merge(v1.begin(),v1.end(),v2.begin(),v2.end(),merge_vec.begin()); 
for(auto val : merge_vec)
{
    std::cout<<val<<" ";
}
return 0;
}