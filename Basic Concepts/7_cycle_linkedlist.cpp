#include <iostream>

struct linkedlist{
    int val;
    linkedlist* next;
    linkedlist(int value): val(value), next(nullptr){};
};
bool hascycle(linkedlist* head)
{
    linkedlist* slow = head;
    linkedlist* fast = head;
    while(fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    // Example of a linked list with a cycle:
    // 1 -> 2 -> 3 -> 4 -> 2 (cycle starts again at node 2)
    linkedlist* head = new linkedlist(1);
    head->next = new linkedlist(2);
    head->next->next = new linkedlist(3);
    head->next->next->next = new linkedlist(4);
    head->next->next->next->next = head->next;

    if(hascycle(head))
    {
        std::cout<<"cycle detected"<<std::endl;
    }else
    {
        std::cout<<"cycle not detected"<<std::endl;
    }
    return 0;
}