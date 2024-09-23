/***********************************
 * pattern 3 : sliding window teqniue
 * for solving sub array based problems
 */
#include <iostream>
#include <vector>

int slidingwindow(std::vector<int> arr,int k)
{
    int windowsum = 0;
    int maxsum = 0;
    
    //getting the first window sum
    for(auto i = 0 ;i < k ; i++)
    {
        windowsum += arr[i];
    }
    maxsum = windowsum;
    for(auto i = k;i<arr.size();i++)
    {
        windowsum += arr[i]-arr[i-k];
        maxsum = std::max(windowsum,maxsum);
    }
    return maxsum;
}
int main()
{
    std::vector<int> nums = {2, 1, 5, 1, 3, 2};
    int k = 3;
    std::cout<<"maximum sum of in window of "<<k<<" : "<<slidingwindow(nums,k)<<std::endl;
    return 0;
}