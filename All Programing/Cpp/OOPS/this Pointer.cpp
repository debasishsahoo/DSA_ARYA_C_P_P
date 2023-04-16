    #include <iostream>  
    using namespace std;  
    class Employee {  
       public:  
           int id; //data member (also instance variable)      
           string name; //data member(also instance variable)  
           float salary;  
           Employee(int id, string name, float salary)    
            {    
                this->id = id;    
                this->name = name;    
                this->salary = salary;   
            }    
           void display()    
            {    
                cout<<id<<"  "<<name<<"  "<<salary<<endl;    
            }    
    };  
    int main(void) {  
        Employee e1 =Employee(1, "DEBASISH", 890000); //creating an object of Employee   
        Employee e2=Employee(2, "SAHOO", 59000); //creating an object of Employee  
        e1.display();    
        e2.display();    
        return 0;  
    }  
