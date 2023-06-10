#include <iostream>
#include <vector>
#include <map>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::string str = "Hello world";

    std::map<std::string, int> studentScores = {{"Alice", 85}, {"Bob", 92}, {"Charlie", 78}};
    int arr[] = {1, 2, 3, 4, 5};

    // Iterate over each element in the array using range-based for loop
    for (int element : arr) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Iterate over each element in the vector
    std::cout << "Numbers: ";
    for (int number : numbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;

    // Iterate over each key-value pair in the map
    std::cout << "Student Scores: ";
    for (const auto& entry : studentScores) {
        std::cout << entry.first << ": " << entry.second << " ";
    }
    std::cout << std::endl;
    // Iterate over each character in the string using range-based for loop
    for (char c : str) {
        std::cout << c << " ";
    }
    std::cout << std::endl;
    return 0;
}
