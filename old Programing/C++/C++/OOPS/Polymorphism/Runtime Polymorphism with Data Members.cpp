#include <iostream>    
using namespace std;    
class Animal {                                          //  base class declaration.  
    public:    
    string color = "Black";      
};     
class Dog: public Animal                       // inheriting Animal class.  
{      
 public:    
    string color = "Grey";      
};    
int main(void) {    
     Animal d= Dog();      
    cout<<d.color;     
}  
