/**
 * structure is similar to class only thing it by default the access is public
*/
#include <iostream>

struct Rectangle
{
int length;
int breadth;
Rectangle(int l, int b):length(l),breadth(b){}
int area()
{
    return length*breadth;
}
};
int main()
{
    Rectangle rect(3,4);
    std::cout<<"Area of rectangle :"<<rect.area()<<std::endl;
    return 0;
}