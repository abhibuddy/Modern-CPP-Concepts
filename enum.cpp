#include <iostream>
using namespace std;

//enum class prevents from anytype of name collision 
enum class Color 
{
Red,Green,Blue
};
int main()
{
    Color c = Color::Green;
    if(c == Color::Red)
    {
        std::cout<<"colur is Red"<<std::endl;
    }
    else if (c == Color::Green)
    {
        std::cout<<"colur is Green"<<std::endl;
    }
    else
    {
        std::cout<<"colur is Blue"<<std::endl;
    }
    return 0;
}