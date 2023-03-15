    #include <iostream>  
    using namespace std;  
    namespace First {    
        void sayHello() {   
            cout<<"Hello First Namespace"<<endl;          
        }    
    }    
    namespace Second  {    
           void sayHello() {   
               cout<<"Hello Second Namespace"<<endl;   
           }    
    }   
    int main()  
    {  
     First::sayHello();  
     Second::sayHello();  
    return 0;  
    }  
