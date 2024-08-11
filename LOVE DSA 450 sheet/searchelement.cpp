#include <iostream>
#include <vector>

bool checkelement(const std::vector<std::vector<int>>& matrix,int target)
{
    for(auto rows : matrix)
    {
        for(auto element : rows)
        {
            if(element == target)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
        std::vector<std::vector<int>> matrix = {
        {3, 8, 4},
        {1, 5, 9},
        {6, 7, 2}
    };

    int target = 5;
    bool found = checkelement(matrix, target);

    if (found) {
        std::cout << "Element found in the matrix." << std::endl;
    } else {
        std::cout << "Element not found in the matrix." << std::endl;
    }

    return 0;
}