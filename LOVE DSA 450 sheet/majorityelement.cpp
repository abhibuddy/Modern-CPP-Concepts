#include <iostream>
#include <unordered_map>
int majoritycount(int arr[],int n)
{
    std::unordered_map<int,int> umap;
    int majoritycount = n/2;
    for(int i = 0;i<n;i++)
    {
        umap[arr[i]]++;
        if(umap[arr[i]]>majoritycount)
        {
            return arr[i];
        }
    }
    return -1;
}
int main() {
    int arr[] = {1,2,3};
    int n = sizeof(arr)/sizeof(int);
    if(majoritycount(arr,n)==-1)
    {
        std::cout<<"no majority element";
    }
    else
    std::cout<<majoritycount(arr,n);
    return 0;
}