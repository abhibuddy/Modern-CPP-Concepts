#include <iostream>
#include <vector>

int counttriplet(std::vector<int> nums,int target)
{
    int count = 0;
   for(int i=0;i<nums.size()-2;i++)
   {
    
    int left = i+1;
    int right = nums.size()-1;
    while(left<=right)
    {
        int sum = nums[i] + nums[left] + nums[right];
        if(sum<target)
        {
            left++;
            count++;
        }
        else
        {
            right--;
        }
    }
   }
   return count;
}
int main() {
    std::vector<int> nums = {-2, 0, 1, 3};
    int target = 2;

    int count = counttriplet(nums, target);
    std::cout << "Number of triplets with sum smaller than " << target << ": " << count << std::endl;
    
    return 0;
}