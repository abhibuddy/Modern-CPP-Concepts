#include <iostream>
#include <vector>
#include <climits>
// maximum subarray sum
//  {-1,-2,-3,-4} => -1
//  {1,2,3,-2,5} => 9
int maxsubsum(std::vector<int> arr)
{
 int maxsum = INT_MIN;
 int cursum =0;
 for(auto i : arr)
 {
    cursum +=i; 
    if(maxsum<cursum)
    {
        maxsum = cursum;
    }
    if(cursum < 0)
    {
        cursum = 0; // if the current sum is less than zero then there is no need to carry it
    }
 }
 return maxsum;
}
int main() {
    std::vector<int> arr = {-1,-2,-3,-4};
    std::cout<<maxsubsum(arr); 
    return 0;
}