#include <iostream>
struct LinkNode
{
int val;
LinkNode* next;
LinkNode(int x):val(x),next(nullptr){};
};
LinkNode* AddtwoLinkedList(LinkNode* list1,LinkNode* list2)
{
    LinkNode dummy(0);
    LinkNode* current = &dummy;
    int carry = 0;
    while(list1!=nullptr || list2!= nullptr || carry)
    {
        int sum = carry;
        if(list1 != nullptr)
        {
            sum += list1->val;
            list1=list1->next;
        }
        if(list2 != nullptr)
        {
            sum += list2->val;
            list2=list2->next;
        }
        carry = sum/10;
        current->next = new LinkNode(sum%10);
        current = current->next;
    }
    return dummy.next;
}
void printNode(LinkNode* head)
{
    while(head != nullptr)
    {
        std::cout<<head->val<<" ";
        head = head->next;
    }
    std::cout<<std::endl;
}
LinkNode* reveseLinkList(LinkNode* head)
{
    LinkNode* current = head;
    LinkNode* prev = nullptr;
    while(current != nullptr)
    {
        LinkNode* next = current->next;
        current->next=prev;
        prev = current;
        current = next;
    }
    return prev;
}
int main()
{
        // Creating first number: 342 (represented as 2 -> 4 -> 3)
    LinkNode* l1 = new LinkNode(2);
    l1->next = new LinkNode(4);
    l1->next->next = new LinkNode(3);

    // Creating second number: 465 (represented as 5 -> 6 -> 4)
    LinkNode* l2 = new LinkNode(5);
    l2->next = new LinkNode(6);
    l2->next->next = new LinkNode(4);

    // Adding the two numbers
    LinkNode* result = AddtwoLinkedList(l1, l2);

    // Printing the result
    std::cout << "Result: ";
    LinkNode* revesehead = reveseLinkList(l1);
    printNode(revesehead);
    printNode(result);
    return 0;
}