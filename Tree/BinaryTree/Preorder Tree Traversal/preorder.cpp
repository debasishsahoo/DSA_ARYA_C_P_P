#include <bits/stdc++.h>
using namespace std;
class Tree
{
public:
    int data;
    Tree *left = NULL, *right = NULL;
    // Constructor initialised
    Tree(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
void preorder_traversal(Tree *root)
{
    if (root == NULL)
        return;
    // Print the data
    cout << root->data << " ";
    // Visit Left subtree
    preorder_traversal(root->left);
    // Visit right subtree
    preorder_traversal(root->right);
}

int main()
{
    Tree *root = new Tree(15);
    root->left = new Tree(12);
    root->right = new Tree(54);
    root->left->left = new Tree(8);
    root->left->right = new Tree(13);
    root->left->left->left = new Tree(5);
    root->right->left = new Tree(18);
    preorder_traversal(root);
    return 0;
}