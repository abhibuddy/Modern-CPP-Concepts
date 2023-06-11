#include <iostream>
using namespace std;

class Work
{
public:
int money;
Work(int money):money(money){};
Work():Work(100){};
};
int main()
{
    Work w;
    std::cout<<w.money;
    return 0;
}