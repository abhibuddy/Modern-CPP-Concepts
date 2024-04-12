#include<iostream>
int sum(int n)
{
    auto r=n/10;
    auto m=n%10;
    if(n<=9) //base condition should be on parameter
    return n;
    else
    return m+sum(r);
}
int main()
{
    std::cout<<sum(125)<<std::endl;
    return 0;
}