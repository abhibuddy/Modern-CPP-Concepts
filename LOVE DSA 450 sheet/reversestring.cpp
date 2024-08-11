#include <iostream>

void reversestr(std::string& str)
{
    int start =0;
    int end = str.length()-1;
    std::cout<<"reversing the string :"<<std::endl;
    while(start <= end)
    {
        std::swap(str[start],str[end]);
        start++;
        end--;
    }

}
int main()
{
    std::string str = "Hello";
    reversestr(str);
    std::cout<<str<<std::endl;
    return 0;
}