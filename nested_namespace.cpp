#include <iostream>
/*
nested namespaces are allowed in c++17
*/
namespace outer
{
    namespace innner{
        void print(std::string str){
            std::cout<<str<<std::endl;
        }
    }
}

int main()
{
    outer::innner::print("Hello World");
    return 0;
}