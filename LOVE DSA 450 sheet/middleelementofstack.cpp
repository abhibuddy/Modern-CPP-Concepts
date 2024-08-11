#include <iostream>
#include <stack>
#include <vector>

void middlerecursive(std::stack<int> st,int count,int middle, int& middleelement)
{
    if(count == middle)
    {
        middleelement = st.top();
        st.pop();
        return ;
    }
    //deleting the top elements
    int top = st.top();
    st.pop();
    count++;
    //recursive call
    middlerecursive(st,count,middle,middleelement);
    //push back again in stack
    st.push(top);

}
int middleelement(std::stack<int> st)
{
    int size = st.size();
    int middle = size/2;
    int current = 0;
    int middleelement = -1;
    middlerecursive(st,0,middle,middleelement);
    return middleelement;
}
int middleelementofstack(std::stack<int> st)
{
    std::vector<int> v; 
    while(!st.empty())
    {
        v.push_back(st.top());
        st.pop();
    }
    return v[v.size()/2];
}
int main()
{
    std::stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    std::cout<<"middle element of stack : "<<middleelementofstack(st)<<std::endl;
    std::cout<<"middle element of stack : "<<middleelement(st)<<std::endl;
    return 0;
}