#include <algorithm> //next_permuataion prev_permutation
#include <iostream>
#include <vector>
int main()
{
    std::vector<int> v = {1,2,3};
    std::vector<int> test = {2,1,3};
    do{
        for(auto digit : v)
        {
            std::cout<<digit;
        }
        std::cout<<std::endl;
        
    }while(std::next_permutation(v.begin(),v.end())); //make change in vector
    std::cout<<"Is permutation : "<<std::boolalpha<<std::is_permutation(v.begin(),v.end(),test.begin())<<std::endl;
    return 0;
}