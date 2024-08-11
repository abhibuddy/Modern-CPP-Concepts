#include <iostream>

void print(int n)
{
    if(n==0) return;
//print(n-1); //ascending order    
std::cout<<n<<std::endl;
print(n-1); // descending order
}
int main()
{
    print(5);
    return 0;
}