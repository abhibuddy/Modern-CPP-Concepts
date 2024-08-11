#include <iostream>
#include <unordered_set>
#include <vector>

bool pairdifferencetarget(std::vector<int> arr,int diff, std::pair<int,int>& result)
{
    std::unordered_set<int> elements;
    for(auto num:arr)
    {
        if(elements.find(num + diff) != elements.end())
        {
            result = {num,num+diff};
            return true;
        }
        if(elements.find(num - diff) != elements.end())
        {
            result = {num-diff,num};
            return true;
        }
        elements.insert(num);
    }
    return false;
}
int main()
{
    std::vector<int> arr = {5, 20, 3, 2, 50, 80};
    int diff = 78;
    std::pair<int, int> result;

    if (pairdifferencetarget(arr, diff, result)) {
        std::cout << "Pair with given difference " << diff << " is: (" << result.first << ", " << result.second << ")" << std::endl;
    } else {
        std::cout << "No pair with given difference " << diff << " found." << std::endl;
    }
    return 0;
}