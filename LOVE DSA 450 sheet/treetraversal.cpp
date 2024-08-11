#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
struct node
{
    int data;
    node* left;node *right;
        
    node(int data)
    {
        this->data=data;
        this->left=this->right=nullptr;
    }
};
int maxdepth(node* root)
{
    if(root == nullptr)
    return 0;
    else
    {
        int leftdepth =maxdepth(root->left); 
        int rightdepth=maxdepth(root->right);

        return std::max(leftdepth,rightdepth)+1;
    }

}
void mirrortree(node * root)
{
    if(root == nullptr)
    {
        return;
    }
    else{
    std::swap(root->left,root->right);
    mirrortree(root->left);
    mirrortree(root->right);
    }

}
void inorder(node* root){
    if(root==nullptr)
    {
        return;
    }
    inorder(root->left);
    std::cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(node* root){
    if(root==nullptr)
    {
        return;
    }
    
    std::cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node* root){
    if(root==nullptr)
    {
        return;
    }
    
    postorder(root->left);
    postorder(root->right);
    std::cout<<root->data<<" ";
}
std::vector<std::vector<int>> levelordertraversal(node* root)
{
std::vector<std::vector<int>> ans;
std::queue<node*> q;
if(root == nullptr)
    return ans;
q.push(root);
while(1)
{
int size=q.size();
std::vector<int> data;
if(size==0)
{
    return ans;
}
while(size>0)
{
    node*temp = q.front();
    q.pop();
    //fill each node and it's children
    data.push_back(temp->data);
    if(temp->left!=nullptr)
    {
        q.push(temp->left);
    }
    if(temp->right!=nullptr)
    {
        q.push(temp->right);
    }
    size--;
}
ans.push_back(data);
}
return ans;
}
int main()
{
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->right->left = new node(5);
    root->right->right = new node(6);
    root->right->left->left = new node(7);
    root->right->left->right = new node(8);
    std::cout<<"\nIn order traversal"<<std::endl;
    inorder(root);
    std::cout<<"\nPost order traversal"<<std::endl;
    preorder(root);
    std::cout<<"\nPre order traversal"<<std::endl;
    postorder(root);
    std::cout<<"\nLevel order traversal"<<std::endl;
    std::vector<std::vector<int>> ans = levelordertraversal(root);
    for(const auto& vec:ans)
    {
        /*for (const auto& ele:vec)
        {
            std::cout<<ele<<" ";
        }*/
        
        //std::cout<<vec.front(); //left view
        std::cout<<vec.back(); //right view
        std::cout<<std::endl;
    }
    std::cout<<"Maximum depth = "<<maxdepth(root)<<std::endl;
    std::cout<<"mirror tree : "<<std::endl;
    mirrortree(root);
    std::cout<<"\nIn order traversal"<<std::endl;
    inorder(root);
    return 0;
    
}