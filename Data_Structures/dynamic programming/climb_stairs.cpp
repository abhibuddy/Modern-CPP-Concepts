// bottom up approach to solve #tabulation
// info : we can take 1 or 2 steps at one time to climb the stairs
#include <iostream>
#include <vector>


int climbstairs(int n)
{
    if(n==1) return 1;
    std::vector<int> dp(n+1,0);
    dp[1]=1;
    dp[2]=2;
    for(int i = 3;i<=n ;i ++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int main()
{
    int n = 5;
    std::cout<<"the number of ways "<<climbstairs(n)<<std::endl;
    return 0;
}