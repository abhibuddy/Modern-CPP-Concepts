#include <iostream>
#include <any>
/*
program: use of std::any  and std::any_cast<datatype>(varible)
*/
int main()
{
    std::any value = std::string("Hello world");
 
    std::cout<<"value type : "<<value.type().name()<<std::endl;
    //any_cast<datatype>(variable)
    std::cout<<"value in string : "<<std::any_cast<std::string>(value)<<std::endl;
    
    //now let's store the double in the same variable 
    value = 1.35;
    std::cout<<"value type : "<<value.type().name()<<std::endl;
    std::cout<<"value in string : "<<std::any_cast<double>(value)<<std::endl;
    
    return 0;
}