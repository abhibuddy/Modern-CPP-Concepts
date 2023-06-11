#include <iostream>

using namespace std;
//after putting constexpr value will be calculated at compile time only 
// only small calculations should be made constexpr
constexpr int square(int a)
{
    return a*a;
}
int main()
{
    std::cout<<"square : "<<square(5)<<std::endl;
    return 0;
}