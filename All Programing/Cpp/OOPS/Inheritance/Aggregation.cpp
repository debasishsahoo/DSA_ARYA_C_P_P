    #include <iostream>  
    using namespace std;  
    class Address {  
        public:  
       string addressLine, city, state;    
         Address(string addressLine, string city, string state)    
        {    
            this->addressLine = addressLine;    
            this->city = city;    
            this->state = state;    
        }    
    };  
    class Employee    
        {    
            private:  
            Address* address;  //Employee HAS-A Address   
            public:  
            int id;    
            string name;    
            Employee(int id, string name, Address* address)    
           {    
               this->id = id;    
               this->name = name;    
               this->address = address;    
           }    
         void display()    
           {    
               cout<<id <<" "<<name<< " "<<     
                 address->addressLine<< " "<< address->city<< " "<<address->state<<endl;    
           }    
       };   
    int main(void) {  
        Address a1= Address("Netguru build, Sec-5","SaltLake","WB");    
        Employee e1 = Employee(101,"Debasish",&a1);    
                e1.display();   
       return 0;  
    }  
