    #include <iostream>  
    using namespace std;  
    class Employee {  
       public:  
           int id;//data member (also instance variable)      
           string name;//data member(also instance variable)  
           float salary;  
           void insert(int i, string n, float s)    
            {    
                id = i;    
                name = n;    
                salary = s;  
            }    
           void display()    
            {    
                cout<<id<<"  "<<name<<"  "<<salary<<endl;    
            }    
    };  
    int main(void) {  
        Employee e1; //creating an object of Employee   
        Employee e2; //creating an object of Employee  
        e1.insert(10, "Debasish",100000);    
        e2.insert(20, "Sahoo", 200000);    
        e1.display();    
        e2.display();    
        return 0;  
    }  
