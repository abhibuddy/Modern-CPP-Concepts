#include <iostream>

int main()
{
    int n = 4 ;
    //upside triangle
    /*for(int i = 0;i<=n;i++)
    {
        for(int j = 0 ; j < i ; j ++)
        {
            std::cout<<"*"<<" ";
        }
        std::cout<<std::endl;
    }*/
    // inverted pattern
    for(auto i = 0 ; i <= n ; i ++)
    {
        for (auto j = 0; j < n-i+1;j++)
        {
            std::cout<<"*"<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}