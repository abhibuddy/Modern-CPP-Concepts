#include <iostream>

bool powerof2(int n)
{
    // number with power 2 has only one bit set
    // 8 -> 1000
    // 7 -> 0111
    // so n & (n-1) will be zero
    return n > 0 && (n & (n-1))==0;
}
int main()
{
    std::cout<<std::boolalpha<<powerof2(8)<<std::endl;
    std::cout<<std::boolalpha<<powerof2(87)<<std::endl;
    std::cout<<std::boolalpha<<powerof2(2)<<std::endl;
    return 0;
}