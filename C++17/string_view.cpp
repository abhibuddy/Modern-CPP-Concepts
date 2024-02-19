/**
 * C++ 17 concept
 * use of string_view 
*/
#include <iostream>
#include <string_view>

void print(std::string_view strView)
{
    //svarious operations that we can perform on top of string_view
    //size() length() substr() find()
    std::cout<<"string view : "<<strView<<std::endl;
    std::cout<<"length of string : "<<strView.length()<<std::endl;
}
int main()
{
    std::string str = "Hello world";
    std::string_view strView(str);
    print(strView);
    str[1]='F'; //string_view don't holds the ownership of str
    // any change made to orignal string will be reflected in the string_view also
    print(strView);
    return 0;
}