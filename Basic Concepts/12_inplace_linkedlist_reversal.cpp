#include <iostream>
struct linkedlist{
    int val;
    linkedlist* next;
    linkedlist(int v):val(v),next(nullptr){};
};
linkedlist* reverselinkedlist(linkedlist* head)
{
    linkedlist* prev = nullptr;
    linkedlist* current = head;
    linkedlist* next = nullptr;
    while(current!=nullptr)
    {
        //store the next node
        next = current->next;
        //flip the link
        current->next = prev;
        //move the pointers
        prev=current;
        current=next;
    }
    return prev;
}
void printlinkedlist(linkedlist* head)
{
    auto temp=head;
    while(temp!=nullptr)
    {
        std::cout<<temp->val<<" ";
        temp=temp->next;
    }
}
int main()
{
        // Create the linked list [1, 2, 3, 4, 5]
    linkedlist* head = new linkedlist(1);
    head->next = new linkedlist(2);
    head->next->next = new linkedlist(3);
    head->next->next->next = new linkedlist(4);
    head->next->next->next->next = new linkedlist(5);

    std::cout << "Original List: ";
    printlinkedlist(head);
    std::cout<<std::endl;
    // Call the reverseList function
    linkedlist* reversedHead = reverselinkedlist(head);

    std::cout << "Reversed List: ";
    printlinkedlist(reversedHead);
    return 0;
}