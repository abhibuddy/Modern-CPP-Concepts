#include<iostream>
#include<algorithm>
#include <vector>

int main()
{
    std::vector<int> v = {10, 7, 6, 5, 4, 3, 2, 1};
    auto isHeap=std::is_heap(v.begin(),v.end());
    if(isHeap)
    {
        std::cout<<"is heap"<<std::endl;
    }
    return 0;
}