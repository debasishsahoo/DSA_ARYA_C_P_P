
// C++ program to demonstrate function  
// declaration outside class 
  
#include <bits/stdc++.h> 
using namespace std; 
class ECStudents 
{ 
    public: 
    string ECStudentname; 
    int id; 
      
    // printname is not defined inside class defination 
    void printname(); 
      
    // printid is defined inside class defination 
    void printid() 
    { 
        cout << "ECStudent id is: " << id; 
    } 
}; 
  
// Definition of printname using scope resolution operator :: 
void ECStudents::printname() 
{ 
    cout << "ECStudentname is: " << ECStudentname;  
} 
int main() { 
      
    ECStudents obj1; 
    cout << "Enter your id: ";  
    cin >> obj1.id; 
    cout << "Enter your name: ";  
    cin >> obj1.ECStudentname;  
      
    
    //obj1.ECStudentname = "Debasish"; 
    //obj1.id=15; 
      
    // call printname() 
    obj1.printname(); 
    cout << endl; 
      
    // call printid() 
    obj1.printid(); 
    return 0; 
} 

