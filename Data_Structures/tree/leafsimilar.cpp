#include <iostream>
#include <vector>

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int value):val(value), left(nullptr),right(nullptr){};
};

void collectleaf(TreeNode * root, std::vector<int> & v)
{
    if(root == nullptr) return;
    if(!root -> left && !root->right)
    {
        v.push_back(root->val);
    }
    if(root -> left != nullptr)
    {
        collectleaf(root->left,v);
    }
    
    if(root -> right != nullptr)
    {
        collectleaf(root->right,v);
    }
}
bool leafsimilar(TreeNode * root1, TreeNode * root2)
{
    std::vector<int> a; // will collect tree_1 all leaf node here 
    std::vector<int> b; // will collect tree_2 all leaf node here
    collectleaf(root1,a);
    collectleaf(root1,b);

    return a==b ? true:false;
}

int main()
{
    
    TreeNode* root1 = new TreeNode(1);
    root1->left = new TreeNode(3);
    root1->right = new TreeNode(2);
    root1->left->left = new TreeNode(3);
    root1->left->right = new TreeNode(4);
    root1->right->left = new TreeNode(4);
    root1->right->right = new TreeNode(3);

    
    TreeNode* root2 = new TreeNode(1);
    root2->left = new TreeNode(2);
    root2->right = new TreeNode(2);
    root2->left->left = new TreeNode(3);
    root2->left->right = new TreeNode(4);
    root2->right->left = new TreeNode(4);
    root2->right->right = new TreeNode(3);

    std::cout<<"both trees leaf are similar ? "<<std::boolalpha<<leafsimilar(root1,root2)<<std::endl;
    return 0;
}