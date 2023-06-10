#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Iterate over each element in the vector using range-based for loop
    for (int number : numbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;

    return 0;
}
