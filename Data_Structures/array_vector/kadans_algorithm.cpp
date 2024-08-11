#include <iostream>
#include <climits>

//kadan's algorithm
int maxsum(int *arr,int n)
{
    int maxSum = INT_MIN;
    int currentSum = 0;
    for (int i = 0 ; i<n ; i++)
    {
        currentSum+=arr[i];
        maxSum = std::max(arr[i],currentSum);
        if(currentSum < 0)
        {
            currentSum = 0;
        }
    }
    return maxSum;
}
int main()
{
    int arr[] = {2,-3,6,-5,4,2};
    std::cout<<maxsum(arr,sizeof(arr)/sizeof(int));
    return 0;
}