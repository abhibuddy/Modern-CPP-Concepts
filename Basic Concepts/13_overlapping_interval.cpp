#include <iostream>
#include<vector>
#include<algorithm>
std::vector<std::vector<int>> merge(std::vector<std::vector<int>> intervals)
{
    std::sort(intervals.begin(),intervals.end());
    std::vector<std::vector<int>> results;
    results.push_back(intervals[0]);
    for(size_t i =1;i<intervals.size();i++)
    {
        std::vector<int>& last = results.back();
        if(intervals[i][0]<=last[1])
        {
            last[1]=std::max(last[1],intervals[i][1]);
        }
        else{
            results.push_back(intervals[i]);
        }
    }
    return results;
}
int main()
{
    std::vector<std::vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    std::vector<std::vector<int>> merged = merge(intervals);
    std::cout << "Merged Intervals: ";
    for (const auto& interval : merged) {
        std::cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }
    return 0;
}