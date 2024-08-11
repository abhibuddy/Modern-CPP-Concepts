#include <iostream>

bool isOdd(int num)
{
    return num & 1 ; // 1 -> odd 0 -> even 
}
int main()
{
    bool result = isOdd(5);
    std::cout<<std::boolalpha<<result<<std::endl;
    return 0;
}