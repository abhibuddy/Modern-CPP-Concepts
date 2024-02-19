/**
 * "this" keyword points to the current object and help to point to current object inside the member function
*/
#include<iostream>

class MyClass
{
public:
MyClass(int value):m_value(value){};
void printValue()
{
    std::cout<<"value : "<<m_value<<std::endl;
    std::cout<<"address of the object : "<<this<<std::endl;
}
void setValue(int value)
{
    this->m_value=value;
}
private:
int m_value;
};

int main()
{   MyClass obj1(10);
    MyClass obj2(20);
    obj1.printValue();
    obj2.printValue();
    obj1.setValue(30);
    obj1.printValue();
    return 0;
}