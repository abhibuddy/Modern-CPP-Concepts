#include <iostream>
int friendsPair(int n)
{
    //base case
    if(n==1 || n==2)
    return n;
    //single :: friendsPair(n-1)
    //with pair :: friendsPair(n-2)
    return  friendsPair(n-1) + friendsPair(n-2) * (n-1);
}
int main()
{
    std::cout<<"total number of ways the frineds can pair up : "<<friendsPair(3)<<std::endl;
    return 0;
}