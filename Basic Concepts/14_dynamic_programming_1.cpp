/**
 * problem 1 : fibonacci
 */
#include <iostream>
#include <vector>

int fibonacci(int n)
{
    //base case
    if(n==0) return 0;
    if(n==1) return 1;
    //create DP array
    std::vector<int> dp(n+1);
    dp[0]=0;
    dp[1]=1;
    for(auto i =2;i<=n;i++)
    {
        dp[i] = dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    // Compute the n-th Fibonacci number
    std::cout << "Fibonacci(" << n << ") = " << fibonacci(n) << std::endl;

    return 0;
}