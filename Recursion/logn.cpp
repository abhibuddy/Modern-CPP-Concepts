#include<iostream>
int logn(int n)
{
    if(n==1)
    return 0;
    else
    return 1+logn(n/2);
}

int main()
{
    std::cout<<logn(16)<<std::endl;
    return 0;
}