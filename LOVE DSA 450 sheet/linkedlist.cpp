#include<iostream>
struct node
{
    int data;
    node* next;
    node(int val):data(val),next(nullptr){};
};
node* reverselinkedlist(node*& head)
{
    node* prev = nullptr;
    node* next = nullptr;
    node* curr = head;
    while(curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
void insertinbegining(node*& head,int data)
{
    node* newNode = new node(data);
    newNode->next = head;
    head = newNode;
};
bool hasCycle(node* head)
{
    if(!head || !head->next) return false;
    node* slow = head;
    node* fast = head->next;
    while(fast && fast->next)
    {
        if(slow==fast)
            return true;
        slow = slow->next;
        fast = fast->next->next;
    }
    return false;
}
node* middleelement(node* head)
{
    if(head==nullptr) return nullptr;
    node* slow = head;
    node* fast = head;
    while(fast !=nullptr && fast->next !=nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
void display(node*& head)
{
    node* temp = head;
    while(temp != nullptr)
    {
        std::cout<<temp->data<<"=>";
        temp = temp->next;
    }
    std::cout<<std::endl;
}
bool isPalindrome(node* head)
{
    // when there is no / only one node
    if(!head || !head->next)
    {
        return true;
    }
    // finding the middle element of the linked list
    node* slow = head;
    node* fast = head;
    while (fast!=nullptr && fast->next != nullptr)
    {
        slow=slow->next;
        fast = fast->next->next;
    }
    std::cout<<"the middle element of linked list "<<slow->data<<std::endl;
    node* middle = reverselinkedlist(slow);

    node* start = head;
    node* mid = middle;
    while(mid)
    {
        if(start->data != mid->data)
        {
            return false;
        }
        start = start->next;
        mid = mid ->next;
    }
    reverselinkedlist(middle);
    return true;
}
node* detectCycleStart(node* head)
{
    node* fast = head;
    node* slow = head;
    while(fast!=nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
        {
            node* start = head;
            while(start != slow)
            {
                start=start->next;
                slow=slow->next;
            }
            return start;
        }
    }
    return nullptr;
}
node* seperatevenodd(node* head)
{
    node* evenhead = nullptr;
    node* eventail = nullptr;
    node* oddhead = nullptr;
    node* oddtail = nullptr;

    node* current = head;
    while(current != nullptr)
    {
        if(current->data % 2 ==0)
        {
            if(!evenhead)
            {
                 evenhead = eventail = current;
            }
            else{
                eventail->next = current;
                eventail = 
            }
        }
    }
}
int main()
{
    node* head = nullptr;
    insertinbegining(head,10);
    insertinbegining(head,20);
    insertinbegining(head,30);
    insertinbegining(head,40);
    insertinbegining(head,50);
    display(head);
    std::cout<<"Middle element of the array is : "<< middleelement(head)->data<<std::endl;
    std::cout<<"linked has cycle ? "<<hasCycle(head)<<std::endl;
    node* start = reverselinkedlist(head);
    display(start);
    insertinbegining(head,10);
    insertinbegining(head,20);
    insertinbegining(head,30);
    insertinbegining(head,40);
    insertinbegining(head,50);
    display(head);
    if(isPalindrome(head))
    {
        std::cout<<"the linkedlist is palindrome"<<std::endl;
    }
    else
    {
        std::cout<<"the linkedlist is not palindrome"<<std::endl;
    }
    node* cycleStart = detectCycleStart(head);
    if (cycleStart) {
        std::cout << "The cycle starts at node with value: " << cycleStart->data << std::endl;
    } else {
        std::cout << "The linked list does not have a cycle." << std::endl;
    }
    return 0;
}