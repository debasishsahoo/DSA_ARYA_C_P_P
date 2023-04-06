#include <iostream>
using namespace std;
struct node
{
    struct node *prev;
    struct node *next;
    int data;
};
struct node *head;
void insertion_beginning();
void insertion_last();
void insertion_specified();
void deletion_beginning();
void deletion_last();
void deletion_specified();
void display();
void search();
int main()
{
    int choice = 0;
    while (choice != 9)
    {
        printf("\n*********Main Menu*********\n");
        printf("\nChoose one option from the following list ...\n");
        printf("\n===============================================\n");
        printf("\n1.Insert in Beginning\n2.Insert at Last\n3.Insert at any random location\n4.Delete from Beginning\n5.Delete from last\n6.Delete the node after the given data\n7.Search\n8.Show\n9.Exit\n");
        printf("\nEnter your choice?\n");
        scanf("\n%d", &choice);
        switch (choice)
        {
        case 1:
            insertion_beginning();
            break;
        case 2:
            insertion_last();
            break;
        case 3:
            insertion_specified();
            break;
        case 4:
            deletion_beginning();
            break;
        case 5:
            deletion_last();
            break;
        case 6:
            deletion_specified();
            break;
        case 7:
            search();
            break;
        case 8:
            display();
            break;
        case 9:
            exit(0);
            break;
        default:
            printf("Please enter valid choice..");
        }
    }
    return 0;
}
void insertion_beginning()
{
    struct node *ptr;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        cout << "\nOVERFLOW\n";
    }
    else
    {
        cout << "\nEnter Item value for Beginning:\n";
        cin >> item;

        if (head == NULL)
        {
            ptr->next = NULL;
            ptr->prev = NULL;
            ptr->data = item;
            head = ptr;
        }
        else
        {
            ptr->data = item;
            ptr->prev = NULL;
            ptr->next = head;
            head->prev = ptr;
            head = ptr;
        }
        cout << "\nNode inserted\n";
    }
    display();
}
void insertion_last()
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
        cout << "\nEnter value for Last:\n";
        cin >> item;
        ptr->data = item;
        if (head == NULL)
        {
            ptr->next = NULL;
            ptr->prev = NULL;
            head = ptr;
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->prev = temp;
            ptr->next = NULL;
        }
    }
    printf("\nnode inserted\n");
    display();
}
void insertion_specified()
{
    struct node *ptr, *temp;
    int item, loc, i;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        cout << "\n OVERFLOW\n";
    }
    else
    {
        temp = head;
        cout << "Enter the location:";
        cin >> loc;
        for (i = 0; i < loc; i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                cout << "\n There are less than" << loc << "elements\n";
                return;
            }
        }
        cout << "\nEnter value\n";
        cin >> item;
        ptr->data = item;
        ptr->next = temp->next;
        ptr->prev = temp;
        temp->next = ptr;
        temp->next->prev = ptr;
        cout << "\nnode inserted\n";
    }
    display();
}
void deletion_beginning()
{
    struct node *ptr;
    if (head == NULL)
    {
        cout << "\n UNDERFLOW\n";
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(head);
        cout << "\nnode deleted\n";
    }
    else
    {
        ptr = head;
        head = head->next;
        head->prev = NULL;
        free(ptr);
        cout << "\nnode deleted\n";
    }
    display();
}
void deletion_last()
{
    struct node *ptr;
    if (head == NULL)
    {
        cout << "\n UNDERFLOW\n";
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(head);
        cout << "\nnode deleted\n";
    }
    else
    {
        ptr = head;
        if (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->prev->next = NULL;
        free(ptr);
        cout << "\nnode deleted\n";
    }
    display();
}
void deletion_specified()
{
    struct node *ptr, *temp;
    int val;
    cout << "\n Enter the data after which the node is to be deleted : \n";
    cin >> val;
    ptr = head;
    while (ptr->data != val)
        ptr = ptr->next;
    if (ptr->next == NULL)
    {
        cout << "\nCan't delete\n";
    }
    else if (ptr->next->next == NULL)
    {
        ptr->next = NULL;
    }
    else
    {
        temp = ptr->next;
        ptr->next = temp->next;
        temp->next->prev = ptr;
        free(temp);
        cout << "\nnode deleted\n";
    }
    display();
}
void display()
{
    struct node *ptr;
    cout << "\n printing values...\n";
    ptr = head;
    while (ptr != NULL)
    {
        cout << "[" << ptr->data << "]<->";
        ptr = ptr->next;
    }
    cout << "NULL";
}
void search()
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
                cout << "\nitem found at location " << i + 1 << "\n";
                flag = 0;
                break;
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
            printf("\nItem not found\n");
        }
    }
    display();
}
