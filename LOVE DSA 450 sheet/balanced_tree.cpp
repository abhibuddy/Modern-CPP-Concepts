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
int checkHeight(Node* root)
{
    if(root == nullptr) return 0;
    int leftheight = checkHeight(root ->left);
    if(leftheight == -1) return -1; // if left subtree is not balanced 
    int rightheight = checkHeight(root->right);
    if(rightheight == -1) return -1; // if right subtree is not balanced
    if(std::abs(leftheight-rightheight) > 1) return -1;  // current node is not balanced
    return std::max(leftheight,rightheight)+1;
}
bool isBalanced(Node* root)
{
    return checkHeight(root) != -1;
}
int main()
{
    // Create a sample tree
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->left->left->left = newNode(6);

    if (isBalanced(root)) {
        std::cout << "The tree is balanced." << std::endl;
    } else {
        std::cout << "The tree is not balanced." << std::endl;
    }
}