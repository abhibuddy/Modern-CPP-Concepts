#include <iostream>
#include <algorithm>
#include <list>

int main()
{
    std::list<int> mylist = {10,20,30,40,50};
    mylist.push_front(60);
    mylist.push_front(70);
    mylist.push_back(90);
    mylist.insert(mylist.begin(),0);
    auto it = std::find(mylist.begin(),mylist.end(),2);
    if(it==mylist.end())
    {
        mylist.insert(std::next(it),2);
    }
    //removes all occurance of element
    mylist.remove(3);
    //removes fist occurance of element
    mylist.erase(std::find(mylist.begin(),mylist.end(),2));
    for(auto val:mylist)
    {
     std::cout<<"list val: "<<val<<std::endl;
    }
    return 0;
}