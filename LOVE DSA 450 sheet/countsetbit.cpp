#include<iostream>

int countsetbit(int num)
{
    int count = 0;
    while(num)
    {
        count += num & 1; // checking the least significan bit one by one
        num >>=1; // right sifting the number by 1 i.e. dividing by till it become 0

    }
    return count;
}
int main()
{
    std::cout<<countsetbit(29)<<std::endl;
    return 0;
}