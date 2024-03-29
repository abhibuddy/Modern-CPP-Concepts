/**
 * C++ 11 concept
 * Program : use of shared pointer concepts like std::shared_ptr<classname>/std::make_shared<class>/.use_count()/.reset()
*/
#include <iostream>
#include <memory> //for shared_ptr
using namespace std;
class Resource
{
public:
Resource(){
std::cout<<"resource aquired..."<<std::endl;
}
~Resource(){
std::cout<<"resource released..."<<std::endl;
}
void doSomething()
{
    std::cout<<"doing something..."<<std::endl;
}
};
int main()
{

std::shared_ptr<Resource> ptr1=std::make_shared<Resource>();
std::shared_ptr<Resource> ptr2=ptr1;
ptr1->doSomething();
ptr2->doSomething();
std::cout<<"use count for ptr1 : "<<ptr1.use_count()<<std::endl;
std::cout<<"use count for ptr2 : "<<ptr2.use_count()<<std::endl;
ptr1.reset(); //release the ownership
ptr1->doSomething();
ptr2->doSomething();
std::cout<<"use count for ptr1 : "<<ptr1.use_count()<<std::endl;
std::cout<<"use count for ptr2 : "<<ptr2.use_count()<<std::endl;
ptr2.reset(); //release the ownership
ptr1->doSomething();
ptr2->doSomething();
std::cout<<"use count for ptr1 : "<<ptr1.use_count()<<std::endl;
std::cout<<"use count for ptr2 : "<<ptr2.use_count()<<std::endl;
return 0;
}