/**
 * c++11 concept
 * "assert" used for runtime assertion and "static_assert" used for compile time assertion
*/
#include <iostream>
#include <cassert>
using namespace std;

int main()
{
    int x=5;
    assert(x==5);
    std::cout<<"runtime assertion was performed"<<std::endl;
    auto value = [](int x, int y){return x+y;};
    static_assert(value(10,20) == 30,"this comparision is not correct");
    std::cout<<"compile time assertion was performed"<<std::endl;
    return 0;
}