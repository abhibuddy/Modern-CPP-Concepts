#include <iostream>
#include <vector>

int main() {
    auto number = 10;
    auto name = "John";
    auto pi = 3.14;

    std::cout << "number: " << number << std::endl; // int
    std::cout << "name: " << name << std::endl; // const char*
    std::cout << "pi: " << pi << std::endl; // double

    auto numbers = {1, 2, 3, 4, 5};
    auto size = numbers.size();
    std::cout << "size: " << size << std::endl; // std::vector<int>::size_type

    return 0;
}
