#include <iostream>
using namespace std;
[[deprecated("this function has been deprecated pleaase use newFunct")]]
void deprecatedFunct()
{
    std::cout<<"old fucntion ..."<<std::endl;
}
void newFunct()
{
    std::cout<<"new fucntion ..."<<std::endl;
}
int main()
{
    deprecatedFunct(); //deprecated function
    newFunct(); // new function
    return 0;
}