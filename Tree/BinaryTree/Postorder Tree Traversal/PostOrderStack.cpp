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
void postorder(Tree *root)
{
    // If empty return;
    if (root == NULL)
        return;
    stack<Tree *> s1, s2;
    Tree *temp = root;
    s1.push(temp);
    // Continue till stack is empty
    while (!s1.empty())
    {
        temp = s1.top();
        s1.pop();
        // Push the top element of first stack
        s2.push(temp);
        // Push the left child of the top element
        if (temp->left != NULL)
            s1.push(temp->left);
        // Push the right child of the top element
        if (temp->right != NULL)
            s1.push(temp->right);
    }
    // Print the second stack
    while (!s2.empty())
    {
        cout << s2.top()->data << " ";
        s2.pop();
    }
    cout << endl;
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
    cout << "Postorder Traversal" << endl;
    postorder(root);
    return 0;
}
