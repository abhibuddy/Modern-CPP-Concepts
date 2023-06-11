#include <iostream>
#include <vector>
using namespace std;

template<class T>
using vec = std::vector<T>;

int main()
{
    vec<int> v = {10,20,30};
    for(auto& i:v)
    {
        std::cout<<i<<" ";
    }
    return 0;
}