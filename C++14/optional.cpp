/**
 * c++14 concept 
 * wrap return type with std::optional<returntype>
 * {} or nullopt can be used for unwanted return type
 * has_value() or .value() can be used to check or fetch the value 
*/
#include <iostream>
#include <optional>
using namespace std;

std::optional<int> devide(int a, int b)
{
if(a!=0)
{
    return b/a;
}
else {
    return {};
    //return nullopt; // {} or nullopt can be used for unwanted case 
}

}
int main()
{
    std::optional<int> result = devide(0,15);
    if(result.has_value())
    {
        std::cout<<result.value()<<std::endl;
    }
    else
    {
        std::cout<<"can't divide with 0"<<std::endl;
    }
    return 0;
}