// move all negative elements to one side of array

#include<iostream>
void seperateneg(int arr[],int size)
{
    int start =0;
    int end = size-1;
    while(start<=end)
    {
        if(arr[start] < 0 )
        start++;
        else if(arr[end] >= 0 )
        end--;
        else
        {
            std::swap(arr[start],arr[end]);
            start ++;
            end --;

        }
    }
}
int main()
{
    int arr[] =  {1, -1, 3, 2, -7, -5, 11, 6 };
    seperateneg(arr,8);
    std::cout<<"moving all the negative elements to one side :"<<std::endl;
    for(auto i : arr)
    {
        std::cout<<i<<" ";
    }
    return 0;
}