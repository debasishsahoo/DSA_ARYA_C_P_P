#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *head;

void Display()
{
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
    {
        cout << "Nothing to print\n";
    }
    else
    {
        cout << "\nprinting values . . . . .\n";
        while (ptr != NULL)
        {
            cout << "[" << ptr->data << "]"
                 << "->";
            ptr = ptr->next;
        }
        cout << "\n";
    }
}
void Begin_Insert()
{
    struct node *ptr;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if (ptr == NULL)
    {
        cout << "\nOVERFLOW";
    }
    else
    {
        cout << "\nEnter value for Begin_Insert()\n";
        cin >> item;
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        cout << "\nNode inserted\n";
    }
    Display();
}
void Last_Insert()
{
    struct node *ptr, *temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        cout << "\nOVERFLOW\n";
    }
    else
    {
        cout << "\nEnter value for Last_Insert()\n";
        cin >> item;
        ptr->data = item;
        if (head == NULL)
        {
            ptr->next = NULL;
            head = ptr;
            printf("\nNode inserted\n");
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("\nNode inserted\n");
        }
    }
    Display();
}
void Random_Insert()
{
    int i, loc, item;
    struct node *ptr, *temp;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        cout << "\nOVERFLOW\n";
    }
    else
    {
        cout << "\nEnter value for Random_Insert:\n";
        cin >> item;
        ptr->data = item;
        cout << "\nEnter the location after which you want to insert: \n";
        cin >> loc;
        temp = head;
        for (i = 0; i < loc; i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                cout << "\ncan't insert\n";
                return;
            }
        }
        ptr->next = temp->next;
        temp->next = ptr;
        cout << "\nNode inserted\n";
    }
    Display();
}
void Begin_Delete()
{
    struct node *ptr;
    if (head == NULL)
    {
        cout << "\nList is empty\n";
    }
    else
    {
        ptr = head;
        head = ptr->next;
        free(ptr);
        cout << "\nNode deleted from the Beginning ...\n";
    }
    Display();
}
void Last_Delete()
{
    struct node *ptr, *ptr1;
    if (head == NULL)
    {
        cout << "\nlist is empty\n";
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(head);
        cout << "\nOnly node of the list deleted ...\n";
    }
    else
    {
        ptr = head;
        while (ptr->next != NULL)
        {
            ptr1 = ptr;
            ptr = ptr->next;
        }
        ptr1->next = NULL;
        free(ptr);
        cout << "\nDeleted Node from the last ...\n";
    }
    Display();
}
void Random_Delete()
{
    struct node *ptr, *ptr1;
    int loc, i;
    cout << "\n Enter the location of the node after which you want to perform deletion \n";
    cin >> loc;
    ptr = head;
    for (i = 0; i < loc; i++)
    {
        ptr1 = ptr;
        ptr = ptr->next;

        if (ptr == NULL)
        {
            cout << "\nCan't delete\n";
            return;
        }
    }
    ptr1->next = ptr->next;
    free(ptr);
    cout << "\nDeleted node:" << loc + 1 << "\n";
    Display();
}
void Search()
{
    struct node *ptr;
    int item, i = 0, flag;
    ptr = head;
    if (ptr == NULL)
    {
        cout << "\nEmpty List\n";
    }
    else
    {
        cout << "\nEnter item which you want to search?\n";
        cin >> item;
        while (ptr != NULL)
        {
            if (ptr->data == item)
            {
                cout << "item found at location: " << i + 1;
                flag = 0;
            }
            else
            {
                flag = 1;
            }
            i++;
            ptr = ptr->next;
        }
        if (flag == 1)
        {
            cout << "Item not found\n";
        }
    }
    Display();
}
int main()
{
    int choice = 0;
    while (choice != 9)
    {
        cout << "\n\n*********Main Menu*********\n";
        cout << "\nChoose one option from the following list ...\n";
        cout << "\n===============================================\n";
        cout << "\n1.Insert in Beginning\n2.Insert at last\n3.Insert at any specified location\n4.Delete from Beginning\n5.Delete from last\n6.Delete node after specified location\n7.Search for an element\n8.Show\n9.Exit\n";
        cout << "\nEnter your choice?\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            Begin_Insert();
            break;
        case 2:
            Last_Insert();
            break;
        case 3:
            Random_Insert();
            break;
        case 4:
            Begin_Delete();
            break;
        case 5:
            Last_Delete();
            break;
        case 6:
            Random_Delete();
            break;
        case 7:
            Search();
            break;
        case 8:
            Display();
            break;
        case 9:
            exit(0);
            break;
        default:
            cout << "Please enter valid choice..\n";
        }
    }

    return 0;
}