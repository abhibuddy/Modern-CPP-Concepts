#include <iostream>
#include <algorithm>


struct Node
{
    int val;
    Node* left;
    Node* right;
    Node(int v): val(v),left(nullptr),right(nullptr){};
};
Node* newNode(int data)
{
    Node* node = new Node(data);
    return node;
}
void inorder(Node* root){
    if(root == nullptr) return;
    inorder(root->left);
    std::cout<<root->val<<" ";
    inorder(root->right);
}
int toSum(Node* root)
{
    if(root ==nullptr) return 0;
    int leftsum = toSum(root->left);
    int rightSum = toSum(root->right);
    int OldVal = root->val; // preserve the old value 
    root->val = leftsum + rightSum;
    return OldVal+root->val;
}
int main()
{   
    // Create a sample tree
    Node* root = newNode(10);
    root->left = newNode(-2);
    root->right = newNode(6);
    root->left->left = newNode(8);
    root->left->right = newNode(-4);
    root->right->left = newNode(7);
    root->right->right = newNode(5);

    inorder(root);
    std::cout<<std::endl;
    toSum(root);
    std::cout<<std::endl;
    inorder(root);

    return 0;
}