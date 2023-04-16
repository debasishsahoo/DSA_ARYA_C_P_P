// C++ program to explain destructors 

#include <bits/stdc++.h> 
using namespace std; 
class SIT 
{ 
	public: 
	int id; 
	
	//Definition for Destructor 
	~SIT() 
	{ 
		cout << "Destructor called for id: " << id <<endl; 
	} 
}; 

int main() 
{ 
	SIT obj1; 
	obj1.id=7; 
	int i = 0; 
	while ( i < 5 ) 
	{ 
		SIT obj2; 
		obj2.id=i; 
		i++;		 
	} // Scope for obj2 ends here 

	return 0; 
} // Scope for obj1 ends here 

