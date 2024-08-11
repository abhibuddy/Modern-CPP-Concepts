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
int height(Node* root, int& diameter)
{
    if(root==nullptr) return 0;
    int leftheight = height(root->left,diameter);
    int rightheight = height(root->right,diameter);
    diameter = std::max(diameter,leftheight+rightheight); // diameter is a variable which get's updated on finding a value of greater leftheight+rightheight
    return 1+std::max(leftheight,rightheight);
}
int diameterOfBinaryTree(Node* root){
    int diameter = 0;
    height(root,diameter);
    return diameter;
}
int main()
{
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    std::cout << "The diameter of the tree is " << diameterOfBinaryTree(root) << std::endl;


    return 0;
}