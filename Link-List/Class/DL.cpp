#include <iostream>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode *prev;

    ListNode(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

// Insert a node at the beginning of the list
void insertAtBeginning(ListNode **head, int val)
{
    ListNode *newNode = new ListNode(val);
    newNode->next = *head;
    if (*head != NULL)
    {
        (*head)->prev = newNode;
    }
    *head = newNode;
}
// Insert a node at the end of the list
void insertAtEnd(ListNode **head, int val)
{
    ListNode *newNode = new ListNode(val);
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    ListNode *lastNode = *head;
    while (lastNode->next != NULL)
    {
        lastNode = lastNode->next;
    }
    lastNode->next = newNode;
    newNode->prev = lastNode;
}
// Insert a node at a given position in the list
void insertAtPosition(ListNode **head, int val, int pos)
{
    if (pos == 1)
    {
        insertAtBeginning(head, val);
        return;
    }
    ListNode *newNode = new ListNode(val);
    ListNode *current = *head;
    for (int i = 1; i < pos - 1 && current != NULL; i++)
    {
        current = current->next;
    }
    if (current == NULL)
    {
        cout << "Position out of range" << endl;
        return;
    }
    newNode->next = current->next;
    newNode->prev = current;
    if (current->next != NULL)
    {
        current->next->prev = newNode;
    }
    current->next = newNode;
}
// delete a node at the beginning of the list
void deleteAtBeginning(ListNode **head)
{
    if (*head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    ListNode *firstNode = *head;
    *head = firstNode->next;
    if (*head != NULL)
    {
        (*head)->prev = NULL;
    }
    delete firstNode;
}
// Delete a node at the end of the list
void deleteAtEnd(ListNode **head)
{
    if (*head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    ListNode *lastNode = *head;
    while (lastNode->next != NULL)
    {
        lastNode = lastNode->next;
    }
    if (lastNode->prev != NULL)
    {
        lastNode->prev->next = NULL;
    }
    else
    {
        *head = NULL;
    }
    delete lastNode;
}
// Delete the node at the given position in the list
void deleteAtPosition(ListNode **head, int pos)
{
    if (*head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    ListNode *current = *head;
    if (pos == 1)
    {
        *head = current->next;
        if (*head != NULL)
        {
            (*head)->prev = NULL;
        }
        delete current;
        return;
    }
    for (int i = 1; i < pos && current != NULL; i++)
    {
        current = current->next;
    }
    if (current == NULL)
    {
        cout << "Position out of range" << endl;
        return;
    }
    current->prev->next = current->next;
    if (current->next != NULL)
    {
        current->next->prev = current->prev;
    }
    delete current;
}
// Reverse the list
void reverseList(ListNode **head)
{
    ListNode *current = *head;
    ListNode *temp = NULL;
    while (current != NULL)
    {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }
    if (temp != NULL)
    {
        *head = temp->prev;
    }
}
// Print the list from head to tail
void printList(ListNode *head)
{
    ListNode *current = head;
    cout << "List: ";
    while (current != NULL)
    {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
}
// Print the list from
int main()
{
    ListNode *head = NULL;

    // Insert nodes at the beginning and end
    insertAtBeginning(&head, 3);
    insertAtEnd(&head, 5);
    insertAtBeginning(&head, 1);
    insertAtEnd(&head, 7);

    // Print the contents of the list
    cout << "Original list: ";
    printList(head);

    // Delete nodes from the beginning and end
    deleteAtBeginning(&head);
    deleteAtEnd(&head);

    // Print the contents of the modified list
    cout << "Modified list: ";
    printList(head);

    return 0;
}