#include <iostream>

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int value):val(value), left(nullptr),right(nullptr){};
};

bool checkpathsum(TreeNode * root,int current_sum,int target)
{
    if(!root) return false;
    if(!root->left && !root->right)
    {
        return (current_sum + root->val == target);
    }
    return checkpathsum(root->left, current_sum+root->val,target) || checkpathsum(root->right, current_sum+root->val,target); 
}
bool pathsum(TreeNode * root, int target)
{
    return checkpathsum(root,0,target);
}
int main()
{
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(20);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(3);
    
    int target = 24;
    bool result = pathsum(root,target);
   
    std::cout<<"Given tree has path sum equal to "<<target<<" :"<<std::boolalpha<<result<<std::endl;
    return 0;
}