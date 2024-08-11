#include <iostream>

// Program : check if binary tree is sum tree or not ?

struct Node
{
    int data;
    Node* left;
    Node* right;
    Node(int v):data(v),left(nullptr),right(nullptr){};
};

int sum(Node *root)
{
    if(root == nullptr) return 0;
    else 
    return root->data + sum(root->left) + sum(root ->right);
}
bool isSumtree(Node* root)
{
    if(root==nullptr || (root->left==nullptr && root->right == nullptr))
    return true;
    int leftsum = sum(root->left);
    int rightsum = sum(root->right);  
    if(root->data == leftsum + rightsum && isSumtree(root->left) && isSumtree(root->right))
    {
            return true;
    }
        return false;
}
int main()
{
    Node* root = new Node(26);
    root->left = new Node(10);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(6);
    root->right->right = new Node(3);

    if (isSumtree(root)) {
        std::cout << "The tree is a Sum Tree." << std::endl;
    } else {
        std::cout << "The tree is not a Sum Tree." << std::endl;
    }
    return 0;
}