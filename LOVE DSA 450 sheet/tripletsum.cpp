// find the triplet sum in array that sums upto a given value
#include <iostream>
#include <vector>
#include <algorithm>
bool findTriplet(std::vector<int> arr,int target)
{
    // sort the array
    std::sort(arr.begin(),arr.end());

    for(int i =0;i<arr.size()-2;i++)
    {
        int left = i+1;
        int right = arr.size()-1;
        while(left<=right)
        {
            int currsum = arr[i]+arr[left]+arr[right]; 
            if(currsum == target)
            {
                std::cout<<arr[i]<<" "<<arr[left]<<" "<<arr[right]<<std::endl;
                return true;
            }
            else if(currsum<target){
                ++left;
            }
            else
            --right;
        }
    }
    std::cout<<"No triplet found in the array"<<std::endl;
    return false;
}
int main()
{
    std::vector<int> arr = {12, 3, 4, 1, 6, 9};
    int target = 24;

    findTriplet(arr, target);
    return 0;
}