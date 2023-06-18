/*
callback methods : we can also pass a method as parameter 
and that method can be used later point of time in any function.
these methods are called callback methods
*/
#include <iostream>
#include <vector>
#include <functional>

using namespace std;

void processNumbers(const std::vector<int>& numbers, const std::function<void(int)>& callback)
    {
        for(const auto& num:numbers)
        {
            callback(num); // this function can be latter used in the function
        }       
    }
int main()
{
    std::vector<int> numbers = {10,20,30};
    processNumbers(numbers, [](int num){
    std::cout<<"processed number: "<<num<<std::endl;
    });
    return 0;
}