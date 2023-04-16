// Cpp program to illustrate the 
// concept of Constructors 
#include <iostream> 
using namespace std; 
class abc { 
public: 
	int a, b; 
	// Default Constructor 
	abc() 
	{ 
		a = 10; 
		b = 20; 
	} 
}; 
int main() 
{ 
	// Default constructor called automatically 
	// when the object is created 
	abc c; 
	cout << "a: " << c.a << endl << "b: " << c.b<<endl; 
	return 1; 
} 
 
