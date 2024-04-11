#include<iostream>

void print(int n)
{
    if(n==0)
    return;
    std::cout<<n<<std::endl;
    print(n-1);
    std::cout<<n<<std::endl;
}

int main()
{
    print(5);
    return 0;
}