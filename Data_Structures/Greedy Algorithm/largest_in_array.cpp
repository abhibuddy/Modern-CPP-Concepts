#include <iostream>
#include <vector>
#include <climits>

int  findlargest(std::vector<int> arr)
{
    if(arr.size()==0)
    {
        return INT_MIN;
    }

 int largest = arr[0];
    for(auto ele : arr)
    {
        if(ele > largest)
        largest = ele;
    }
    return largest;
}
int main()
{
    std::vector<int> array = {3, 5, 2, 9, 6, 8, 7};
    int largestElement = findlargest(array);
    
    if (largestElement == INT_MIN) {
        std::cout << "The array is empty." << std::endl;
    } else {
        std::cout << "The largest element in the array is: " << largestElement << std::endl;
    }

    return 0;
}