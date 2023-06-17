#include <iostream>
#include <string_view>

void print(std::string_view strView)
{
    //size() length() substr() find()
    std::cout<<"string view : "<<strView<<std::endl;
    std::cout<<"length of string : "<<strView.length()<<std::endl;
}
int main()
{
    std::string str = "Hello world";
    std::string_view strView(str);
    print(strView);
    return 0;
}