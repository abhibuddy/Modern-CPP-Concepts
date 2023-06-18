#include <iostream>
#include <functional>

using namespace std;
int add(int a, int b)
{
    return a+b;
}
struct mlt
{
    int operator()(int a, int b) const
    {
        return a*b;
    }
};
int main()
{
    //std::function<return type (parameters type)> v_name = function to which it is pionting
    std::function<int(int,int)> funct1 = add;
    std::function<int(int,int)> funct2 = mlt();

    std::cout<<funct1(5,6)<<std::endl;
    std::cout<<funct2(5,6);
    return 0;
}