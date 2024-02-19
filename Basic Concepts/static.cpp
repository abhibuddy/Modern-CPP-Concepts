#include <iostream>

//-------------static member variable---------------------
/**
 * static member function
 * static member varible
 * local static varible
 * inline static initialization (c++17)
*/
class MyClass{
public:
static void print()
{
 std::cout<<"Hello from static member function"<<std::endl;
}
void printValue()
{
std::cout<<"static member varible value : "<<myvaribale<<std::endl;
}
void printlocal()
{
static int localvariable = 10 ;
localvariable++;
std::cout<<"static local varible value : "<<localvariable<<std::endl;
}
static int myvaribale;
inline static int innervarible = 25; //C++17 (inline static varible initilization)
private:
//static int myvaribale;
};
int MyClass::myvaribale = 10;

int main()
{
MyClass obj1;
obj1.printValue(); 
MyClass::myvaribale = 100; // as this varible is public and can be modified from classname itself
obj1.printValue();
std::cout<<"inline static varible : "<<MyClass::innervarible<<std::endl;
MyClass obj2;
obj2.printlocal(); //although it is a local varible but it has value retained accross object 
obj2.printlocal();
obj1.printlocal();
MyClass::print();
}
