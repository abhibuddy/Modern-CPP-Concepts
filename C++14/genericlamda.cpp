/**
 * C++ 14 comcept
 * Program: Generic lamda function will take any type of variable as parameter
*/
#include <iostream>
using namespace std;
int main(){
    auto add = [](auto a, auto b){return a+b;};
    std::string first = "Hello";
    std::string second = "World";
    cout<<"adding two integer "<<add(5,10)<<"\n"; // using int as parameter
    
    cout<<"adding two string "<<add(first, second)<<"\n"; // using int as parameter
    return 0;
}