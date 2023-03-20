#include <iostream>
#include <string>
#include <utility>
using namespace std;

int main()
{
    pair<string, int> g1;
    pair<string, int> g2("Debasis", 3);
    pair<string, int> g3(g2);
    pair<int, int> g4(5, 10);

    g1 = make_pair(string("Sahoo"), 1);
    g2.first = "MR.";
    g2.second = 2;

    cout << "This is pair g" << g1.second << " with "
         << "value " << g1.first << "." << endl
         << endl;

    cout << "This is pair g" << g3.second << " with value "
         << g3.first
         << "This pair was initialized as a copy of "
         << "pair g2" << endl
         << endl;

    cout << "This is pair g" << g2.second << " with value "
         << g2.first << "\nThe values of this pair were"
         << " changed after initialization." << endl
         << endl;

    cout << "This is pair g4 with values " << g4.first
         << " and " << g4.second
         << " made for showing addition. \nThe "
         << "sum of the values in this pair is "
         << g4.first + g4.second << "." << endl
         << endl;

    cout << "We can concatenate the values of"
         << " the pairs g1, g2 and g3 : "
         << g1.first + g3.first + g2.first << endl
         << endl;

    cout << "We can also swap pairs "
         << "(but type of pairs should be same) : " << endl;
    cout << "Before swapping, "
         << "g1 has " << g1.first << " and g2 has "
         << g2.first << endl;
    swap(g1, g2);
    cout << "After swapping, "
         << "g1 has " << g1.first << " and g2 has "
         << g2.first;

    return 0;
}
