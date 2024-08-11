/* 
Builder Pattern :  
*/
#include <iostream>

class House
{
public:
void setWall(const std::string& wall) {
    wall_=wall;
};
void setRoof(const std::string& roof) {
    roof_=roof;
};
void setDoor(const std::string& door) {
    door_=door;
}
void setWindow(const std::string window) {
    window_=window;
};
void show()
{
    std::cout<<"House with "<<wall_<<" walls "<<roof_<<" roofs "<<door_<<" doors "<<window_<<" window "<<std::endl;
}
private:
    std::string wall_;
    std::string roof_;
    std::string door_;
    std::string window_;
};
//builder interface
class Housebuilder{
public:
virtual ~Housebuilder()=default; //virtual constructor
virtual void buildWall() = 0;
virtual void buildRoof() = 0;
virtual void buildWindow() = 0;
virtual void buildDoor() = 0;
virtual House* gethouse()=0;
};

class ConcreteHousebuilder : public Housebuilder
{
public:
ConcreteHousebuilder(){house_ = new House();}
void buildWall() override
{
    house_->setWall("Concrete Wall");
}
void buildWindow() override
{
    house_->setWindow("Concrete Window");
}
void buildRoof() override
{
    house_->setRoof("Concrete Roof");
}
void buildDoor() override
{
    house_->setDoor("Concrete Door");
}
House* gethouse() override{
    return house_;
}
private:
House* house_;
};

class ConstructionEngineer
{
public:
void setBuilder(Housebuilder* builder)
{
    builder_=builder;
}
void constructHouse()
{
    builder_->buildDoor();
    builder_->buildRoof();
    builder_->buildWindow();
    builder_->buildWall();
}
private:
Housebuilder* builder_;
};
int main()
{
    ConcreteHousebuilder builder;
    ConstructionEngineer engineer;
    engineer.setBuilder(&builder);
    engineer.constructHouse();

    House* house = builder.gethouse();
    house->show();
    return 0;
}