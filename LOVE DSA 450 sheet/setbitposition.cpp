#include <iostream>
#include <cmath>
int findpos(int n)
{
    if(n==0) return -1;
    if((n&n-1) == 0)
    {
        return std::log2(n)+1;
    }
    return -1;
}
int main()
{
    int num = 4;
    std::cout<<"position of set bit "<< findpos(num);
    return 0;
}