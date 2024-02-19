/**
 * C++11 concept
 * Program: noexcept keyword guarantee that the given function will not throw error in runtime env
*/
#include <iostream>

using namespace std;

void funct1() noexcept
{
    //function 1 not throwing any error
}
void funct2() noexcept(noexcept(funct1())) // ==> noexcept(true) ===> noexcept
{
    //function 2 not throwing any error
}
void funct3()
{
    throw std::runtime_error("Exception");
}
int main()
{
    std::cout<<std::boolalpha;
    std::cout<<"function 1:"<<noexcept(funct1())<<std::endl;
    std::cout<<"function 2:"<<noexcept(funct2())<<std::endl;
    std::cout<<"function 3:"<<noexcept(funct3())<<std::endl;
    return 0;
}