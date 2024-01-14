/**
 * C++ 11 concept 
 * program : auto can store any type of data type 
*/
 
#include <iostream>
#include <vector>

int main() {
    auto number = 10; //int
    auto name = "John"; //const char *
    auto pi = 3.14; // double

    std::cout << "number: " << number << std::endl; // int
    std::cout << "name: " << name << std::endl; // const char*
    std::cout << "pi: " << pi << std::endl; // double

    auto numbers = {1, 2, 3, 4, 5}; //initializer list
    auto size = numbers.size(); //std::size_t
    std::cout << "size: " << size << std::endl; // std::vector<int>::size_type
    auto a=1,b=10,c=5;  // initilizing multuple varable as auto if all are of same data type
    // auto n=1,m=5.2; //Error: conflicting declaration
    return 0;
}
