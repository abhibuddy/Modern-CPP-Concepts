/**
 * C++ 11 concept : smart pointer
 * Program : use of shared ptr
*/
#include <iostream>
#include <memory>

int main()
{
    std::shared_ptr<int> ptr = std::make_shared<int>(42);
    std::shared_ptr<int> ptr1 = ptr;

    // ptr1 and ptr both points to the same value and reference count is 2
    if(ptr1)
    {
        std::cout<<"accessing share ptr value: "<<*ptr1<<std::endl;
    }
    return 0;
}