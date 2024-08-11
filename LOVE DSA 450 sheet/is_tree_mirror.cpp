#include <iostream>

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Function to check if two trees are mirrors of each other
bool areMirrors(Node* tree1, Node* tree2) {
    // If both trees are empty, they are mirrors
    if (tree1 == nullptr && tree2 == nullptr) {
        return true;
    }

    // If only one of the trees is empty, they are not mirrors
    if (tree1 == nullptr || tree2 == nullptr) {
        return false;
    }

    // Both trees are not empty, check if current nodes and their subtrees are mirrors
    return (tree1->data == tree2->data) &&
           areMirrors(tree1->left, tree2->right) &&
           areMirrors(tree1->right, tree2->left);
}

int main() {
    // Creating two trees for testing
    Node* root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);
    root1->left->left = new Node(4);
    root1->left->right = new Node(5);

    Node* root2 = new Node(1);
    root2->left = new Node(3);
    root2->right = new Node(2);
    root2->right->left = new Node(5);
    root2->right->right = new Node(4);

    if (areMirrors(root1, root2)) {
        std::cout << "The trees are mirrors of each other." << std::endl;
    } else {
        std::cout << "The trees are not mirrors of each other." << std::endl;
    }

    return 0;
}
