/**
 * C+11 concept
 * Program : use of decltype() and <typeinfo> typeid() 
*/
#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    int x = 5;
    const double& y = 3.145;
    decltype(x) a = x; // to provide a the same datatype as x i.e. int
    decltype(y) b = 2.15; // to provide b the same datatype as y i.e. double&

    std::cout<<"type of a : "<< typeid(a).name() <<std::endl;
    std::cout<<"type of b : "<< typeid(b).name() <<std::endl;
    return 0;
}