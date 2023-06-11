#include<iostream>
#include<tuple>
using namespace std;

int main()
{
    auto player = std::make_tuple("Abhishek",25,"Kumar");
    //using get<index>(tuple) to fetch the value
    std::cout<<"first name : "<<std::get<0>(player)<<std::endl;
    std::cout<<"age : "<<std::get<1>(player)<<std::endl;
    std::cout<<"last name : "<<std::get<2>(player)<<std::endl;

    int palyerage;
    //tie variables to the tuple for easy fetch
    tie(ignore,palyerage,ignore) = player;
    std::cout<<"playerage : "<<palyerage<<std::endl;
    return 0;
}