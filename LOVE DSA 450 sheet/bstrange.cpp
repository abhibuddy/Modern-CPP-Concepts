#include <iostream>

// Define the structure of a tree node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
// Helper function to create a new tree node
TreeNode* newNode(int data) {
    TreeNode* node = new TreeNode(data);
    return node;
}
int countNodesInRange(TreeNode* root,int low, int high)
{
    if(root == nullptr) return 0;
    if( root->val >= low && root->val<=high)
    {
        return 1+countNodesInRange(root->left,low,high)+countNodesInRange(root->right,low,high);
    }
    else if(root->val<low)
     return countNodesInRange(root->right,low,high);
    else
     return countNodesInRange(root->left,low,high);
}
// Main function to test the countNodesInRange function
int main() {
    // Create a sample tree
    TreeNode* root = newNode(10);
    root->left = newNode(5);
    root->right = newNode(50);
    root->left->left = newNode(1);
    root->left->right = newNode(8);
    root->right->left = newNode(40);
    root->right->right = newNode(100);

    int low = 5, high = 45;
    std::cout << "Count of nodes in range [" << low << ", " << high << "] is " << countNodesInRange(root, low, high) << std::endl;

    return 0;
}