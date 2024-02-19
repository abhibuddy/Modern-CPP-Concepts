/**
 * c++11 concept
*/
#include <iostream>
using namespace std;
int main()
{
    int i = 0 ; 
    //without mutable keyword it will throw error as i has been captured as read only
    auto generator = [i]() mutable {return ++i;};
    std::cout<<"i is still same : "<<i<<" generator value has changed: "<<generator()<<std::endl; //1
    std::cout<<"i is still same : "<<i<<" generator value has changed: "<<generator()<<std::endl; //2
    std::cout<<"i is still same : "<<i<<" generator value has changed: "<<generator()<<std::endl; //3
    return 0;
}