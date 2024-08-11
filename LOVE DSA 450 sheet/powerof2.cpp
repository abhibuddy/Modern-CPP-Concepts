#include <iostream>

// 2 => 0010
// 8 => 0100
// last bit is 0 so &(and) with 1 will give zero for even
// 7 => 0011 just one bit before is all other bit set to 1
// so n & n-1 will give 0  
int main()
{
    int n = 8;
    int result = n & (n-1); 
    if(!result)
    {
        std::cout<<n<<" is power of 2";
    }
    else 
    std::cout<<n<<" is not power of 2";

    return 0;
}