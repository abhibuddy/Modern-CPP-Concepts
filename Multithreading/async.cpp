#include <iostream>
#include <future>
#include <chrono>

bool is_prime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    std::future<bool> fut = std::async(is_prime,4444444443);
    std::chrono::milliseconds span(100);
    std::cout<<"[checking for prime] please wait";
    while(fut.wait_for(span) == std::future_status::timeout)
{
    std::cout<<"."<<std::flush;
}
bool x = fut.get();
std::cout<<std::endl;
std::cout<<"4444443 is "<<(x? "is ":"is not ")<<"prime\n";
    return 0;
}