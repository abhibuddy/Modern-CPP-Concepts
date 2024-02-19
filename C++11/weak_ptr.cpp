/**
 * C++ 11 concept : smart pointer
 * Program : use of weak ptr
*/
#include <iostream>
#include <memory>

int main()
{
    std::shared_ptr<int> ptr = std::make_shared<int>(42);
    std::weak_ptr<int> weak_ptr = ptr;

    //in order to access the value of weak ptr we need to lock the value
    // ptr still have the access of value
    if(auto shared_ptr = weak_ptr.lock() )
    {
        std::cout<<"accessing weak ptr value: "<<*shared_ptr<<std::endl;
    }
    return 0;
}