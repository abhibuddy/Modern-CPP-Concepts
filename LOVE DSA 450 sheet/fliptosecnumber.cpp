#include <iostream>

int main()
{
    int a = 10;
    int b = 7;
    int xorresult = a^b;
    int count = 0;
    while(xorresult)
    {
        count += xorresult & 1; //counting last bit is one or not 
        xorresult >>=1; // keep deviding by 2
    }

    std::cout<<"total number of bits need to be flipped is "<< count;
    return 0;
}