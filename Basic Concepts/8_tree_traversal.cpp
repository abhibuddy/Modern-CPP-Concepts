#include <iostream>
#include <vector>

struct treenode
{
    int val;
    treenode* left;
    treenode* right;
    treenode(int v): val(v),left(nullptr),right(nullptr){};
};

void inordertraversal(treenode* root,std::vector<int>& result)
{
    if(root == nullptr) return;
    inordertraversal(root->left,result);
    result.push_back(root->val);
    inordertraversal(root->right,result);
}
void posttraversal(treenode* root,std::vector<int>& result)
{

    if(root == nullptr) return;
    posttraversal(root->left,result);
    posttraversal(root->right,result);
    result.push_back(root->val);
}
void pretraversal(treenode* root,std::vector<int>& result)
{
    if(root == nullptr) return;
    result.push_back(root->val);
    pretraversal(root->left,result);
    pretraversal(root->right,result);
}
int main()
{
    treenode* root = new treenode(1);
    root->right = new treenode(2);
    root->right->left = new treenode(3);

    std::vector<int> intraversal;
    inordertraversal(root,intraversal);
    std::cout<<"in order traversal : "<<std::endl;
    for(auto val : intraversal)
    {
        std::cout<<val<<" ";
    }
    std::cout<<std::endl;

    std::vector<int> preoder;
    std::cout<<"pre order traversal : "<<std::endl;
    pretraversal(root,preoder);

    for(auto val : preoder)
    {
        std::cout<<val<<" ";
    }
    std::cout<<std::endl;

    std::vector<int> postoder;
    posttraversal(root,postoder);
    std::cout<<"post order traversal : "<<std::endl;
    for(auto val : postoder)
    {
        std::cout<<val<<" ";
    }
    std::cout<<std::endl;

    return 0;
}