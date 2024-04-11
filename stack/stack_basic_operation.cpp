#include<iostream>
#include<stack>

int main()
{
    std::stack<int> stackdata;
    stackdata.push(10);
    stackdata.push(20);
    stackdata.push(30);
    while(!stackdata.empty())
    {
        std::cout<<"stack value : "<<stackdata.top()<<" size : "<<stackdata.size()<<std::endl;
        stackdata.pop();
    }
    return 0;
}
