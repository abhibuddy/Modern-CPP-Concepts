#include <iostream>
#include <vector>

int binarysearch(std::vector<int> nums,int target)
{
    int left = 0; int right = nums.size()-1;
    
    while(left<=right)
    {
        int mid = (left+right)/2;
        if(nums[mid] == target)
        {
            return mid;
        }
        /*********modified binary search code************/
        //check if the first half is sorted 
        else if(nums[left]<= nums[mid])
        {
            // if the target is in the first half
          if(target >= nums[left] && target < nums[mid])  
            {
                right = mid-1;
            }
            else
            left = mid+1;
            
        }
        else{
            /*********modified binary search code************/
            //check if target is in second half
            if(target >= nums[mid] && target < nums[right])  
            {
                left = mid+1;
            }
            else
            right = mid-1;

        }
    }
    return -1;
}
int main()
{   std::vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    
    int result = binarysearch(nums, target);
    
    std::cout << "Output: " << result << std::endl;

    return 0;
}