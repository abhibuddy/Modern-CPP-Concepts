#include <iostream>
#include <vector>
#include <algorithm>

bool compare(std::pair<int ,int> a, std::pair<int,int> b)
{
    return a.second < b.second;
}

int main()
{
    std::vector<std::pair<int, int>> arr = {{3, 4}, {1, 2}, {5, 0}, {3, 2}, {1, 3}};
    std::sort(arr.begin(),arr.end(),compare);
    for (const auto& p : arr) {
        std::cout << "(" << p.first << ", " << p.second << ")" << std::endl;
    }
    return 0;
}