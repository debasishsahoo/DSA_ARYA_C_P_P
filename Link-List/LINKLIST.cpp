#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void insertFront(Node **head, int data)
{

    // dynamically create memory for this newNode
    Node *newNode = (Node *)malloc(sizeof(Node));

    // assign data value
    newNode->data = data;
    // change the next node of this newNode
    // to current head of Linked List
    newNode->next = *head;

    // re-assign head to this newNode
    *head = newNode;
}
void deleteFront(Node **head)
{
    Node *temp = *head;

    // if there are no nodes in Linked List can't delete
    if (*head == NULL)
    {
        cout << "Linked List Empty, nothing to delete";
        return;
    } // move head to next node *head = (*head)->next;
    cout << "Value deleted: " << temp->data << endl;
}
void display(Node *node)
{
    cout << "\n\n";
    // as linked list will end when Node is Null

    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n"
         << endl;
}
int main()
{
    Node *head = NULL;

    // Need '&' i.e. address as we need to change head
    insertFront(&head, 6);
    insertFront(&head, 12);
    insertFront(&head, 18);
    insertFront(&head, 24);
    insertFront(&head, 30);

    // No '&' as head is not changed
    display(head);

    deleteFront(&head);
    deleteFront(&head);

    display(head);
    return 0;
}