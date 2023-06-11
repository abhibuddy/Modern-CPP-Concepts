#include <iostream>

using namespace std;
class A
{
    public:
virtual void fun(){}
};

class B:public A
{
void fun() override
{
}
};

int main()
{
    return 0;
}