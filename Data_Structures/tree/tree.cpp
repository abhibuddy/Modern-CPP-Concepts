#include <iostream>
#include <memory>
struct treenode
{
//members
int data;
std::shared_ptr<treenode> left;
std::shared_ptr<treenode> right;
//constructor
treenode(int val): data(val),left(nullptr),right(nullptr){}
};

void insert(std::shared_ptr<treenode>& root,int val)
{
    if(root == nullptr)
    {
        root = std::make_shared<treenode>(val);
    }
    if(val < root->data)
    {
        insert(root->left,val);
    }
    else if(val > root->data) {
        insert(root->right,val);
    }
}

void inodertraversal(std::shared_ptr<treenode>& root)
{
    if(root != nullptr)
    {
        inodertraversal(root->left);
        std::cout<<root->data<<" "<<std::endl;
        inodertraversal(root->right);
    }
}

int main()
{
    std::shared_ptr<treenode> root = nullptr;
    insert(root,50);
    insert(root,20);
    insert(root,70);
    insert(root,10);
    insert(root,90);
    insert(root,100);
    insert(root,0);

    std::cout<<"In order traversal of tree :"<<std::endl;
    inodertraversal(root);
    std::cout<<std::endl;
    return 0;
}