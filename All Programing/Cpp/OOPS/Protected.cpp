// C++ program to demonstrate 
// protected access modifier 
#include <bits/stdc++.h> 
using namespace std; 

// base class 
class Parent 
{ 
	// protected data members 
	protected: 
	int id_protected; 
	
}; 

// sub class or derived class 
class Child : public Parent 
{ 
	
	
	public: 
	void setId(int id) 
	{ 
		
		// Child class is able to access the inherited 
		// protected data members of base class 
		
		id_protected = id; 
		
	} 
	
	void displayId() 
	{ 
		cout << "id_protected is:" << id_protected << endl; 
	} 
}; 

// main function 
int main() { 
	
	Child obj1; 
	
	// member function of derived class can 
	// access the protected data members of base class 
	
	obj1.setId(81); 
	obj1.displayId(); 
	return 0; 
} 

