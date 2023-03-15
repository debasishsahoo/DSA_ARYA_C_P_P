// C++ program to demonstrate private 
// access modifier 

#include<iostream> 
using namespace std; 

class Circle 
{ 
	// private data member 
	private: 
		double radius; 
	
	// public member function	 
	public:	 
		double compute_area(double r) 
		{ // member function can access private 
			// data member radius 
			radius = r; 
			
			double area = 3.14*radius*radius; 
			
			cout << "Radius is:" << radius << endl; 
			cout << "Area is: " << area; 
		} 
	
}; 

// main function 
int main() 
{ 
	// creating object of the class 
	Circle obj; 
	
	// trying to access private data member 
	// directly outside the class 
	obj.compute_area(1.5); 
	
	
	return 0; 
} 

