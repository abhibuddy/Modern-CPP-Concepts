#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;
int sharedResource = 0;

void increase()
{
    std::lock_guard<std::mutex> lock(mtx);  // automatically lock the mutex
    ++sharedResource;
    std::cout<<"shared resource incremented to "<<sharedResource<<std::endl;
    // automatically now it will get unlocked 
}
int main()
{
    std::thread t1(increase);
    std::thread t2(increase);

    t1.join();
    t2.join();
    
    return 0;
}