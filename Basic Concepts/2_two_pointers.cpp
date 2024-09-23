/***************************************
 * pattern 2 : keeping the two pointers (here start and end of array and shifting based on condition)
 * here worked because the array was sorted 
 */
#include <iostream>
#include <vector>
std::vector<int> twoSum(std::vector<int> arr,int target)
{
    int left = 0 ; // start of array
    int right = arr.size()-1; //end of array
    while(left < right)
    {
        int sum = arr[left] + arr[right];
        if(sum ==target)
            {
                return {left,right};
            }
        else if(sum > target)
        {
            right--; // shift rigit back
        }
        else
        {
            left++; // shift left ahead
        }
        
    }
    return {};
}
int main()
{
    std::vector<int> nums = {1, 2, 3, 4, 6}; //sorted array
    int target = 6;
    std::vector<int> result = twoSum(nums, target);
    if (!result.empty()) {
        std::cout << "[" << result[0] << ", " << result[1] << "]" << std::endl;  // Output: [1, 3]
    } else {
        std::cout << "No solution found" << std::endl;
    }
    return 0;
}