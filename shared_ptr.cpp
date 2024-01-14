#include <iostream>
#include <memory> //for shared_ptr
using namespace std;
class Resource
{
public:
Resource(){
std::cout<<"reaource aquired..."<<std::endl;
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
ptr1.reset();
ptr1->doSomething();
ptr2->doSomething();
std::cout<<"use count for ptr1 : "<<ptr1.use_count()<<std::endl;
std::cout<<"use count for ptr2 : "<<ptr2.use_count()<<std::endl;
ptr2.reset();
ptr1->doSomething();
ptr2->doSomething();
std::cout<<"use count for ptr1 : "<<ptr1.use_count()<<std::endl;
std::cout<<"use count for ptr2 : "<<ptr2.use_count()<<std::endl;
return 0;
}