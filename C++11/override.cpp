/**
 * C++11 concept
 * Override keyword shows the method has been overriden in child class
*/
#include <iostream>
using namespace std;
class A
{
    public:
virtual void fun(){}
};

class B:public A
{
// overrride keywords to be used when overriding methods 
void fun() override
{
}
};

int main()
{
    return 0;
}