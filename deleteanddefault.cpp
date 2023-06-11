#include <iostream>
using namespace std;

class Myclass{
    public:
    Myclass()=default;
    Myclass(const Myclass&)=delete;
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