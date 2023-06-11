#include <iostream>

using namespace std;

int sum(initializer_list<int> list)
{
    int total= 0;
    for(const auto& i:list )
    {
        total+=i;
    }
    return total;
}
int main()
{
    auto list = {10,20,30,50};
    std::cout<<sum(list);
    return 0;
}