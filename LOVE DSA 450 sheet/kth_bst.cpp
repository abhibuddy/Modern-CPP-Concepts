#include <iostream>

// Define the structure of a tree node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
void kthLargesthelper(TreeNode* root,int& k, int& result)
{
    if(root == nullptr) return;

    // reverse inorder traversal 
    // as inorder treaversal of a BST will give sorted values
    kthLargesthelper(root->right,k,result);
    k--;
    if(k==0)
    {
        result = root->val;
        return;
    }
    kthLargesthelper(root->left,k,result);
}
int kthLargest(TreeNode* node,int k)
{
    int result = -1;
    kthLargesthelper(node,k,result);
    return result;
}
void kthSmallesthelper(TreeNode* root,int& k, int& result)
{
    if(root == nullptr) return;

    // inorder traversal 
    // as inorder treaversal of a BST will give sorted values
    kthSmallesthelper(root->left,k,result);
    k--;
    if(k==0)
    {
        result = root->val;
        return;
    }
    kthSmallesthelper(root->right,k,result);
}
int kthSmallest(TreeNode* node,int k)
{
    int result = -1;
    kthSmallesthelper(node,k,result);
    return result;
}

// Helper function to create a new tree node
TreeNode* newNode(int data) {
    TreeNode* node = new TreeNode(data);
    return node;
}

// Main function to test the kthLargest function
int main() {
    // Create a sample tree
    TreeNode* root = newNode(20);
    root->left = newNode(8);
    root->right = newNode(22);
    root->left->left = newNode(4);
    root->left->right = newNode(12);
    root->left->right->left = newNode(10);
    root->left->right->right = newNode(14);

    int k = 3;
    std::cout << "The " << k << "-th largest element is " << kthLargest(root, k) << std::endl;
    std::cout << "The " << k << "-th Smallest element is " << kthSmallest(root, k) << std::endl;

    return 0;
}
