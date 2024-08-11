#include <iostream>
//reverse array

void reversearray(int *arr, int n)
{
    int start = 0;
    int end = n-1;
    while(start < end)
    {
        std::swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int arr [] = {5,10,23,1,2,0};
    reversearray(arr,6);
    for(auto i : arr)
    {
        std::cout<<i<<" ";
    }
    return 0;
}