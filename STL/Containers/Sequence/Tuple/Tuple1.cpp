#include <iostream>
#include <tuple> // for tuple
using namespace std;
int main()
{
    // Declaring tuple
    tuple<char, int, float> Tpl;

    // Assigning values to tuple using make_tuple()
    Tpl = make_tuple('a', 10, 15.5);

    // Printing initial tuple values using get()
    cout << "The initial values of tuple are : ";
    cout << get<0>(Tpl) << " " << get<1>(Tpl);
    cout << " " << get<2>(Tpl) << endl;

    // Use of get() to change values of tuple
    get<0>(Tpl) = 'b';
    get<2>(Tpl) = 20.5;

    // Printing modified tuple values
    cout << "The modified values of tuple are : ";
    cout << get<0>(Tpl) << " " << get<1>(Tpl);
    cout << " " << get<2>(Tpl) << endl;






    tuple<char, int, float> TPL(20, 'g', 17.5);
    // Use of size to find tuple_size of tuple
    cout << "The size of tuple is : ";
    cout << tuple_size<decltype(TPL)>::value << endl;

    // Initializing 1st tuple
    tuple<int, char, float> tup1(20, 'g', 17.5);

    // Initializing 2nd tuple
    tuple<int, char, float> tup2(10, 'f', 15.5);

    // Printing 1st and 2nd tuple before swapping
    cout << "The first tuple elements before swapping are : ";
    cout << get<0>(tup1) << " " << get<1>(tup1) << " "
         << get<2>(tup1) << endl;
    cout << "The second tuple elements before swapping are : ";
    cout << get<0>(tup2) << " " << get<1>(tup2) << " "
         << get<2>(tup2) << endl;

    // Swapping tup1 values with tup2
    tup1.swap(tup2);

    // Printing 1st and 2nd tuple after swapping
    cout << "The first tuple elements after swapping are : ";
    cout << get<0>(tup1) << " " << get<1>(tup1) << " "
         << get<2>(tup1) << endl;
    cout << "The second tuple elements after swapping are : ";
    cout << get<0>(tup2) << " " << get<1>(tup2) << " "
         << get<2>(tup2) << endl;

    return 0;
}
