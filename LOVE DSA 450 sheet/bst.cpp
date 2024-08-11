#include<iostream>
#include <climits>
struct node{
    int data;
    node* left;
    node* right;
    node(int x):data(x),left(nullptr),right(nullptr){};
};
class BST
{
private:
node* root;
public:
BST():root(nullptr){};

void insert(int val)
{
    root = insertrecursive(root,val);
}
node* insertrecursive(node* root,int val)
{
    if(root==nullptr)
    {
        return new node(val);
    }
    if(val<root->data)
    {
        root->left = insertrecursive(root->left,val);
    } else if (val>root->data)
    {
        root->right = insertrecursive(root->right,val);
    }

    return root;
}
bool search(int val)
{
    return searchrecursively(root,val);
}
bool searchrecursively(node *root,int val)
{
    if(root == nullptr|| root->data==val)
    {
        return root!=nullptr;
    }
    if(val<root->data)
    {
        return searchrecursively(root->left,val);
    }else
    return searchrecursively(root->right,val);
}
int findmax() //rightmost element is the biggest element
{
node* current = root;
while(current && current->right!=nullptr)
{
    current=current->right;
}
return current? current->data : INT_MIN;
}
int findmin() //leftmost element is the smallest element
{
node* current = root;
while(current && current->left!=nullptr)
{
    current=current->left;
}
return current? current->data : INT_MAX;

}
};
int main()
{
    BST bst;
    bst.insert(50);
    bst.insert(30);
    bst.insert(20);
    bst.insert(40);
    bst.insert(70);
    bst.insert(60);
    bst.insert(80);

    // Searching for values in the BST
    int valueToFind = 40;
    if (bst.search(valueToFind)) {
        std::cout << "Value " << valueToFind << " found in the BST" << std::endl;
    } else {
        std::cout << "Value " << valueToFind << " not found in the BST" << std::endl;
    }

    valueToFind = 90;
    if (bst.search(valueToFind)) {
        std::cout << "Value " << valueToFind << " found in the BST" << std::endl;
    } else {
        std::cout << "Value " << valueToFind << " not found in the BST" << std::endl;
    }
    std::cout<<"minimum elememt in the BST :"<<bst.findmin()<<std::endl;
    std::cout<<"maximum elememt in the BST :"<<bst.findmax()<<std::endl;
    return 0;
}