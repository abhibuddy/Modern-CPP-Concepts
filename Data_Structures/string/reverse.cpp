#include <iostream>

int main()
{
    char str[] = "Hello";
    int start = 0;
    int end = 4;
    while(start < end )
    {
        std::swap(str[start],str[end]);
        start++;
        end--;
    }
    std::cout<<"Reversed string is : "<<str;
    return 0;
}