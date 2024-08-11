/*
factory design pattern : let's design a toy fectory that can create any toy : car & doll. 
So instead of directily creting a toy ask fectory to create it for you. 
*/

#include <iostream>
#include <memory>
class Toy{
public : 
virtual void makesound() const =0; // pure virtual function
virtual ~Toy()=default; // destructor
};

class Car : public Toy{
public : 
void makesound() const override
{
    std::cout<<"Car : \"Whroom Whroom\""<<std::endl;
}
};
class Doll : public Toy{
public : 
void makesound() const override
{
    std::cout<<"Doll : \"Hello\""<<std::endl;
}
};
class ToyFectory{
public:
enum class Toytype { 
    Cartype,
    Dolltype
};
std::unique_ptr<Toy> createtoy(Toytype type){
    switch(type)
    {
        case Toytype::Cartype:
            return std::make_unique<Car>();
        case Toytype::Dolltype:
            return std::make_unique<Doll>();
        default:
        return nullptr;
    }
}
};

int main()
{
    ToyFectory fectory;
    std::unique_ptr<Toy> toy1 = fectory.createtoy(ToyFectory::Toytype::Cartype);
    if(toy1)
    {
        toy1->makesound();
    }
    std::unique_ptr<Toy> toy2 = fectory.createtoy(ToyFectory::Toytype::Dolltype);
    if(toy2)
    {
        toy2->makesound();
    } 
    return 0;
}

