/**
 * C++11 concept
 * Program : use of tuple and tie() method 
*/
#include<iostream>
#include<tuple>
using namespace std;

int main()
{
    auto player = std::make_tuple("Abhishek",25,"Kumar");
    std::cout<<"first name : "<<std::get<0>(player)<<std::endl; // using std::get<n>(tuplename) method to fetch the value
    std::cout<<"age : "<<std::get<1>(player)<<std::endl; // using std::get<n>(tuplename) method to fetch the value
    std::cout<<"last name : "<<std::get<2>(player)<<std::endl; // using std::get<n>(tuplename) method to fetch the value

    int palyerage;
    tie(ignore,palyerage,ignore) = player; // fetching the indivisual values from tuple using tie()
    std::cout<<"playerage : "<<palyerage<<std::endl;
    return 0;
}