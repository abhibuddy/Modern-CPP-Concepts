#include <iostream>
#include <queue>

struct treenode
{
int val;
treenode* left;
treenode* right;
treenode(int v):val(v),left(nullptr),right(nullptr){}; 
};
void BFS(treenode* root)
{
    if(root == nullptr)
    {
        return;
    }
    std::queue<treenode*> q;
    q.push(root);
    while(!q.empty())
    {
        treenode* current = q.front();
        q.pop();
        std::cout<<current->val<<" ";
     // Add the left child to the queue if it exists
        if (current->left != nullptr) {
            q.push(current->left);
        }

        // Add the right child to the queue if it exists
        if (current->right != nullptr) {
            q.push(current->right);
        }
    }
}
int main()
{
    treenode* root = new treenode(1);
    root->left = new treenode(2);
    root->right = new treenode(3);
    root->left->left = new treenode(4);
    root->left->right = new treenode(5);
    root->right->right = new treenode(6);

    // Perform BFS traversal
    std::cout << "BFS (Level Order Traversal): ";
    BFS(root);
}