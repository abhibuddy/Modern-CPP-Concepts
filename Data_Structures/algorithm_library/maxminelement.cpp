#include <algorithm>
#include <iostream>
#include <vector>
int main()
{
    std::vector<int> v = {10,20,30,40,500};
    //max_element or min_element return the iterator of the element
    std::cout<<" "<<*std::max_element(v.begin(),v.end())<<" "<<*std::min_element(v.begin(),v.end())<<std::endl;
    return 0;
}