/**
 * C++11 concept
 * Program : use of default and deleted keyword
*/
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
    //Myclass obj1=obj; //error : use of deleted function
    obj.display();
    return 0;
}