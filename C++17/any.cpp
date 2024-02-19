#include <iostream>
#include <any>
/*
program: use of std::any  and std::any_cast<datatype>(varible)
*/
int main()
{
    //just like the auto std::any take any value type
    std::any value = std::string("Hello world");
 
    std::cout<<"value type : "<<value.type().name()<<std::endl;
    //any_cast<datatype>(variable) we can cast any variable in any other eligible form
    std::cout<<"value in string : "<<std::any_cast<std::string>(value)<<std::endl;
    
    //now let's store the double in the same variable 
    value = 1.35;
    std::cout<<"value type : "<<value.type().name()<<std::endl;
    std::cout<<"value in double : "<<std::any_cast<double>(value)<<std::endl;
    
    return 0;
}