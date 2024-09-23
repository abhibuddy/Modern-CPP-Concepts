#include <iostream>
#include <queue>
#include <vector>

int findKthLargest(std::vector<int> nums,int k)
{
    std::priority_queue<int,std::vector<int>,std::greater<int>> minheap;
    for(const auto& num:nums)
    {
        minheap.push(num);
    }
    while(minheap.size()>k)
    {
        minheap.pop();
    }
    return minheap.top();
}
int main()
{
    std::vector<int> nums = {3, 2, 1, 5, 6, 4};
    int k = 2;
    
    int result = findKthLargest(nums, k);
    std::cout << "The " << k << "th largest element is " << result << std::endl;

    return 0;
}