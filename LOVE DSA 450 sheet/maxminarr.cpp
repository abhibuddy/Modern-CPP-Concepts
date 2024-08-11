#include <iostream>
#include <climits>

int main() {
    int arr[5] = {1,5,6,40,8};
    int min = INT_MAX;
    int max = INT_MIN;
    for(int i=0;i<5;i++)
    {
        if(arr[i]<min)
        min = arr[i];
        if(arr[i]>max)
        max = arr[i];
        
    }
    std::cout<<"min element : "<<min<<"\nmax element : "<<max<<std::endl;
    return 0;
}