#include <iostream>
#include <vector>
#include <climits>
int maxprofit(std::vector<int>& arr)
{
int minprice = arr[0];
int maxprofit = 0;
for(int i=1;i<arr.size();i++)
{
        int cost = arr[0]-minprice;
        maxprofit = std::max(maxprofit,cost);
        minprice = std::min(minprice,arr[i]);
    
}
return maxprofit;
}
int main() {
    std::vector<int> prices = {7, 1, 5, 3, 6, 4};

    int profit = maxprofit(prices);

    if (profit > 0) {
        std::cout << "Maximum profit is: " << profit << std::endl;
    } else {
        std::cout << "No profit can be made." << std::endl;
    }

    return 0;
}