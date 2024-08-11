#include <iostream>
#include <algorithm>
int main()
{
    int arr[] = {1,0,23,0,6,-1,0,3};
    int n = sizeof(arr)/sizeof(int);
    int start = 0;
    int end = n-1;
    while(start<end)
    {
        if(arr[start]==0)
        {
            std::swap(arr[start],arr[end]);
            start ++;
        }
        else
        start ++;
        if(arr[end]==0)
        end -- ;
     
    } 
    for(int i = 0 ; i < n ; i ++ )
    {
        std::cout<<arr[i]<<" ";
    }
    return 0;
}