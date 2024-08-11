#include <iostream>
#include <vector>

void reverse(std::vector<int>& arr,int start,int end)
{
    if(start>=end) return;
    std::swap(arr[start],arr[end]);
    reverse(arr,start+1,end-1);
}

void rotate_k(std::vector<int>& arr,int k)
{
    int n=arr.size();
    k=k%n; // normalize k
    if(k==0) return;
    reverse(arr,0,arr.size()-1); // reverse entire array
    reverse(arr,0,k-1); // reverse 0 to k 
    reverse(arr,k,arr.size()-1); // reverse k to end 

}
void print(std::vector<int>& arr)
{
    for(const auto& ele:arr)
    {
        std::cout<<ele<<" ";
    }
    std::cout<<std::endl;
}
int main()
{
    std::vector<int> arr = {1,2,3,4,5,6,7,8,9};
    int k=2;
    rotate_k(arr,k);
    print(arr);
    return 0;
}