#include <iostream>
// binary search works on sorteed array

int search(int arr[],int left,int right,int key)
{
    if(left<=right){
    int mid = (left+right)/2;
    if(arr[mid]== key)
    {
        return mid;
    }
    else if (key > arr[mid])
    {
        return search(arr,mid+1,right,key);
    }
    else
    return search(arr,left,mid-1,key);
    }
    return -1;
}
int binary_search(int arr [] , int size,int key)
{
    int left = 0;
    int right = size-1;
    int found = search(arr,left,right,key);
    return found;
}
int main()
{
    int arr [] = {1,5,6,9,10,13,20};
    int key = 10;
    int found = binary_search(arr,sizeof(arr)/sizeof(int),key);
    if(found!=-1)
    std::cout<<"element found at "<<found<<" position";
    else
    std::cout<<"element not found"<<std::endl;
    return 0;
}