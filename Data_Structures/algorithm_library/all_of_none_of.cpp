#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> v = {10,20,30,40,50};
    bool all = std::all_of(v.begin(),v.end(),[](int x){ return x>0;});
    
    bool none = std::none_of(v.begin(),v.end(),[](int x){ return x>0;});
    
    bool any = std::any_of(v.begin(),v.end(),[](int x){ return x>0;});
    
    std::cout<<"all : "<<std::boolalpha<<all<<"\nnone: "<<none<<"\nany: "<<any<<std::endl;
    return 0;
}