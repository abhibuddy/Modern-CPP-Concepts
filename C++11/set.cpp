/**
 * C++ concept 
 * Program : various concept of set container (set contains only the distict values)
*/
#include <iostream>
#include <set>
/*
various functions that set provides : 
*insert(val)
*size()
*empty()
*erase(val)
*erase(itr)
*clear()
*count(val) 1 or 0
*find(val)
* itr -> begin() end()
*/
int main()
{   // adding value in set
    std::set<int> s;
    s.insert(10); // inserting element in set
    s.insert(15);
    s.insert(20);
    s.insert(30);
    std::cout<<"size : "<<s.size()<<std::endl; // size of set
    std::cout<<"count of 20 : "<<s.count(20)<<std::endl; //count of 20 in set
    s.erase(20); // erase perticlular element from set
    std::cout<<"count of 20 after erase : "<<s.count(20)<<std::endl;
    if(s.find(30)==s.end()) //finds the element in set
    {
        std::cout<<"value not present in set"<<std::endl;
    }
    else
    {
        std::cout<<"value present in set"<<std::endl;
    }
    for(auto& i : s) //accessing the elements of set 
    {
        std::cout<<i<<" ";
    }
    return 0;
}