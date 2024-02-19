/**
 * C++14 concpets 
 * Program: deligating constructor use to make use of another constructor from one constructor
*/
#include <iostream>
using namespace std;

class Work
{
public:
int money;
Work(int money):money(money){}; // constructor with parameter
Work():Work(100){};  // constructor using above method 
};
int main()
{
    Work w;
    std::cout<<w.money;
    return 0;
}