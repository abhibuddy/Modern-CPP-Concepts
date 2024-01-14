#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

int main()
{
    auto start = std::chrono::high_resolution_clock::now();
    //we have std::chrono::steady_clock and std::system_clock also
    std::this_thread::sleep_for(std::chrono::seconds(2));
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end-start);
    std::cout<<"duration : "<<duration.count()<<std::endl;

    return 0;
}