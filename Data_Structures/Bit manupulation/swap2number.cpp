#include <iostream>

void swap(int &n,int &m)
{
 n=n^m;
 m=n^m;
 n=n^m;
}
int main()
{
    int n = 8;
    int m = 3;
    swap(n,m);
    std::cout<<n<<" "<<m<<std::endl;
    return 0;
}