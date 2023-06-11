#include <iostream>

using namespace std;
class A final{}; // can't inherite this class
class P
{
public:
virtual void fun() final {};
};
class Q:public P
{
public:
//can't override final method
//void fun(){}; 
};
int main()
{

    return 0;
}