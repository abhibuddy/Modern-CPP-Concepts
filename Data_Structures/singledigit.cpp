#include <iostream>

int sumofdigit(int num)
{
    int sum = 0;
    while(num !=0)
    {
        sum+=num%10;
        num /=10;
    }
    return sum;
}

int main()
{
    int val = 555;
    while(val>9)
    {
        std::cout<<"number under process : "<<val<<std::endl;
        val=sumofdigit(val);
    }
    std::cout<<"final result : "<<val<<std::endl;
}