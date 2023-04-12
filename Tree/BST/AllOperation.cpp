#include <iostream>

using namespace std;

// Node class for BST
class Node
{
public:
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

// Insertion operation
Node *insert(Node *root, int val)
{
    if (root == nullptr)
    {
        return new Node(val);
    }
    if (val < root->data)
    {
        root->left = insert(root->left, val);
    }
    else
    {
        root->right = insert(root->right, val);
    }
    return root;
}

// Searching operation
bool search(Node *root, int val)
{
    if (root == nullptr)
    {
        return false;
    }
    if (root->data == val)
    {
        return true;
    }
    else if (val < root->data)
    {
        return search(root->left, val);
    }
    else
    {
        return search(root->right, val);
    }
}

// Deletion operation
Node *remove(Node *root, int val)
{
    if (root == nullptr)
    {
        return root;
    }
    if (val < root->data)
    {
        root->left = remove(root->left, val);
    }
    else if (val > root->data)
    {
        root->right = remove(root->right, val);
    }
    else
    {
        if (root->left == nullptr)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == nullptr)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        Node *temp = root->right;
        while (temp->left != nullptr)
        {
            temp = temp->left;
        }
        root->data = temp->data;
        root->right = remove(root->right, temp->data);
    }
    return root;
}

// Inorder traversal operation
void In_Order(Node *root)
{
    if (root != nullptr)
    {
        In_Order(root->left);
        cout << root->data << " ";
        In_Order(root->right);
    }
}
// Preorder traversal operation
void Pre_Order(Node *root)
{
    if (root != nullptr)
    {
        cout << root->data << " ";
        Pre_Order(root->left);
        Pre_Order(root->right);
    }
}
// Postorder traversal operation
void Post_Order(Node *root)
{
    if (root != nullptr)
    {
        Post_Order(root->left);
        Post_Order(root->right);
        cout << root->data << " ";
    }
}

// Driver code
int main()
{
    Node *root = nullptr;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);

    cout << "In_Order traversal of the BST: ";
    In_Order(root);
    cout << endl;

    cout << "Pre_Order traversal of the BST: ";
    Pre_Order(root);
    cout << endl;

    cout << "Postorder traversal of the BST: ";
    Post_Order(root);
    cout << endl;

    cout << "Deleting 20 from the BST" << endl;
    root = remove(root, 20);
    cout << "In_Order traversal of the modified BST: ";
    In_Order(root);
    cout << endl;

    cout << "Searching for 40 in the BST: " << search(root, 40) << endl;
    cout << "Searching for 90 in the BST: " << search(root, 90) << endl;

    return 0;
}
