#include <iostream>
#include <unordered_map>
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int value):val(value), left(nullptr),right(nullptr){};
};
void inordertraversal(TreeNode * root , std::unordered_map<int,int> &  freq)
{
    if(!root) return;
    inordertraversal(root->left,freq);
    freq[root->val]++;
    inordertraversal(root->right,freq);
}
int modeElement(TreeNode * root)
{
    std::unordered_map<int,int> freq;
    int mode = 0;
    int FreqElem = 0;
    inordertraversal(root,freq);
    for(auto items : freq)
    {
        if(items.second>mode)
        {
            mode = items.second;
            FreqElem=items.first;
        }
    }
    return FreqElem;
}
int main()
{
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(5);
    root->right->right = new TreeNode(6);

    int result = modeElement(root);
    std::cout<<"mode element ? "<<result<<std::endl;
    return 0;
}