#include <iostream>
#include <utility>
using namespace std;

// Driver Code
int main()
{
    // defining a pair
    pair<int, char> PAIR1;
    pair<string, double> PAIR2("Debasish", 1.23);
    pair<string, double> PAIR3;

    // first part of the pair
    PAIR1.first = 100;
    // second part of the pair
    PAIR1.second = 'G';

    cout << PAIR1.first << " ";
    cout << PAIR1.second << endl;

    cout << PAIR2.first << " ";
    cout << PAIR2.second << endl;

    PAIR3 = make_pair("Sahoo", 4.56);

    cout << PAIR3.first << " ";
    cout << PAIR3.second << endl;

    pair<char, int> pair1 = make_pair('A', 1);
    pair<char, int> pair2 = make_pair('B', 2);

    cout << "Before swapping:\n ";
    cout << "Contents of pair1 = " << pair1.first << " "
         << pair1.second;
    cout << "Contents of pair2 = " << pair2.first << " "
         << pair2.second;
    pair1.swap(pair2);

    cout << "\nAfter swapping:\n ";
    cout << "Contents of pair1 = " << pair1.first << " "
         << pair1.second;
    cout << "Contents of pair2 = " << pair2.first << " "
         << pair2.second;

    cout << endl;

    return 0;
}
