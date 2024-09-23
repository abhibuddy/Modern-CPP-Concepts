#include <iostream>
#include <vector>
void findtwonum(std::vector<int> arr)
{
    int xorresult = 0;
    for(auto num:arr)
    {
        xorresult ^= num; 
    }
    int rightsetbit = xorresult & ~(xorresult-1);
    int x=0;int y=0;
    for(auto num:arr){
    if(num & rightsetbit)
    {
        x^=num;
    }
    else 
    y^=num;

    }
std::cout<<x<<" "<<y<<std::endl;
}
int main()
{
    std::vector<int> arr = {4, 1, 2, 1, 2, 4, 3, 5};
    findtwonum(arr);
    return 0;
}