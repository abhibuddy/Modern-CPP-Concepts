#include <iostream>
#include <algorithm>
#include <vector>

/*
searches a subsequence inside a sequence
*/
int main()
{
    std::vector<int> v = {1,2,3,5,6,7,1};
    std::vector<int> sv = {3,5,6};
    auto itr = std::search(v.begin(),v.end(),sv.begin(),sv.end());
    std::cout<<"Is sub sequence in complete vector ? "<< *itr<<std::endl;
    return 0;
}