/********************************************* 
 * Pattern : 1 pre-fix sum problem
 * 
*/
#include <iostream>
#include <vector>

std::vector<int> prefixsum(std::vector<int>& arr)
{
    std::vector<int> result(arr.size()); // taking and array of same size
    result[0]=arr[0]; // storing the fist element in array 
    for(auto i=1;i<arr.size();i++) // looping from second element to the last element 
    {
        result[i]=result[i-1]+arr[i]; //adding the last element to the current element
    }
    return result;
}
int main()
{
    std::vector<int> arr = {1, 2, 3, 4, 5, 6};
    std::vector<int> result = prefixsum(arr);
  // Output the result
    for (int sum : result) {
        std::cout << sum << " ";
    }
    int i=2;int j=4; //3,4,5 
    // sum of the values between i and j is prefixsum[j] - prefixsum[i-1]
    std::cout<<"\nsum between index i and j "<<result[j]-result[i-1];
    return 0;
}