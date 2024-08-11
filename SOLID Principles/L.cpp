/**
 * SOLID PRINCIPLES
 *  L : Liskov Substitution Principle 
 * object of subclass should be able to replace the superclass without any problem
 * SRP: One class, one responsibility.
*  OCP: Open for extension, closed for modification.
*  LSP: Subtypes must be substitutable for their base types.
*  ISP: Many client-specific interfaces are better than one general-purpose interface.
*  DIP: Depend on abstractions, not on concretions.
*/
#include <iostream>
#include <exception>
class Bird
{
    public:
    virtual void fly();
};
class peagon:public Bird{
    public:
        void fly() override
        {
            //
        }
};
// subclass having problem replacing superclass
class panguine:public Bird{
    public:
    void fly() override
    {
        throw std::runtime_error("penguine can't fly");
    }
};

int main()
{
    return 0;
}