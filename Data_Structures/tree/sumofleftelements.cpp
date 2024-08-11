#include <iostream>

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int value):val(value), left(nullptr),right(nullptr){};
};
int sumofleftelement(TreeNode * root,bool isLeft = false)
{
    if(!root) return 0;
    if(!root->left && !root->right && isLeft)
    {
        return root->val;
    }
    return sumofleftelement(root->left,true) + sumofleftelement(root->right,false);
}
int main()
{
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    int result = sumofleftelement(root);
    std::cout<<"sum of the left elements  "<<result<<std::endl;
    return 0;
}