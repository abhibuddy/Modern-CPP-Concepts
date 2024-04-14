#include <iostream>
#include<unordered_map>
#include <vector>
int main()
{
std::vector vec ={-1,2,-1,3,2};
std::unordered_map<int,int> umap;
for(auto num:vec)
{
    umap[num]++;
}
for(auto num:vec)
{
    if(umap[num]==1)
    {
        std::cout<<"first non-repeating number is : "<<num<<std::endl;
        break;
    }
}
return 0;
}