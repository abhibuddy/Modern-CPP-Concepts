// using the bottom up approach
#include <iostream>
#include <unordered_map>

std::unordered_map<int,long long> memo;
long long fibonacii(int n)
{
    if(n<=1) return n;
    memo[0]=0;
    memo[1]=1;
    for(int i = 2 ; i <= n ; i ++)
    {
        memo[i]=memo[i-1]+memo[i-2];
    }
    return memo[n];
}
int main()
{

    int n =10;
    std::cout<<"fibonacii result : "<<fibonacii(10)<<std::endl;
    return 0;
}