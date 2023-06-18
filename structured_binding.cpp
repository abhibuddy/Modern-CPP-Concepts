/*
unpacking any containers and storing it's value in respective memebers
*/
#include<iostream>
#include <tuple>

using namespace std;

int main()
{
    int arr[] = {1,5,6}; //normal integer array
    //tuple
    //std::tuple<int, double,std::string> t = {1,12.5,"Abhishek"};
    //auto [a,b,c] = t; //structured binding tuple
    auto [a,b,c] = arr; // structured binding array
    std::cout<<"a : "<< a<<"\nb : "<<b<<"\nc : "<<c;
    return 0;
}