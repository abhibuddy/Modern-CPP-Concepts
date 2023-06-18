/*
program : array container takes <datatype,count> and other operations are same as vector
*/
#include <iostream>
#include <array>
using namespace std;

int main()
{

    array<int,5> arr= {1,2,3,4,5};
    for(auto& i:arr)    // call by reference
    {   i=i*2;
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
    for(auto i:arr)    //call by value
    {
        std::cout<< i <<" ";
    }
    std::cout<<std::endl;
    return 0;
}