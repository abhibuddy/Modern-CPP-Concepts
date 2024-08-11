#include <iostream>
#include <algorithm>


struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int value):val(value), left(nullptr),right(nullptr){};
};

int maxdepth(TreeNode *root)
{
    if(!root) return 0;
    int left = 1+ maxdepth(root->left);
    int right = 1+ maxdepth(root->right);
    return std::max(left,right);
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
    std::cout<<maxdepth(root)<<std::endl;
    return 0;
}