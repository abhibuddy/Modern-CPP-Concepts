/*
Singleton Pattern: Imagine you have a special toy that only one person can play with at a time.
The Singleton pattern makes sure that there's only one toy, and everyone has to share it.
*/
#include <iostream>
using namespace std;
class Toy{
public:
static Toy* getInstance()
{
    if(!instance)
    {
        instance = new Toy(); 
    }
    return instance;
}
void play()
{
    std::cout<<"playing with the toy ..."<<std::endl;
}

private:
static Toy* instance; //object made static
Toy(){} // costructor moved to private
};
Toy* Toy::instance = nullptr;

int main()
{
    Toy* myToy = Toy::getInstance();
    myToy->play(); 

    return 0;
}