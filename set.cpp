#include <iostream>
#include <set>
/*
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
{   std::set<int> s;
    s.insert(10);
    s.insert(15);
    s.insert(20);
    s.insert(30);
    std::cout<<"size : "<<s.size()<<std::endl;
    std::cout<<"count of 20 : "<<s.count(20)<<std::endl;
    s.erase(20);
    std::cout<<"count of 20 after erase : "<<s.count(20)<<std::endl;
    if(s.find(30)==s.end())
    {
        std::cout<<"value not present in set"<<std::endl;
    }
    else
    {
        std::cout<<"value present in set"<<std::endl;
    }
    for(auto& i : s)
    {
        std::cout<<i<<" ";
    }
    return 0;
}