/*
*C++20 concept
*Program "using" can be used to give an alias to a datatype
*/
#include <iostream>
#include <vector>
using namespace std;

template<class T>
using numbers = std::vector<T>; //alias for vector

int main()
{
    numbers<int> v = {10,20,30};
    for(auto& i:v)
    {
        std::cout<<i<<" ";
    }
    return 0;
}