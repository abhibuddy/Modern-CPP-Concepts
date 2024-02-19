/**
 * C++ 11 concept
 * Program : use of map container 
*/
#include <iostream>
#include <map>
using namespace std;
/*
insert(std::make_pair(key,value))
clear()
erase(key)
erase(itr)
size()
empty()
count(key)
find(key)
itr-> begin() end()
*/
int main()
{

    std::map<int,int> m;
    if(m.empty()) // check if map is empty or not
    {
        std::cout<<"map is empty"<<std::endl;
    }
    m.insert(std::make_pair(1,10));
    m.insert(std::make_pair(2,20));
    m.insert(std::make_pair(3,30));
    m.insert(std::make_pair(4,40));
    std::cout<<"total 3 is present "<<m.count(3)<<std::endl; //count of element in map
    if(m.find(2)!=m.end()) //finding element in map 
    {
        std::cout<<"element is present"<<std::endl;
    }

    m.clear(); // clears all the elements
    std::cout<<"size of map : "<<m.size()<<std::endl;
    return 0;
}