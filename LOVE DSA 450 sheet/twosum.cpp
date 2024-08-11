#include <iostream>
#include<vector>
#include<unordered_map>

std::vector<int> twosum(std::vector<int> arr,int target)
{
    std::unordered_map<int,int> umap;
    for(int i=0;i<arr.size();i++)
    {int complement = target-arr[i];
    if(umap.find(complement)!=umap.end())
    {
        return {umap[complement],i};
    }
    else
    umap[arr[i]]=i;

    }
    return {};
}
int main()
{
    std::vector<int> arr={2,7,8,5};
    int target=9;
    std::vector<int> ans=twosum(arr,target);
    std::cout<<"{"<<ans[0]<<","<<ans[1]<<"}"<<std::endl;
    return 0;
}