#include <iostream>
#include <algorithm>


struct Node
{
    int val;
    Node* left;
    Node* right;
    Node(int v): val(v),left(nullptr),right(nullptr){};
};
Node* newNode(int data)
{
    Node* node = new Node(data);
    return node;
}

bool checkSumtree(Node* root,int& sum)
{
    if(root == nullptr)
    {
        sum = 0 ; 
        return true;
    }
    if(root->left == nullptr && root->right == nullptr)
    {
        sum = root->val;
        return true;
    }
    int leftsum = 0; int rightsum =0;
    if(checkSumtree(root->left,leftsum) && checkSumtree(root->right,rightsum) )
    {
        if(root->val == leftsum+rightsum)
        {
            sum = root->val+leftsum+rightsum;
            return true;
        }
    }
    return false;
}
bool isSumtree(Node* root)
{
    
        int sum = 0;
        return checkSumtree(root,sum);
    
}
int main()
{   
    // Create a sample tree
    Node* root = newNode(26);
    root->left = newNode(10);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(6);
    root->right->right = newNode(3);

    if(isSumtree(root))
    std::cout<<"this tree is a sum_tree";
    else
    std::cout<<"this tree is not a sum_tree";

    return 0;
}