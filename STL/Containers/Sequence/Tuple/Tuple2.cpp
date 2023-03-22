#include <iostream>
#include <tuple>
using namespace std;
int main()
{
    // Initializing variables for unpacking
    int i_val;
    char ch_val;
    float f_val;

    // Initializing tuple
    tuple<int, char, float> tup1(20, 'g', 17.5);

    // Use of tie() without ignore
    tie(i_val, ch_val, f_val) = tup1;

    // Displaying unpacked tuple elements
    // without ignore
    cout << "The unpacked tuple values (without ignore) are : ";
    cout << i_val << " " << ch_val << " " << f_val;
    cout << endl;

    // Use of tie() with ignore
    // ignores char value
    tie(i_val, ignore, f_val) = tup1;

    // Displaying unpacked tuple elements
    // with ignore
    cout << "The unpacked tuple values (with ignore) are : ";
    cout << i_val << " " << f_val;
    cout << endl;

    // Initializing 1st tuple
    tuple<int, char, float> Tup1(20, 'g', 17.5);

    // Initializing 2nd tuple
    tuple<int, char, float> Tup2(30, 'f', 10.5);

    // Concatenating 2 tuples to return a new tuple
    auto Tup3 = tuple_cat(Tup1, Tup2);

    // Displaying new tuple elements
    cout << "The new tuple elements in order are : ";
    cout << get<0>(Tup3) << " " << get<1>(Tup3) << " ";
    cout << get<2>(Tup3) << " " << get<3>(Tup3) << " ";
    cout << get<4>(Tup3) << " " << get<5>(Tup3) << endl;

    return 0;
}
