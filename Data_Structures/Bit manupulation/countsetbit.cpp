#include <iostream>

int countSetBit(int n)
{
    int count=0;
    while(n)
    {
        n &= (n-1); // n & (n-1)
        count++;
    }
    return count;
}
int main()
{
    int n = 14; //1110
    std::cout<<countSetBit(n)<<" "<<__builtin_popcount(n); //__builtin_popcount() builtin function that how many bits are set 
    return 0;
}