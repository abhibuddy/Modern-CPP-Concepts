/**
 * variant is a c++17 concept
 * the std::variant<various types that value can take>
 * .index() --> to get the type the value is holding
 * std::get<type>(variable) to fetch the value from variable
 * 
*/
#include <iostream>
#include <variant>
using namespace std;

int main()
{
    //below variant can store int double and string as defined
    std::variant<int, double , std::string > v;
    //store int value in variant 
    v= 8;
    std::cout<<"stored value is of type : "<<v.index()<<std::endl;
    std::cout<<"stored value : "<<std::get<int>(v)<<std::endl;
    //let's store double value in same variable 
    v= 12.5;
    std::cout<<"stored value is of type : "<<v.index()<<std::endl;
    std::cout<<"stored value : "<<std::get<double>(v)<<std::endl;
    return 0;
}