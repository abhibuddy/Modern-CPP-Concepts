#include <iostream>
using namespace std;
int main()
{
    int i = 0 ; 
    //without mutable keyword it will throw error like i is read only
    auto generator = [i]() mutable {return ++i;};
    std::cout<<"i : "<<generator()<<std::endl; //1
    std::cout<<"i : "<<generator()<<std::endl; //2
    std::cout<<"i : "<<generator()<<std::endl; //3
    return 0;
}