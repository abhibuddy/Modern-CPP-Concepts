#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Observer;
class Car
{
    public:
    int position;
    std::vector<class Observer*> observerList;
    int getPosition()
    {
        return position;
        notify();
    }
    void setPosition(int newPosition)
    {
        position = newPosition;
        notify();
    }
    void attach(Observer *obs)
    {
        observerList.push_back(obs);
    }
    void notify();

};

class Observer{
Car *_car;
public:
Observer(Car *car)
{
    _car= car;
    _car->attach(this);
}
virtual void update() = 0;
protected:
Car* getCar()
{
    return _car;
}
};
void Car::notify()
{
    for(int i=0;i<observerList.size();i++)
    {
        observerList[i]->update();
    }
}
class Leftobserver : public Observer
{
    public:
    Leftobserver(Car *car):Observer(car){}
    void update()
    {
        int pos = getCar()->getPosition();
        if(pos <  0 )
        {
            cout << "Left side \n";
        }
    }
};
class Rightobserver : public Observer
{
    public:
    Rightobserver(Car *car):Observer(car){}
    void update()
    {

        int pos = getCar()->getPosition();
        if(pos >  0 )
        {
            cout << "Right side \n";
        }
    }
};
class Middleobserver : public Observer
{
    public:
    Middleobserver(Car *car):Observer(car){}
    void update()
    {

        int pos = getCar()->getPosition();
        if(pos ==  0 )
        {
            cout << "Middle Position \n";
        }
    }
};
int main()
{
    Car *car = new Car();
    Leftobserver leftobserver(car);
    Rightobserver rightobserver(car);
    Middleobserver middleobserver(car);
    cout<<"Press l(left) r(right) m(middle) and b(break)\n";
    char buttonPressed;
    bool breakloop = false;
    while(breakloop == false)
    {
        cin>>buttonPressed;
        switch (buttonPressed)
        {
        case 'l':
            car->setPosition(-1);
            break;
        case 'm':
            car->setPosition(0);
            break;
        case 'r':
            car->setPosition(1);
            break;
        case 'b':
            breakloop = true;
            break;
        default:
            cout<<"Drive carefully\n";
            break;
        }
    }

    return 0;
}