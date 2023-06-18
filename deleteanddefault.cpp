#include <iostream>
using namespace std;

class Myclass{
    public:
    Myclass()=default; //default constructor 
    Myclass(const Myclass&)=delete; // deleted copy constructor
    void display()
    {
        std::cout<<"fucntion inside class was called "<<std::endl;
    }
};
int main()
{
    Myclass obj;
    obj.display();
    return 0;
}