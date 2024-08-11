#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>

int coinchange(std::vector<int> coins,int amount)
{
    std::vector<int> dp(amount+1,INT_MAX);
    dp[0]=0;
    for(int i=1;i<=amount;i++)
    {
        for(auto coin : coins)
        {
            if(coin<=i && dp[i-coin] != INT_MAX)
            {
                dp[i]=std::min(dp[i],1+dp[i-coin]);
            }
            
        }
        
    }
    return dp[amount]==INT_MAX ? -1:dp[amount];
}
int main()
{
    std::vector<int> coins = {1,2,5};
    int amount=11;
    std::cout<<"minimum number of denomination required : "<<coinchange(coins,amount)<<std::endl;
    return 0;
}