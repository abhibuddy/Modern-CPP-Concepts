#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

//here we are filling the upper half of matrix
int getlps(std::string s)
{
int n = s.length();
//std::vector<int> v(size, value)
std::vector<std::vector<int>> dp(n,std::vector<int>(n,0));
for(int i=0;i<n;i++) //base case 1
{
    dp[i][i]=1;
}
for (int len = 2; len <= n; ++len) {
    for (int i = 0; i < n - len + 1; ++i) {
        int j = i + len - 1;
        if(len == 2 && s[i]==s[j]) //base case 2
        {
            dp[i][j]=2;
        }
        else if(s[i]==s[j])
        {
            dp[i][j]=dp[i+1][j-1]+2;
        }
        else{
            dp[i][j]=std::max(dp[i+1][j],dp[i][j-1]);
        }
    }
}
return dp[0][n-1];
}
int main()
{
    std::string val="bbbab";
    std::cout<<"Longest palindromic string is of length : "<<getlps(val)<<std::endl;
    return 0;
}