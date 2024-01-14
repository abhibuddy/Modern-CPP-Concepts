/**
 * C++ 11 concept
 * chrono library contains time related methods 
 * thread liberary is use to implement the multi-threading concept
*/
#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

void printMessage(const std::string& message)
{
    std::this_thread::sleep_for(std::chrono::seconds(2)); //pause for 2 sec
    std::cout<<message<<std::endl;
}
int main()
{
    std::string message = "Hello World";
    std::thread t(printMessage, message); // threadname(method_name,arg)
    if(t.joinable()) // if the thead is joinable
        t.join();    // join the thread in main thread
    return 0;
}