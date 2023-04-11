#include <iostream>

using namespace std;

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *detectCycle(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast && fast->next)
    {slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        { // cycle detected
            ListNode *tortoise = head;
            while (tortoise != slow)
            { // find the start node of the loop
                tortoise = tortoise->next;
                slow = slow->next;
            }return tortoise;}
    }
    return NULL; // no cycle found
}

int main()
{
    // Example linked list with a cycle
    ListNode *head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);
    head->next->next->next->next = head->next->next; // cycle
    cout << detectCycle(head)->val << endl;          // output: 2 (the start node of the loop)

    // Example linked list without a cycle
    ListNode *head2 = new ListNode(1);
    head2->next = new ListNode(2);
    head2->next->next = new ListNode(3);
    head2->next->next->next = new ListNode(4);
    cout << detectCycle(head2) << endl; // output: 0 (NULL)

    ListNode *head3 = new ListNode(1);
    head3->next = new ListNode(2);
    head3->next->next = new ListNode(3);
    head3->next->next->next = new ListNode(4);
    head3->next->next->next->next = new ListNode(5);
    head3->next->next->next->next->next = new ListNode(6);
    head3->next->next->next->next->next->next = head3; // cycle
    cout << detectCycle(head3)->val << endl;           // output: 0 (NULL)

    return 0;
}
