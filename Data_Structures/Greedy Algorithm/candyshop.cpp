#include <iostream>
#include <algorithm>
#include <vector>

std::vector<int> minmaxcandy(std::vector<int> candies,int k)
{
    sort(candies.begin(),candies.end());
    int n = candies.size();

    int min = 0;
    int buy = 0 ;
    int freepick=n-1;
    while (buy <= freepick)
    {
        min += candies[buy];
        buy+=1;
        freepick-=k;
    }
    int max = 0;
    buy = n-1 ;
    freepick=0;
    while (freepick<=buy)
    {
        max += candies[buy];
        buy--;
        freepick+=k;
    }
    std::vector<int> ans;
    ans.push_back(min);
    ans.push_back(max);
    return ans;
}
int main()
{
    std::vector<int> candies = {3,2,1,4};
    std::vector<int> result = minmaxcandy(candies,2);
    std::cout<<"Minimum amount to buy all candies : "<<result[0]<<std::endl;
    std::cout<<"Maximum amount to buy all candies : "<<result[1]<<std::endl;

    return 0;
}