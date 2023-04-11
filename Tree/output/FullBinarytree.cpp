#include <iostream>
using namespace std;

// Define the node structure for the binary tree
struct Node
{
    int data;
    Node *left;
    Node *right;

    // Constructor to create a new node
    Node(int value)
    {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// Function to insert a new node into the binary tree
Node *insertNode(Node *root, int value)
{
    // If the tree is empty, create a new root node
    if (root == nullptr)
    {
        return new Node(value);
    }

    // Insert the new node into the left or right subtree
    if (value < root->data)
    {
        root->left = insertNode(root->left, value);
    }
    else
    {
        root->right = insertNode(root->right, value);
    }

    return root;
}

// Function to traverse the binary tree in preorder
void preorderTraversal(Node *root)
{
    if (root == nullptr)
    {
        return;
    }

    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

// Main function to test the binary tree
int main()
{
    // Create the root node and insert some values
    Node *root = nullptr;
    root = insertNode(root, 8);
    insertNode(root, 3);
    insertNode(root, 10);
    insertNode(root, 1);
    insertNode(root, 6);
    insertNode(root, 14);
    insertNode(root, 4);
    insertNode(root, 7);
    insertNode(root, 13);

    // Print the preorder traversal of the tree
    preorderTraversal(root);

    return 0;
}
