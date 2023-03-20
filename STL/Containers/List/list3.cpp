#include <bits/stdc++.h>
using namespace std;

void ShowList(list<int> g)
{
    for (auto it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}

int main()
{
    // Creating a list
    list<int> demoList;

    // Adding elements to the list
    demoList.push_back(10);
    demoList.push_back(20);
    demoList.push_back(30);
    demoList.push_back(40);

    // Initial list:
    cout << "Initial List: ";
    ShowList(demoList);

    // reversing the list
    demoList.reverse();

    // List after reversing the order of elements
    cout << "\n\nList after reversing: ";
    ShowList(demoList);

    // getting size of the list
    int size = demoList.size();
    cout << "The list contains " << size << " elements" << endl;

    demoList.resize(2);
    cout << "\n\nList after first resize: ";
    ShowList(demoList);

    demoList.resize(4);
    cout << "\n\nList after second resize: ";
    ShowList(demoList);
    // resize list to contain more elements
    // with a specified value
    demoList.resize(5, 50);
    cout << "\n\nList after third resize: ";
    ShowList(demoList);

    demoList.sort();
    cout << "\n\nList after Sort: ";
    ShowList(demoList);

    list<string> sList{"Z", "bye", "thanks", "debasish", "SAHOO"};

    // sort function
    sList.sort();
    cout << "\n\nList after Sort: ";
    for (auto it = sList.begin(); it != sList.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';

    // checking the max size of the list
    cout << sList.max_size() << endl;

    return 0;
}
