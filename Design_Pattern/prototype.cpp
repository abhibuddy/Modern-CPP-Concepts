/*
Prototype design pattern: this design pattern makes cloning easy

*/
#include <iostream>
#include <memory>

//base class 
class Shape
{
    public: 
    virtual void draw()=0;
    virtual std::unique_ptr<Shape> cloneit() const = 0;
    virtual ~Shape() = default;
};
// Rectangle class inherits the base shape class 
class Rectangle:public Shape
{
    public:
    Rectangle(int l,int b): length_(l),breadth_(b){};
    std::unique_ptr<Shape> cloneit() const override
    {
        return std::make_unique<Rectangle>(*this);
    }
    void draw() override
    {
        std::cout<<"drawing a rectangle of "<<length_<<" X "<<breadth_<<std::endl;
    }
    private:
    int length_;
    int breadth_;
};

// Circle class inherites the Shape class 
class Circle : public Shape
{
public:
    Circle(int r): radius(r){};
    std::unique_ptr<Shape> cloneit() const override
    {
        return std::make_unique<Circle>(*this);
    }
    void draw() override
    {
        std::cout<<"drawing a circle of "<<radius<<std::endl;
    }
    private:
    int radius;
};
int main()
{
    std::unique_ptr<Shape> Rectangle1 = std::make_unique<Rectangle>(10,20);
    std::unique_ptr<Shape> Circle1 = std::make_unique<Circle>(10);
    
    std::unique_ptr<Shape> Circle2 = Circle1->cloneit(); //just use the clone method
    std::unique_ptr<Shape> Rectangle2=Rectangle1->cloneit(); // just use the clone method
    //drawing the newly created circle 
    Circle2->draw();
    
    //drawing the newly created rectangle
    Rectangle2->draw();
    
    return 0;
}