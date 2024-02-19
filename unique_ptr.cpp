/**
 * C++ concept
 * Program : Unique Pointer
*/
#include <iostream>
#include <memory> // for unique_ptr
using namespace std;

class shape
{
    public:
    virtual void draw() const = 0; // pure virtual method
    virtual ~shape(){}; //virtual destructor for proper polymorphic destruction
};
class circle:public shape
{
    public:
    void draw() const override
    {
        std::cout<<"drawing circle ..."<<std::endl;
    }
};
class rectangle:public shape
{
    public:
    void draw() const override // overriding the pure virual method
    {
        std::cout<<"drawing rectangle ..."<<std::endl;
    }
};
int main()
{
    std::unique_ptr<circle> c=std::make_unique<circle>();
    std::unique_ptr<rectangle> r=std::make_unique<rectangle>();
    c->draw();
    c.release(); // we can use release() to release the ownership
    r->draw();
    r=nullptr; // same we can achive by making it point to nullptr
    return 0;
}