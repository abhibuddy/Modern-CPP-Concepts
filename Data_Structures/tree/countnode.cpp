#include <iostream>

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int value):val(value), left(nullptr),right(nullptr){};
};
int countNode(TreeNode * root)
{
    if(!root) return 0;
    else
    return 1+ countNode(root->left) + countNode(root->right);
}
int main()
{
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(3);

    int result = countNode(root);
    std::cout<<"Number of nodes in tree "<<result<<std::endl;
    return 0;
}