#include<iostream>

int fibonacci(int n)
{
    if(n<=1) //handling multiple base case
    return n;
    else
    return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    std::cout<<fibonacci(3)<<std::endl;
    return 0;
}