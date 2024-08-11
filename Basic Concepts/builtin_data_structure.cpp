/**
 * Here we are discussing about 
 * <stack>
 * <queue>
 * <array>
 * dynamic_array i.e. <vector>
 * linkedlist <forward_list> <list>
*/
#include <stack>
#include <queue>
#include <array>
#include <vector>
#include <forward_list>
#include <list>
#include <iostream>
int main()
{ //stack LIFO
std::cout<<"------------------------------------"<<std::endl;
    std::stack<int> stackdata;
    stackdata.push(10);
    stackdata.push(20);
    stackdata.push(30);
    while(!stackdata.empty())
    {
        std::cout<<"stack value : "<<stackdata.top()<<" size : "<<stackdata.size()<<std::endl;
        stackdata.pop();
    }
    
  //queue FIFO
  std::cout<<"------------------------------------"<<std::endl;
  std::queue<int> queuedata;
    queuedata.push(10);
    queuedata.push(20);
    queuedata.push(30);
    while(!queuedata.empty())
    {
        std::cout<<"queue value : "<<queuedata.front()<<" size : "<<queuedata.size()<<std::endl;
        queuedata.pop();
    }
  //forward_list simalar to singly linked list
  std::cout<<"------------------------------------"<<std::endl;
  std::forward_list<int> forward_list_data;
  forward_list_data.push_front(10);
  forward_list_data.push_front(20);
  forward_list_data.push_front(30);
  forward_list_data.insert_after(forward_list_data.begin(),40);
  //forward_list_data.erase_after(forward_list_data.begin());
  for(auto val:forward_list_data)
  {
    std::cout<<"forward list val:"<<val<<std::endl;
  }
  //list similar to doubly linked list
  //insert erase remove clear
  std::cout<<"------------------------------------"<<std::endl;
  std::list<int> list_data;
  list_data.push_front(10);
  list_data.push_back(20);
  list_data.push_front(30);
  for(auto val:list_data)
  {
    std::cout<<"list val:"<<val<<std::endl;
  }
    return 0;
}