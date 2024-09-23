#include <iostream>

struct treenode
{
    int val;
    treenode* left;
    treenode* right;
    treenode(int v):val(v),left(nullptr),right(nullptr){};
};

void DFS (treenode* root)
{
    if(root==nullptr)
    {
        return;
    }
    std::cout<<root->val<<" ";
    DFS(root->left);
    DFS(root->right);
}
int main()
{
        // Creating a sample binary tree:
    //      1
    //     / \
    //    2   3
    //   / \
    //  4   5
    treenode* root = new treenode(1);
    root->left = new treenode(2);
    root->right = new treenode(3);
    root->left->left = new treenode(4);
    root->left->right = new treenode(5);

    // Perform DFS traversal (Pre-order)
    std::cout << "DFS (Pre-order Traversal): ";
    DFS(root);

    return 0;
}