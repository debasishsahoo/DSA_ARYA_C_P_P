#include <iostream>
using namespace std;
int main()
{
    int Math, Phy, Bio, Chem;
    float avg;
    float sum;
    cout << "Enter Marks for Phy: ";
    cin >> Phy;
    cout << "Enter Marks for Chem: ";
    cin >> Chem;
    cout << "Enter Marks for Bio: ";
    cin >> Bio;
    cout << "Enter Marks for Math: ";
    cin >> Math;
    sum = Phy + Chem + Bio + Math;
    cout << "The Sum of Marks is" << sum << endl;
    avg = sum / 4;
    cout << "The Avg is:" << avg << endl;
    return 0;
}
