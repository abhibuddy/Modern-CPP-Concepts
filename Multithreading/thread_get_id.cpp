#include <iostream>
#include <thread>
#include <chrono>

std::thread::id main_thread_id = std::this_thread::get_id();
void is_main_thread ()
{
    if(main_thread_id == std::this_thread::get_id())
    {
        std::cout<<"this is main thread"<<std::endl;
    }else{
        std::cout<<"this is not main thread"<<std::endl;
    }
}
int main()
{
    is_main_thread();
    std::thread th(is_main_thread);
    th.join();
    return 0;
}