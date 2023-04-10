#include <iostream>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *prev;
    ListNode *next;
    ListNode(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insertAtBeginning(ListNode **head, int val)
{
    ListNode *newNode = new ListNode(val);
    if (*head == NULL)
    {
        newNode->next = newNode;
        newNode->prev = newNode;
        *head = newNode;
    }
    else
    {
        ListNode *lastNode = (*head)->prev;
        newNode->next = *head;
        newNode->prev = lastNode;
        (*head)->prev = newNode;
        lastNode->next = newNode;
        *head = newNode;
    }
}

void insertAtEnd(ListNode **head, int val)
{
    ListNode *newNode = new ListNode(val);
    if (*head == NULL)
    {
        newNode->next = newNode;
        newNode->prev = newNode;
        *head = newNode;
    }
    else
    {
        ListNode *lastNode = (*head)->prev;
        newNode->next = *head;
        newNode->prev = lastNode;
        (*head)->prev = newNode;
        lastNode->next = newNode;
    }
}

// Function to insert a node at a random position in the circular doubly linked list
void randomInsert(ListNode **head, int val)
{
    ListNode *newNode = new ListNode(val);
    if (*head == NULL)
    {
        *head = newNode;
        newNode->prev = newNode;
        newNode->next = newNode;
    }
    else
    {
        // Generate a random number between 0 and the number of nodes in the list
        int count = 0;
        ListNode *currentNode = *head;
        do
        {
            count++;
            currentNode = currentNode->next;
        } while (currentNode != *head);
        int pos = rand() % count;

        // Insert the new node at the random position
        currentNode = *head;
        for (int i = 0; i < pos; i++)
        {
            currentNode = currentNode->next;
        }
        newNode->prev = currentNode->prev;
        newNode->next = currentNode;
        currentNode->prev->next = newNode;
        currentNode->prev = newNode;
        if (pos == 0)
        {
            *head = newNode;
        }
    }
}

// Function to delete a node at a random position from the circular doubly linked list
void randomDelete(ListNode **head)
{
    if (*head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    // Generate a random number between 0 and the number of nodes in the list
    int count = 0;
    ListNode *currentNode = *head;
    do
    {
        count++;
        currentNode = currentNode->next;
    } while (currentNode != *head);
    int pos = rand() % count;

    // Delete the node at the random position
    currentNode = *head;
    for (int i = 0; i < pos; i++)
    {
        currentNode = currentNode->next;
    }
    if (currentNode == *head)
    {
        *head = (*head)->next;
    }
    currentNode->prev->next = currentNode->next;
    currentNode->next->prev = currentNode->prev;
    delete currentNode;
}

void deleteAtBeginning(ListNode **head)
{
    if (*head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    ListNode *firstNode = *head;
    ListNode *lastNode = firstNode->prev;
    if (firstNode == lastNode)
    {
        *head = NULL;
    }
    else
    {
        *head = firstNode->next;
        (*head)->prev = lastNode;
        lastNode->next = *head;
    }
    delete firstNode;
}

void deleteAtEnd(ListNode **head)
{
    if (*head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    ListNode *lastNode = (*head)->prev;
    ListNode *secondLastNode = lastNode->prev;
    if (lastNode == *head)
    {
        *head = NULL;
    }
    else
    {
        secondLastNode->next = *head;
        (*head)->prev = secondLastNode;
    }
    delete lastNode;
}

void printList(ListNode *head)
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    ListNode *currNode = head;
    do
    {
        cout << currNode->val << " ";
        currNode = currNode->next;
    } while (currNode != head);
    cout << endl;
}

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

    randomInsert(&head, 3);
    randomInsert(&head, 5);
    randomInsert(&head, 1);
    randomInsert(&head, 7);
    cout << "Original list: ";
    printList(head);

    // Delete a node at a random position
    randomDelete(&head);

    // Print the contents of the modified list
    cout << "Modified list: ";
    printList(head);

    return 0;
}
