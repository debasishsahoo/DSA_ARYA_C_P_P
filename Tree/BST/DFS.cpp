#include <iostream>

using namespace std;

// Node structure for binary tree
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// DFS traversal function for binary tree (In_Order)
void In_Order(Node *root)
{
    if (root == nullptr)
        return;

    In_Order(root->left);
    cout << root->data << " ";
    In_Order(root->right);
}

// DFS traversal function for binary tree (Pre_Order)
void Pre_Order(Node *root)
{
    if (root == nullptr)
        return;

    cout << root->data << " ";
    Pre_Order(root->left);
    Pre_Order(root->right);
}

// DFS traversal function for binary tree (Post_Order)
void Post_Order(Node *root)
{
    if (root == nullptr)
        return;

    Post_Order(root->left);
    Post_Order(root->right);
    cout << root->data << " ";
}

// Driver code
int main()
{
    /*
            1
           / \
          2   3
         / \   \
        4   5   6
    */

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    cout << "Inorder traversal of the binary tree: ";
    In_Order(root);

    cout << "\nPreorder traversal of the binary tree: ";
    Pre_Order(root);

    cout << "\nPostorder traversal of the binary tree: ";
    Post_Order(root);

    return 0;
}
