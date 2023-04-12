#include <iostream>

using namespace std;

class Node
{
public:
    int key;
    int height;
    Node *left;
    Node *right;

    Node(int key)
    {
        this->key = key;
        height = 1;
        left = right = nullptr;
    }
};

class AVLTree
{
private:
    Node *root;

    int height(Node *node)
    {
        if (node == nullptr)
        {
            return 0;
        }
        return node->height;
    }

    int balanceFactor(Node *node)
    {
        if (node == nullptr)
        {
            return 0;
        }
        return height(node->left) - height(node->right);
    }

    void fixHeight(Node *node)
    {
        node->height = max(height(node->left), height(node->right)) + 1;
    }

    Node *rotateRight(Node *node)
    {
        Node *temp = node->left;
        node->left = temp->right;
        temp->right = node;
        fixHeight(node);
        fixHeight(temp);
        return temp;
    }

    Node *rotateLeft(Node *node)
    {
        Node *temp = node->right;
        node->right = temp->left;
        temp->left = node;
        fixHeight(node);
        fixHeight(temp);
        return temp;
    }

    Node *balance(Node *node)
    {
        fixHeight(node);
        if (balanceFactor(node) == 2)
        {
            if (balanceFactor(node->left) < 0)
            {
                node->left = rotateLeft(node->left);
            }
            return rotateRight(node);
        }
        if (balanceFactor(node) == -2)
        {
            if (balanceFactor(node->right) > 0)
            {
                node->right = rotateRight(node->right);
            }
            return rotateLeft(node);
        }
        return node;
    }

    Node *insertNode(Node *node, int key)
    {
        if (node == nullptr)
        {
            return new Node(key);
        }
        if (key < node->key)
        {
            node->left = insertNode(node->left, key);
        }
        else
        {
            node->right = insertNode(node->right, key);
        }
        return balance(node);
    }

    Node *findMin(Node *node)
    {
        if (node->left == nullptr)
        {
            return node;
        }
        return findMin(node->left);
    }

    Node *removeMin(Node *node)
    {
        if (node->left == nullptr)
        {
            return node->right;
        }
        node->left = removeMin(node->left);
        return balance(node);
    }

    Node *removeNode(Node *node, int key)
    {
        if (node == nullptr)
        {
            return nullptr;
        }
        if (key < node->key)
        {
            node->left = removeNode(node->left, key);
        }
        else if (key > node->key)
        {
            node->right = removeNode(node->right, key);
        }
        else
        {
            Node *left = node->left;
            Node *right = node->right;
            delete node;
            if (right == nullptr)
            {
                return left;
            }
            Node *min = findMin(right);
            min->right = removeMin(right);
            min->left = left;
            return balance(min);
        }
        return balance(node);
    }
    void inOrder(Node *node)
    {
        if (node == nullptr)
        {
            return;
        }
        inOrder(node->left);
        cout << node->key << " ";
        inOrder(node->right);
    }

public:
    AVLTree()
    {
        root = nullptr;
    }

    void insert(int key)
    {
        root = insertNode(root, key);
    }

    void remove(int key)
    {
        root = removeNode(root, key);
    }
    void inOrder()
    {
        inOrder(root);
    }
};

int main()
{
    AVLTree tree;

    // Insert some nodes
    tree.insert(50);
    tree.insert(25);
    tree.insert(75);
    tree.insert(10);
    tree.insert(30);
    tree.insert(60);
    tree.insert(90);
    tree.insert(5);
    tree.insert(15);
    tree.insert(35);
    tree.insert(55);
    tree.insert(65);
    tree.insert(85);
    tree.insert(95);

    // Print the tree in-order
    cout << "In-order traversal: ";
    tree.inOrder();
    cout << endl;

    // Remove some nodes
    tree.remove(25);
    tree.remove(35);
    tree.remove(55);

    // Print the tree in-order
    cout << "In-order traversal: ";
    tree.inOrder();
    cout << endl;

    return 0;
}
