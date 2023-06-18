#include <iostream>
#include <set>
using namespace std;

int main()
{
    std::set<int> data = {5,10,15,20};
// we can now initailize the variables inside if and switch statement
    if(auto it = data.find(7); it != data.end())
    {
        std::cout << "value "<< 7 << "found in set";
    }
    else
    {
        std::cout << "value "<< 7 << " not found in set";
    }
    return 0;
}