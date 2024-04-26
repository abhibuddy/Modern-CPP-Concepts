#include<iostream>
#include<stack>
class MyQueue
{
    std::stack<int> input,output;
public:
void push(int x)
{
    input.push(x);
}
int pop()
{
    int val = front();
    output.pop();
    return val;
}
int front()
{
    if(output.empty())
    {
        while(!input.empty())
        {
            
            output.push(input.top());
            input.pop();
        }
    }
    return output.top();
}
bool empty()
{
    return input.empty() && output.empty();
}
};
int main()
{
    MyQueue m;
    m.push(2);
    m.push(5);
    m.push(10);
    std::cout<<m.front()<<std::endl;
    m.pop();
    std::cout<<m.front()<<std::endl;
    return 0;
}