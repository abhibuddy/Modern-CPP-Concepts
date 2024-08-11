#include <iostream>
#include <stack>
// using the stack reverse the string

std::string reversestr(std::string str)
{
    std::string ans="";
    std::stack<char> s;
    for(auto c:str)
    {
        s.push(c);
    }
    while(!s.empty())
    {
        ans+=s.top();
        s.pop();
    }
    return ans;
}
int main()
{
    std::string str = "Hello";
    std::cout<<"reversed string using stack : "<<reversestr(str);
    return 0;
}