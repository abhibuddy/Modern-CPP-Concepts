#include <iostream>
#include <queue>

int main()
{
    // we can have std::dequeue or std::list as second parameter
    // std::greater<int> for min heap
    //std::less<int> for max heap 
    std::priority_queue<int,std::vector<int>,std::greater<int>> minHeap;
    minHeap.push(80);
    minHeap.push(20);
    minHeap.push(30);
    minHeap.push(40);
    std::cout<<"top element in heap is : "<<minHeap.top()<<std::endl;
    minHeap.pop();
    std::cout<<"top element in heap is : "<<minHeap.top()<<std::endl;
    return 0;
}