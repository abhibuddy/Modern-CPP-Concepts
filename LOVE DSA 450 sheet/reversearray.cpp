#include <iostream>
void printArray(int arr[])
{
    for(int i=0;i<=4;i++)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}
int main()
{
    
    int arr[5] = {1,2,30,5,14};
    int start = 0;
    int end = 4;
    printArray(arr);

    //reversing array
    while(start <= end)
    {
        std::swap(arr[start],arr[end]);
        start ++;
        end --;
    }

    printArray(arr);
    return 0;
}