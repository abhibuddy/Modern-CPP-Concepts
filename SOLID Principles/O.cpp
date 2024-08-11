/**
 * SOLID PRINCIPLES
 * O : Open/Closed Principle
* SRP: One class, one responsibility.
*  OCP: Open for extension, closed for modification.
*  LSP: Subtypes must be substitutable for their base types.
*  ISP: Many client-specific interfaces are better than one general-purpose interface.
*  DIP: Depend on abstractions, not on concretions.
*/
#include <iostream>
#include <vector>
class shape{
public:
virtual double area() const =0;
};
class rectangle:public shape{
    int l,b;
    public:
    rectangle(int len,int bre):l(len),b(bre){}

    double area() const override
    {
        return l*b;
    }
};
class circle:public shape{
    int r;
    public:
    circle(int rad):r(rad){};
    double area() const override
    {
        return 3.14*r*r;
    }
};
double calculatetotalarea(std::vector<shape*>& shapes)
{
    double total = 0;
    for(const auto shape:shapes)
    {
        total += shape->area();
    }
    return total;
}
int main()
{
    
    return 0;
}
