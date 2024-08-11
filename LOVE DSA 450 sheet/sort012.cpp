#include <iostream>
#include <vector>

void sort012(std::vector<int>& arr)
{
    int low = 0;
    int mid = 0;
    int high = arr.size()-1;
    while(mid < high)
    {
        if(arr[mid] == 0)
        {
            std::swap(arr[low],arr[mid]);
            low ++;
            mid ++ ;
        }
        else if(arr[mid] == 1)
        {
            mid ++ ;
        }
        else
        {   
            std::swap(arr[high],arr[mid]);
            high--;
        }
    }
}
int main()
{
    std::vector<int> arr={1,0,1,1,2,0,1,0};
    sort012(arr);
    for(auto ele : arr)
    {
        std::cout<<ele<<" ";
    }
    return 0;
}