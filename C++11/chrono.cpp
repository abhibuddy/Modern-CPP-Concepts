/**
 * C++11 concept
 * all the time related functions are there in <chrono> liberary
 * like std::chrono::seconds() std::chrono::miliseconds std::chrono::high_resolution_clock::now()
 * .count() for std::chrono::duration_cast<>
*/
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
    std::cout<<"duration : "<<duration.count()<<" milliseconds"<<std::endl;

    return 0;
}