#include<iostream>
#include <stack>

void pushAtbottom(std::stack<int>& s,int val)
{
    if(s.empty())
    {
        s.push(val);
        return;
    }
    int temp = s.top();
    s.pop();
    pushAtbottom(s,val);
    s.push(temp);
}
void reversestack(std::stack<int>& s)
{
    //base case
    if(s.empty())
    {
        return;
    }
    //reversing stack using recursion
    int temp = s.top();
    s.pop();
    reversestack(s);
    pushAtbottom(s,temp);
}
int main()
{
    std::stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);
    /*pushAtbottom(s,4);
    while(!s.empty())
    {
        std::cout<<s.top()<<"\n";
        s.pop();
    }*/
    std::cout<<"reversing the stack (using recursion): "<<std::endl;
    reversestack(s);
    while(!s.empty())
    {
        std::cout<<s.top()<<"\n";
        s.pop();
    }
    return 0;
}