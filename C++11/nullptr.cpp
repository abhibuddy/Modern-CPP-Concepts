/*
*C++11 concept
*program : nullptr can be used for pointer 
*/
#include<iostream>
using namespace std;
//void fun(int){}; // not convertable to int except bool
void fun(int* p){
    if(p==nullptr)
    {
        std::cout<<"nullptr"<<std::endl;
    }
}
int main()
{
	fun(nullptr);  //can be implicitely converted pointer type 
 return 0;
}