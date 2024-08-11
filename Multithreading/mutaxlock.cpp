#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;
//orders of the lines may vary but they are never intermingled
void print_thread_id(int id)
{
    mtx.lock();
    std::cout<<"thread #"<<id<<"\n";
    mtx.unlock();
}
int main()
{
    std::thread threads[10];
    for(int i=0;i<10;++i)
    {
     threads[i] = std::thread(print_thread_id,i+1);
    }
    for(auto& th : threads)
    th.join();
    return 0;
}