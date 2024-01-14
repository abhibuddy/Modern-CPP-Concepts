#include <iostream>
#include <thread>
#include <atomic>
/*
std::atomic 
ensure that the increments are performed atomically,without data race condition
*/
std::atomic<int> counter(0);

void incrementCounter() {
    counter++;
}

int main() {
    std::thread t1(incrementCounter);
    std::thread t2(incrementCounter);

    t1.join();
    t2.join();

    std::cout << "Counter: " << counter << std::endl;

    return 0;
}
