#include <iostream>
#include <algorithm>
#include <climits>

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

// Helper function to compute the sum of the subtree and update the largest sum found
int largesthelper(Node* root, int& largestsum) {
    if (root == nullptr) {
        return 0;
    }

    // Recursively get the sum of the left and right subtrees
    int leftsum = largesthelper(root->left, largestsum);
    int rightsum = largesthelper(root->right, largestsum);

    // Compute the sum of the current subtree
    int cursum = root->val + leftsum + rightsum;

    // Update the largest sum found so far
    largestsum = std::max(largestsum, cursum);

    // Return the sum of the current subtree
    return cursum;
}
// Function to find the largest subtree sum
int LargestSubtreeSum(Node* root) {
    int largestsum = INT_MIN;
    largesthelper(root, largestsum);
    return largestsum;
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

    std::cout<<"Largest subtree sum : "<< LargestSubtreeSum(root)<<std::endl;

    return 0;
}