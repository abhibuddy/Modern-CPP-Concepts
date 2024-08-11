#include <iostream>

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int value):val(value), left(nullptr),right(nullptr){};
};
bool isSymmetricalhelper(TreeNode *left,TreeNode *right)
{
    //case 1
    if(!left && !right) return true;
    //case 2
    if (!left || !right)
    {
        return false;
    }
    return (left->val == right->val) &&
           isSymmetricalhelper(left->left, right->right) &&
           isSymmetricalhelper(left->right, right->left); 
}
bool isSymmetrical(TreeNode *root)
{
    if(!root) return true;
    else return isSymmetricalhelper(root->left,root->right);
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

    bool result = isSymmetrical(root);
    std::cout<<"Given tree is symmetric ? "<<std::boolalpha<<result<<std::endl;
    return 0;
}