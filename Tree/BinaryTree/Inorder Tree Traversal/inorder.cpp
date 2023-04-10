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
void InOrder_Traversal(Tree *root)
{
    if (root == NULL)
        return;
    // Visit Left subtree
    InOrder_Traversal(root->left);
    // Print the data
    cout << root->data << " ";
    // Print the right subtree
    InOrder_Traversal(root->right);
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
    InOrder_Traversal(root);
    return 0;
}