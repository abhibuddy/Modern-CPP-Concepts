#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

int findMinDiff(std::vector<int>& chocolates,int chocsize,int numofstu)
{
if(chocsize==0||numofstu==0)
{
    return 0;
}
if(numofstu>chocsize)
{
 return -1; // not enough choclate packets
}
sort(chocolates.begin(),chocolates.end());
int min_diff= INT_MAX;
// sliding window
for(int i=0;i+numofstu-1<chocsize;i++)
{
    int diff = chocolates[i+numofstu-1]-chocolates[i];
    if(diff<min_diff)
    {
        min_diff=diff;
    }
}
return min_diff;
}
int main()
{
    std::vector<int> chocolates = {12, 4, 7, 9, 2, 23, 25, 41, 30, 40, 28, 42, 30, 44, 48, 43, 50};
    int m = 7; // Number of students

    int n = chocolates.size();
    int result = findMinDiff(chocolates, n, m);
    for(auto chosize:chocolates)
    {
        std::cout<<chosize<<" ";
    }
    if (result != -1) {
        std::cout << "\nMinimum difference is " << result << std::endl;
    } else {
        std::cout << "Not enough packets for the number of students" << std::endl;
    }
    return 0;
}