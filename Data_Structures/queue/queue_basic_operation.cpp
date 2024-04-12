#include <iostream>
#include <queue>

int main()
{
    std::queue<int> queuedata;
    queuedata.push(10);
    queuedata.push(20);
    queuedata.push(30);
    while(!queuedata.empty())
    {
        std::cout<<"queue value : "<<queuedata.front()<<" size : "<<queuedata.size()<<std::endl;
        queuedata.pop();
    }
    return 0;
}