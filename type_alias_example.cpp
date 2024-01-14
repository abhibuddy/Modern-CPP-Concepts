#include <iostream>
#include <vector>
using namespace std;
//we can do type_alias by using keyword
using IntVect = std::vector<int>;
//we can use typedef 
typedef double Distance;
int main()
{
    Distance d=3.125;
    IntVect v={10,20,3};
    return 0;
}