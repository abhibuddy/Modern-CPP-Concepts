#include <iostream>
#include <thread>
#include <chrono>

void pause_thread(int n)
{
    std::this_thread::sleep_for(std::chrono::seconds(n));
    std::cout<<"pause of "<<n<<" seconds over"<<std::endl;
}
int main()
{
    std::thread threads[5];
    for(int i =0;i<5;i++)
    {
        threads[i] = std::thread(pause_thread,i+1);
    }
    for(int i=0;i<5;i++)
    {
        threads[i].join();
    }
    std::cout<<"all threads joined"<<std::endl;
    return 0;
}