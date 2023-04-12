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
void preorder(Tree *root)
{
    // If empty return;
    if (root == NULL)
        return;
    stack<Tree *> s;
    s.push(root);
    // Continue till stack is empty
    while (!s.empty())
    {
        Tree *temp = s.top();
        // Print data
        cout << temp->data << " ";
        // Remove Data
        s.pop();
        // Add right child
        if (temp->right != NULL)
            s.push(temp->right);
        // Add Left child
        if (temp->left != NULL)
            s.push(temp->left);
    }
}

int main()
{
    Tree *root = new Tree(15);
    root->left = new Tree(12);
    root->right = new Tree(54);
    root->left->left = new Tree(8);
    root->left->right = new Tree(13);
    root->right->left = new Tree(18);
    root->left->left->left = new Tree(5);
    cout << "Preorder Traversal" << endl;
    preorder(root);
    return 0;
}
