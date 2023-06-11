#include <iostream>

using namespace std;
auto sum(int a, double b) ->decltype(a+b)
{
    return a+b;
}
int main()
{
    std::cout<<sum(5,1.2);
    return 0;
}