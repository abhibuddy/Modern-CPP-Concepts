#include <iostream>
//convert to uppercase

int main()
{   char str[]="HelloWorld";
    for(int i =0;i<sizeof(str)/sizeof(char);i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
    }
    std::cout<<str;
    return 0;
}