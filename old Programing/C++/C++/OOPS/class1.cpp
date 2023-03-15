#include <bits/stdc++.h> 
using namespace std; 
class SIT 
{ 
    // Access specifier 
    public: 
  
    // Data Members 
    string ECStudent; 
  
    // Member Functions() 
    void printname() 
    { 
       cout << "ECStudents is: " << ECStudent; 
    } 
}; 
  
int main() { 
  
    // Declare an object of class SIT 
    SIT obj1; 
  
    // accessing data member 
    obj1.ECStudent = "Debasish"; 
  
    // accessing member function 
    obj1.printname(); 
    return 0; 
} 
