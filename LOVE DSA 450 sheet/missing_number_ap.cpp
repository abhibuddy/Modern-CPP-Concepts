#include <iostream>
#include <vector>
#include <numeric> //for accumulate

int findmissing(std::vector<int> arr)
{
    int n = arr.size()+1; // including the missing element 
    int total = (n*(arr[0]+arr.back()))/2;
    int cumsum = std::accumulate(arr.begin(),arr.end(),0); 
    return total-cumsum;
}
int main()
{
    std::vector<int> arr = {2,4,6,8,12};
    int missing = findmissing(arr);
    std::cout<<"missing number of the array : "<<missing<<std::endl;
    return 0;
}