/**
 * C++11 concept
 * async programming using std::async and std::future<int> 
*/
#include <iostream>
#include <future>
#include <functional>
#include <thread> // Required for std::this_thread::sleep_for
using namespace std;
// A function that performs a lengthy computation and returns a result
int lengthyComputation(int num) {
    std::cout << "Lengthy computation started." << std::endl;
    // Simulate a time-consuming computation
    std::this_thread::sleep_for(std::chrono::seconds(3));
    int result = num * num;
    std::cout << "Lengthy computation completed." << std::endl;
    return result;
}

int main() {
    // Launch the lengthy computation asynchronously
    std::future<int> futureResult = std::async(lengthyComputation, 5);
    // Perform other tasks while the lengthy computation is in progress

    // Retrieve the result when it becomes available
    int result = futureResult.get();

    std::cout << "Result: " << result << std::endl;

    return 0;
}
