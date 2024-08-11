#include <iostream>
#include <thread>

void print(std::string message)
{
    std::cout<<"LOG: "<<message<<std::endl;
}
int main()
{
    std::thread t(print,"Hello from thread");
    if(t.joinable())
    {
        t.join();
    }
    //t.detach();
    unsigned int n = std::thread::hardware_concurrency();
    std::cout << "The system can run " << n << " threads concurrently." << std::endl;
    return 0;
}