// given a array while going up in recursion index + 1 
// while coming back in backtrack index - 1
#include <iostream>

void printArray(int arr[],int n)
{
    for(int i =0; i< n ; i ++)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}
void changeArr(int arr[],int n,int i)
{
    // base case
    if(i==n)
    {
        printArray(arr,n);
        return;
    }
    arr[i] = i+1; // perform operation for this call 
    changeArr(arr,n,i+1); // call for new value
    arr[i] -= 2; // backtracking time
}
int main()
{
    int arr[5]={0};
    int n = 5;
    changeArr(arr,n,0);
    printArray(arr,n);
    return 0;
}