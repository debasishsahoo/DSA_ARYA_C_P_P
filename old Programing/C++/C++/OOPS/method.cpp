    #include <iostream>  
    using namespace std;  
    class Student {  
       public:  
           int id;//data member (also instance variable)      
           string name;//data member(also instance variable)      
           void insert(int i, string n)    
            {    
                id = i;    
                name = n;    
            }    
           void display()    
            {    
                cout<<id<<"  "<<name<<endl;    
            }    
    };  
    int main(void) {  
        Student s1; //creating an object of Student   
        Student s2; //creating an object of Student  
        s1.insert(10, "Debasish");    
        s2.insert(20, "Sahoo");    
        s1.display();    
        s2.display();  
        return 0;  
    }  
