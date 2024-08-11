#include <iostream>
#include <climits>
//finding the maximum in array

int main ()
{
    int arr[] = {5,4,6,22,1,-5};
    int max = INT_MIN;
    for(int i =0;i<sizeof(arr)/sizeof(int);i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    } 
    std::cout<<"Maximum element : "<<max<<std::endl;
    return 0;
}