/**
 * c++ 11 concept
 * program : initializer_list is similar to list {a,b,c} with collection of same datatype
*/
#include <iostream>
using namespace std;

int sum(initializer_list<int> list)
{
    int total {0}; //initailize variable now like this
    for(const auto& i:list )
    {
        total+=i; // accessing values in initilizer_list 
    }
    return total;
}
int main()
{
    //this is a std::initializer_list<int>
    auto list = {10,20,30,50}; //by default it will come like initializer list
    std::cout<<"sum of all the values in initailizer list is : "<<sum(list);
    return 0;
}