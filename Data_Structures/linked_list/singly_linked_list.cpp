#include <iostream>
#include <forward_list>

int main()
{
  std::forward_list<int> forward_list_data;
  forward_list_data.push_front(10);
  forward_list_data.push_front(20);
  forward_list_data.push_front(30);
  
  // inserting after 2nd position from begining
  auto it=forward_list_data.begin();
  std::advance(it,2);
  forward_list_data.insert_after(it,40);
  
  //forward_list_data.erase_after(forward_list_data.begin());
  
  //looping through the elements in forward list
  for(auto val:forward_list_data)
  {
    std::cout<<"forward list val:"<<val<<std::endl;
  }
    return 0;
}