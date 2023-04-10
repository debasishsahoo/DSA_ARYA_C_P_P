#include <iostream>

using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int data)
    {
        val = data;
        next = NULL;
    }
};

void insertAtBeginning(ListNode **headRef, int data)
{
    ListNode *newNode = new ListNode(data);
    newNode->next = *headRef;
    *headRef = newNode;
}

void insertAtEnd(ListNode **headRef, int data)
{
    ListNode *newNode = new ListNode(data);
    if (*headRef == NULL)
    {
        *headRef = newNode;
    }
    else
    {
        ListNode *current = *headRef;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
    }
}

void insertAtPosition(ListNode **headRef, int data, int position)
{
    if (position < 0)
    {
        return;
    }
    if (position == 0)
    {
        insertAtBeginning(headRef, data);
    }
    else
    {
        ListNode *newNode = new ListNode(data);
        ListNode *current = *headRef;
        for (int i = 0; i < position - 1 && current != NULL; i++)
        {
            current = current->next;
        }
        if (current == NULL)
        {
            return;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

void deleteAtBeginning(ListNode **headRef)
{
    if (*headRef == NULL)
    {
        return;
    }
    ListNode *temp = *headRef;
    *headRef = (*headRef)->next;
    delete temp;
}

void deleteAtEnd(ListNode **headRef)
{
    if (*headRef == NULL)
    {
        return;
    }
    if ((*headRef)->next == NULL)
    {
        delete *headRef;
        *headRef = NULL;
    }
    else
    {
        ListNode *current = *headRef;
        while (current->next->next != NULL)
        {
            current = current->next;
        }
        delete current->next;
        current->next = NULL;
    }
}

void deleteAtPosition(ListNode **headRef, int position)
{
    if (*headRef == NULL || position < 0)
    {
        return;
    }
    if (position == 0)
    {
        deleteAtBeginning(headRef);
    }
    else
    {
        ListNode *current = *headRef;
        for (int i = 0; i < position - 1 && current->next != NULL; i++)
        {
            current = current->next;
        }
        if (current->next == NULL)
        {
            return;
        }
        ListNode *temp = current->next;
        current->next = temp->next;
        delete temp;
    }
}

bool search(ListNode *head, int data)
{
    ListNode *current = head;
    while (current != NULL)
    {
        if (current->val == data)
        {
            return true;
        }
        current = current->next;
    }
    return false;
}

void reverseList(ListNode **headRef)
{
    ListNode *current = *headRef;
    ListNode *prev = NULL;
    ListNode *next = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *headRef = prev;
}

void printList(ListNode *head)
{
    ListNode *current = head;
    while (current != NULL)
    {
        cout << current->val << " ";
        current = current->next;
    }
}

int main()
{
    ListNode *head = NULL;

    // insert 1 at the beginning
    insertAtBeginning(&head, 1);
    printList(head); // 1

    // insert 2 at the end
    insertAtEnd(&head, 2);
    printList(head); // 1 2

    // insert 3 at position 1
    insertAtPosition(&head, 3, 1);
    printList(head); // 1 3 2

    // delete first element
    deleteAtBeginning(&head);
    printList(head); // 3 2

    // delete last element
    deleteAtEnd(&head);
    printList(head); // 3

    // delete element at position 0
    deleteAtPosition(&head, 0);
    printList(head); // 3

    // search for an element
    cout << search(head, 3) << endl; // 1
    cout << search(head, 2) << endl; // 0

    // reverse the list
    reverseList(&head);
    printList(head); // 3

    return 0;
}
