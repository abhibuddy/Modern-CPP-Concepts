/**
 * C++ 11 concept
 * Program : various type of lambda functions
*/
#include <iostream>
using namespace std;

int main()
{
     // Lambda expression that takes no arguments
    [](){
        std::cout << "Hello, Lambda!" << std::endl;
    }();
      // Lambda expression that takes two integer arguments
    [](int a, int b){
        std::cout << "Sum: " << (a + b) << std::endl;
    }(5, 3);
     int x = 5;

    // Lambda expression with capture clause
    [x]() {
        std::cout << "Captured value: " << x << std::endl;
    }();
    auto modify_x=[&x]{
        x=2;
        return x;
    };
    cout<<"Modified value of X : "<<modify_x();
        // Lambda function that takes two integer parameters
    auto sum = [](int a, int b) {
        return a + b;
    };

    int result = sum(5, 3);
    std::cout << "\nSum: " << result << std::endl;
    return 0;
}