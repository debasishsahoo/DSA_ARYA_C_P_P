#include <iostream>
#include <queue>

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

// BFS traversal function for binary tree
void bfs(Node *root)
{
    if (root == nullptr)
        return;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        int n = q.size();

        for (int i = 0; i < n; i++)
        {
            Node *node = q.front();
            q.pop();
            cout << node->data << " ";

            if (node->left != nullptr)
            {
                q.push(node->left);
            }
            if (node->right != nullptr)
            {
                q.push(node->right);
            }
        }
    }
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

    cout << "BFS traversal of the binary tree: ";
    bfs(root);

    return 0;
}
