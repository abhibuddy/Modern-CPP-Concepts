/**
 * SOLID PRINCIPLES
 * I : Interface Segregation Principle
 * any class should not get forced to implement some method
 * SRP: One class, one responsibility.
*  OCP: Open for extension, closed for modification.
*  LSP: Subtypes must be substitutable for their base types.
*  ISP: Many client-specific interfaces are better than one general-purpose interface.
*  DIP: Depend on abstractions, not on concretions.
*/

class Eatable
{
    public:
    virtual void eat()=0;
};
class Doable
{
    public:
    virtual void doing()=0;
};
class Roboot:public Doable
{
    public:
    void doing() override
    {
        // roboot doing something
    }
};
class Human : public Eatable,public Doable
{
    public:
    void doing() override
    {
        // human doing something 
    }
    void eat() override{
        // human eating something
    }
};

int main()
{
    return 0;
}