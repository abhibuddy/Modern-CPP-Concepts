/**
 * C++ 11 concept
 * Program: this keyword/tag ensures that the method will not return anything
*/
#include <iostream>
using namespace std;
//this function will not return in any circumstances 
[[noreturn]]void errorFunction()
{
    //terminates the program
    std::exit(1);
}
int main(){
    errorFunction();
    //further lines will never get executed
    std::cout<<"further program"<<std::endl;
return 0;
}