#include <iostream>
#include <unordered_set>

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
    unordered_set<ListNode *> visited; // hash table to keep track of visited nodes
    while (head)
    {
        if (visited.find(head) != visited.end())
        {
            return head; // start node of cycle found
        }
        visited.insert(head);
        head = head->next;
    }
    return nullptr; // no cycle found
}

int main()
{
    // Example linked list with a cycle
    ListNode *head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);
    head->next->next->next->next = head->next; // cycle
    ListNode *start = detectCycle(head);
    if (start)
    {
        cout << start->val << endl; // output: 2
    }

    // Example linked list without a cycle
    ListNode *head2 = new ListNode(1);
    head2->next = new ListNode(2);
    head2->next->next = new ListNode(3);
    head2->next->next->next = new ListNode(4);
    ListNode *start2 = detectCycle(head2);
    if (start2)
    {
        cout << start2->val << endl;
    }
    else
    {
        cout << "No cycle found." << endl; // output: No cycle found.
    }

    return 0;
}
