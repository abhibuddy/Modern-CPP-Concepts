#include <iostream>
#include <vector>

int uniquenumber(std::vector<int> vec)
{
    int unum{};
    for(auto i =0;i<vec.size();i++)
    {
        unum ^= vec[i];
    }
    return unum;
}
int main()
{
    std::vector<int> vect = {2,3,4,5,4,3,2};
    int restult = uniquenumber(vect);
    std::cout<<"unique number "<<restult<<std::endl;
    return 0;
}