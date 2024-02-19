/**
 * C++14 
 * using 0b / 0B in starting of binary 
*/
#include <iostream>
using namespace std;

int main()
{
    int num1 = 0b1010; //0b in the start of binary
    int num2 = 0B1111; //0B also can be used
    std::cout<<"num 1 : "<< num1 <<std::endl; //storing binary in integer the value in output is an integer
    std::cout<<"num 2 : "<< num2 <<std::endl; // integer output
    return 0;
}
