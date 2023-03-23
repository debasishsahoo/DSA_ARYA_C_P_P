#include <iostream>
#include <iterator>
#include <set>
using namespace std;

template <typename T>
void ShowSET1(set<T, greater<T>> ArgSet)
{
    set<int, greater<int>>::iterator it;

    for (it = ArgSet.begin(); it != ArgSet.end(); it++)
        cout << *it << " ";
    cout << endl;
}

template <typename T>
void ShowSET2(set<T> ArgSet)
{
    for (auto it = ArgSet.begin(); it != ArgSet.end(); it++)
        cout << *it << " ";
    cout << endl;
}

int main()
{
    // empty set container
    set<int, greater<int>> s1;

    // insert elements in random order
    s1.insert(40);
    s1.insert(30);
    s1.insert(60);
    s1.insert(20);
    s1.insert(50);

    // only one 50 will be added to the set
    s1.insert(50);
    s1.insert(10);

    // printing set s1
    set<int, greater<int>>::iterator itr;
    cout << "\nThe set s1 is : \n";

    ShowSET1(s1);

    // assigning the elements from s1 to s2
    set<int> s2(s1.begin(), s1.end());

    // print all elements of the set s2
    cout << "\nThe set s2 after assign from s1 is : \n";
    ShowSET2(s2);

    // remove all elements up to 30 in s2
    cout << "\ns2 after removal of elements less than 30 "
            ":\n";
    s2.erase(s2.begin(), s2.find(30));
    ShowSET2(s2);

    // remove element with value 50 in s2
    int num;
    num = s2.erase(50);
    cout << "\ns2.erase(50) : ";
    cout << num << " removed\n";
    ShowSET2(s2);

    int arr[] = {14, 12, 15, 11, 10};

    // initializes the set from an array
    set<int> s(arr, arr + 5);

    cout << num << " elements in reverse order\n";
    // prints all elements in reverse order
    ShowSET2(s);

    cout << "\nThe last element in set is " << *(s.rbegin());
    cout << endl;

    cout << num << " elements in order\n";
    for (auto it = s.crbegin(); it != s.crend(); it++)
        cout << *it << " ";
    cout << endl;

    cout << num << " elements in order\n";
    for (auto it = s.cbegin(); it != s.cend(); it++)
        cout << *it << " ";
    cout << endl;

    cout << "\n Size of Set:" << s.size() << endl;
    cout << "\n Max Size of Set:" << s.max_size() << endl;
    cout << "\n Empty of Set:" << s.empty() << endl;

    set<int> SET3{1, 2, 3, 4, 5};
    set<int>::iterator it1, it2;

    // defining it1 pointing to the first
    // element and it2 to the last element
    it1 = SET3.begin();
    it2 = SET3.end();

    // decrementing the it2 two times
    it2--;
    it2--;

    // erasing elements within the range
    // of it1 and it2
    SET3.erase(it1, it2);

    // Printing the set
    ShowSET2(SET3);

    return 0;
}
