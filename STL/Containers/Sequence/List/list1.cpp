#include <iostream>
#include <list>
#include <iterator>
using namespace std;

void ShowList(list<int> g)
{
    list<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}

int main()
{
    // defining list
    list<int> Alist{12, 45, 8, 6};

    for (auto i : Alist)
    {
        cout << i << ' ';
    }
    cout << endl;

    // Dynamic Insert
    list<int> listX, listY;

    for (int i = 0; i < 10; ++i)
    {
        listX.push_back(i * 2);
        listY.push_front(i * 3);
    }

    cout << "\nList 1 (listX) is : ";
    ShowList(listX);

    cout << "\nList 2 (listY) is : ";
    ShowList(listY);

    cout << "\nlistX.front() : " << listX.front();
    cout << "\nlistX.back() : " << listX.back();

    cout << "\nlistX.pop_front() : ";
    listX.pop_front();
    ShowList(listX);

    cout << "\nlistY.pop_back() : ";
    listY.pop_back();
    ShowList(listY);

    cout << "\nlistX.reverse() : ";
    listX.reverse();
    ShowList(listX);

    cout << "\nlistY.sort(): ";
    listY.sort();
    ShowList(listY);

    list<int> demoList;
    demoList.push_back(10);
    demoList.push_back(20);
    demoList.push_back(30);
    demoList.push_back(40);
    cout << "\nDemoList: ";
    ShowList(demoList);
    demoList.push_front(5);
    demoList.push_front(6);
    demoList.push_front(7);
    cout << "\nDemoList: ";
    ShowList(demoList);

    list<int> LIST;

    // check if list is empty
    if (LIST.empty())
        cout << "Empty List\n";
    else
        cout << "Not Empty\n";

    // Add elements to the List
    LIST.push_back(10);
    LIST.push_back(20);
    LIST.push_back(30);
    LIST.push_back(40);

    // check again if list is empty
    if (LIST.empty())
        cout << "Empty List\n";
    else
        cout << "Not Empty\n";

    // using assign() to insert multiple numbers
    // creates 3 occurrences of "2"
    LIST.assign(3, 2);

    // initializing list iterator to beginning
    list<int>::iterator it = LIST.begin();

    // iterator to point to 3rd position
    advance(it, 2);

    // using insert to insert 1 element at the 3rd position
    // inserts 5 at 3rd position
    LIST.insert(it, 5);

    // Printing the new list
    cout << "The list after inserting"
         << " 1 element using insert() is : ";
    for (list<int>::iterator i = LIST.begin(); i != LIST.end(); i++)
        cout << *i << " ";

    cout << endl;

    // using insert to insert
    // 2 element at the 4th position
    // inserts 2 occurrences
    // of 7 at 4th position
    LIST.insert(it, 2, 7);

    // Printing the new list
    cout << "The list after inserting"
         << " multiple elements "
         << "using insert() is : ";

    for (list<int>::iterator i = LIST.begin(); i != LIST.end(); i++)
        cout << *i << " ";

    cout << endl;

    return 0;
}
