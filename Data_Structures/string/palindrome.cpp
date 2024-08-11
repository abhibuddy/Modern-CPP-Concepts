#include <iostream>
// panindromes are the words that are same read from left to right or right to left

int main()
{
    char str[] = "emadame";
    int start = 0;
    int end = 6;
    while(start < end)
    {
        if(str[start] != str[end])
        {
            std::cout<<"Not a palindrome"<<std::endl;
            break;
        }
        start ++;
        end --;
    }
    if(start >= end)
    std::cout<<"Palindrome"<<std::endl;
    return 0;
}