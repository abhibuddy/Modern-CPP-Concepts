#include <iostream>
#include <vector>
#include <algorithm>


int main()
{
    std::vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int target = 13 ;
    std::cout<<"Binary search : "<<std::boolalpha<<std::binary_search(arr.begin(),arr.end(),target)<<std::endl;
    return 0;
}