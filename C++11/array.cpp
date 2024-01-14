/*
C++11 CONCEPT : 
program : array container takes <datatype,count> and other operations are same as vector
*/
#include <iostream>
#include <array>
using namespace std;

int main()
{

    array<int,5> arr= {1,2,3,4,5}; //size of array is fixed
    std::cout<<"accessing array call by reference : \n"<<std::endl;
    for(auto& i:arr)    // call by reference
    {   i=i*2;
        std::cout<<i<<" ";
    }
    std::cout<<"\naccessing array call by value : \n"<<std::endl;
    for(auto i:arr)    // call by value
    {
        std::cout<< i <<" ";
    }
    
    return 0;
}