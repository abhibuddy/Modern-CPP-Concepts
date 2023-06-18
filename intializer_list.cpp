#include <iostream>
using namespace std;

int sum(initializer_list<int> list)
{
    int total {0}; //initailize variable now like this
    for(const auto& i:list )
    {
        total+=i;
    }
    return total;
}
int main()
{
    //this is a std::initializer_list<int>
    auto list = {10,20,30,50};
    std::cout<<sum(list);
    return 0;
}