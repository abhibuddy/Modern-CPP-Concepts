#include<iostream>
#include<queue> //priority_queue 
#include<algorithm>

//kth maximum or minimum element from an array
int kthsmallest(std::vector<int> arr,int k)
{
std::priority_queue<int> maxheap;
for(int i=0;i<arr.size();i++)
{
    maxheap.push(arr[i]);
}
while(maxheap.size()>k)
{
    maxheap.pop();
}
return maxheap.top();
}
//kth maximum or minimum element from an array
int kthlargest(std::vector<int> arr,int k)
{
std::priority_queue<int,std::vector<int>,std::greater<int>> minheap; //for minheap std::vector<int>,std::greater<int>
for(int i=0;i<arr.size();i++)
{
    minheap.push(arr[i]);
}
while(minheap.size()>k)
{
    minheap.pop();
}
return minheap.top();
}
int main()
{
    std::vector<int> arr = {4,56,2,10,100,7,89};
    int k=2;
    std::cout<<"kth largest element "<<kthlargest(arr,k)<<"\nkth smallest element "<<kthsmallest(arr,k)<<std::endl;
    return 0;
}