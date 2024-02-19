/**
 * C++ 11 concept : smart pointer
 * Program : use of unique ptr and std::move() application in sharing the ownership
*/
#include <iostream>
#include <memory>

int main()
{
    std::unique_ptr<int> ptr = std::make_unique<int>(42);
    std::unique_ptr<int> ptr1 = std::move(ptr);

    // now only ptr1 owns the value and ptr is pointing to null
    if(ptr1)
    {
        std::cout<<"accessing unique ptr value: "<<*ptr1<<std::endl;
    }
    return 0;
}