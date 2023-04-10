#include <iostream>

using namespace std;

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

bool hasCycle(ListNode *head)
{
    if (!head || !head->next)
    {
        return false; // empty or single node linked list cannot have a cycle
    }
    ListNode *slow = head;
    ListNode *fast = head->next;
    while (fast && fast->next)
    {
        if (slow == fast)
        {
            return true; // cycle detected
        }
        slow = slow->next;
        fast = fast->next->next;
    }
    return false; // no cycle detected
}

int main()
{
    // Example linked list with a cycle
    ListNode *head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);
    head->next->next->next->next = head->next; // cycle
    cout << hasCycle(head) << endl;            // output: 1 (true)




    

    // Example linked list without a cycle
    ListNode *head2 = new ListNode(1);
    head2->next = new ListNode(2);
    head2->next->next = new ListNode(3);
    head2->next->next->next = new ListNode(4);
    cout << hasCycle(head2) << endl; // output: 0 (false)

    return 0;
}
