#include <iostream>

struct Node{
    int data;
    Node* next;
};


void insertAtBegining(Node*& head,int data)
{
    Node* newNode=new Node();
    newNode->data=data;
    newNode->next=head;
    head=newNode;
}

void insertAtEnd(Node*& head,int data)
{
    Node* newNode=new Node();
    newNode->data=data;
    newNode->next=nullptr;

    if(head == nullptr)
    {
        head=newNode;
        return;
    }

    Node* temp=head;
    while(temp->next!=nullptr)
    {
        temp=temp->next;
    }
    temp->next=newNode;
}
void display(Node* head)
{
    Node* temp = head;
    while(temp!=nullptr)
    {
        std::cout<<temp->data<<" ";
        temp=temp->next;
    }
    std::cout<<std::endl;
}
void deleteNode(Node*& head,int key )
{
    Node* prev=nullptr;
    Node* current=head;
    while(current != nullptr && current->data!=key)
    {
        prev=current;
        current=current->next;
    }
    if(current == nullptr)
    {
        std::cout<<"element not present in the list"<<std::endl;
        return;
    }
    if(prev != nullptr )
    {
        prev->next = current->next;
    }
    if(current == head)
    {
        head = current->next;
    }
    delete current;
}

void reverseLinkedlist(Node*& head)
{
    Node* current = head;
    Node* prev=nullptr;
    Node* next = nullptr;
    while(current != nullptr)
    {
        next = current->next;
        current->next = prev;
        prev=current;
        current=next;
    }
    head = prev;
}
// Floyd's Tortoise and Hare algorithm 
bool hasCycle(Node* head)
{
    if(head==nullptr || head->next==nullptr)
    {
        return false;
    }
    Node* slow=head;
    Node* fast = head->next;
    while(fast !=nullptr &&  fast->next != nullptr)
    {
        if(slow == fast)
        {
            return true;
        }
        slow = slow->next;
        fast= fast->next->next;
    }
    return false;
}

Node* findMiddle(Node* head)
{
    if(head==nullptr)
    {
        return nullptr;
    }
    Node* fast=head;
    Node* slow=head;
    while(fast != nullptr && fast->next != nullptr)
    {
        slow = slow ->next;
        fast=fast->next->next;
    }
    return slow;
}

int listlength(Node* head)
{
    int length = 0;
    Node* temp = head;
    while(temp!=nullptr)
    {
        ++length;
        temp=temp->next;
    }
    return length;
}

int main()
{

    Node* head=nullptr;

    insertAtBegining(head,3);
    insertAtBegining(head,4);
    insertAtBegining(head,5);
    insertAtBegining(head,2);

    display(head);
    
    insertAtEnd(head,7);
    insertAtEnd(head,6);
    insertAtEnd(head,9);

    deleteNode(head,6);
    
    display(head);
    reverseLinkedlist(head);
    display(head);
    std::cout<<"the list has loop "<<std::boolalpha<<hasCycle(head)<<std::endl;
    display(head);
    std::cout<<"middle element in the list is "<<findMiddle(head)->data<<std::endl;
    std::cout<<"size of the list is : "<<listlength(head)<<std::endl;
    return 0;
}