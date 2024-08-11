#include <iostream>
#include <mutex>
#include <thread>

std::mutex mtx;
int sharedResource = 0;

void increment()
{
    std::unique_lock<std::mutex> lock(mtx);
    ++sharedResource;
    lock.unlock();

    std::cout<<"shared resource can be unolocked and locked agian\n"<<std::endl;
    
    lock.lock();
    ++sharedResource;
    lock.unlock();
} 
int main()
{
    std::thread t1(increment);
    std::thread t2(increment);

    t1.join();
    t2.join();

    std::cout<<"value of the shared resource in the end : "<<sharedResource<<std::endl;
    return 0;
}