#include<iostream>
#include<thread>

void thread_function()
{
    std::cout<<"Inside thead ID: "<<std::this_thread::get_id()<<std::endl;
}
int main()
{
    std::thread t1(thread_function);
    std::thread t2(thread_function);
    if(t1.get_id()!=t2.get_id())
    {
        std::cout<<"Both threads have different IDs"<<std::endl;
    }
    std::cout<<"form main thread: "<<t1.get_id()<<std::endl;
    std::cout<<"form main thread: "<<t2.get_id()<<std::endl;
    t1.join();
    t2.join();
    return 0;
}