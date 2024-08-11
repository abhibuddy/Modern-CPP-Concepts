//top down approach of solving the problem

#include <iostream>
#include <unordered_map>

std::unordered_map<int,long long> memo;
long long fibonacii(int n)
{
    if (memo.find(n) != memo.end())
    {
        return memo[n];
    }
    if(n<=1){
        return n;
    }
    memo[n] = fibonacii(n-1)+fibonacii(n-2);
    return memo[n];
}
int main()
{
    int n =10;
    std::cout<<"fibonacii result : "<<fibonacii(10)<<std::endl;
    return 0;
}