#include <iostream>
#include <vector>
#include <climits>

int maxSubArray(const std::vector<int>& nums)
{
    int overallmax = INT_MIN;
    int currentmax=0;
    for(auto i=0;i<nums.size();i++)
    {
        currentmax = std::max(nums[i],nums[i]+currentmax);
        overallmax = std::max(overallmax,currentmax);
    }
    return overallmax;
}
int main() {
    std::vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    std::cout << "Maximum Subarray Sum: " << maxSubArray(nums) << std::endl;

    return 0;
}