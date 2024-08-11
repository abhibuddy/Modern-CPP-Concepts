// find missing number using xor
#include<iostream>
#include <vector>

int findMissingNumber(std::vector<int> arr,int n)
{
    int xorall=0;
    int xorarr=0;
    for(auto i:arr)
    {
        xorarr ^=i;
    }
    for(int i=0;i<=n;i++)
    {
        xorall ^=i;
    }
    return xorall^xorarr;
}
int main() {
    std::vector<int> arr = {1, 2, 4, 5, 6}; // Array with missing number 3
    int n = 6; // Size of the full range (1 to 6)

    int missingNumber = findMissingNumber(arr, n);
    std::cout << "The missing number is: " << missingNumber << std::endl;

    return 0;
}