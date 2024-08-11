#include <iostream>

int gridways(int n,int m, int r,int c)
{
    if(n==r-1 && m == c-1)
    {
        return 1;
    }
    if(n>r-1 || m > c-1)
    {
        return 0;
    }
    
    // going left
    int way1  = gridways(n+1,m,r,c);
    // going down
    int way2 = gridways(n,m+1,r,c);
    return way1+way2;
}
int main() {
    int n = 3;
    int m = 3;
    int number_of_ways=gridways(0,0,n,m);
    std::cout<<"number of ways "<<number_of_ways<<std::endl;
    return 0;
}