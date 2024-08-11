#include <iostream>
#include <vector>
#include <unordered_map>

void frequencymore(std::vector<int> arr,int k)
{
std::unordered_map<int,int> freq;
for(const auto& ele:arr )
{
    freq[ele]++;
}
for(auto item:freq)
{
    if(item.second>arr.size()/k)
    {
        std::cout<<item.first<<" ";
    }
}
}

int main()
{
    std::vector<int> arr ={1,1,1,2,2,3,3,3,4,4,4,4};
    frequencymore(arr,4);
    return 0;
}