#include <iostream>
using namespace std;

int main()
{
    auto value = [](int x, int y){return x+y;};
    static_assert(value(10,20) == 30,"this comparision is not correct");
    return 0;
}