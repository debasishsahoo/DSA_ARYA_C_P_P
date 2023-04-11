// #include <iostream>
// #include <vector>
// #include <cmath>
// #include <bits/stdc++.h>
// using namespace std;

// // Define the node structure for the binary tree
// struct Node
// {
//     int data;
//     Node *left;
//     Node *right;

//     // Constructor to create a new node
//     Node(int value)
//     {
//         data = value;
//         left = nullptr;
//         right = nullptr;
//     }
// };

// // Function to insert a new node into the binary tree
// Node *insertNode(Node *root, int value)
// {
//     // If the tree is empty, create a new root node
//     if (root == nullptr)
//     {
//         return new Node(value);
//     }

//     // Insert the new node into the left or right subtree
//     if (value < root->data)
//     {
//         root->left = insertNode(root->left, value);
//     }
//     else
//     {
//         root->right = insertNode(root->right, value);
//     }

//     return root;
// }

// // Function to get the height of the binary tree
// int getHeight(Node *root)
// {
//     if (root == nullptr)
//     {
//         return 0;
//     }

//     int leftHeight = getHeight(root->left);
//     int rightHeight = getHeight(root->right);

//     return max(leftHeight, rightHeight) + 1;
// }

// // Function to print the binary tree using a diagram
// void printTree(Node *root, int level, int indent, vector<string> &output)
// {
//     if (root == nullptr)
//     {
//         return;
//     }

//     // Increase the spacing between levels of the tree
//     int spacing = pow(2, level - 1) - 1;

//     // Add spaces to the output vector
//     string spaces(indent, ' ');
//     output.push_back(spaces);

//     // Add the node value to the output vector
//     output.push_back(to_string(root->data));

//     // Add spaces after the node value to keep the tree balanced
//     string extraSpaces(spacing, ' ');
//     output.push_back(extraSpaces);

//     // Recursively print the left and right subtrees
//     printTree(root->left, level + 1, indent, output);
//     printTree(root->right, level + 1, indent + spacing + 1, output);
// }

// // Main function to test the binary tree diagram printing
// int main()
// {
//     // Create the root node and insert some values
//     Node *root = nullptr;
//     root = insertNode(root, 8);
//     insertNode(root, 3);
//     insertNode(root, 10);
//     insertNode(root, 1);
//     insertNode(root, 6);
//     insertNode(root, 14);
//     insertNode(root, 4);
//     insertNode(root, 7);
//     insertNode(root, 13);

//     // Get the height of the tree
//     int height = getHeight(root);

//     // Print the binary tree diagram
//     vector<string> output;
//     printTree(root, 1, 0, output);

//     for (int i = 0; i < height; i++)
//     {
//         for (int j = 0; j < output.size(); j++)
//         {
//             if (j % height == i)
//             {
//                 cout << output[j];
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }

#include <iostream>
#include <vector>
#include <string>

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

// Function to get the height of a binary tree
int getHeight(Node *root)
{
    if (root == nullptr)
    {
        return 0;
    }

    int leftHeight = getHeight(root->left);
    int rightHeight = getHeight(root->right);

    return max(leftHeight, rightHeight) + 1;
}

// Function to print the binary tree diagram
void printTree(Node *root, int level, int indent, vector<string> &output)
{
    if (root == nullptr)
    {
        return;
    }

    // Add the current node to the output vector
    string nodeString = to_string(root->data);
    output[level][indent] = nodeString[0];

    // Recursively print the left and right subtrees
    printTree(root->left, level + 1, indent - (1 << (getHeight(root) - level - 2)), output);
    printTree(root->right, level + 1, indent + (1 << (getHeight(root) - level - 2)), output);
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

    // Get the height of the tree and allocate the output vector
    int height = getHeight(root);
    int width = (1 << height) - 1;
    vector<string> output(height, string(width, ' '));

    // Print the tree diagram
    printTree(root, 0, width / 2, output);

    for (const auto &line : output)
    {
        cout << line << endl;
    }

    return 0;
}
