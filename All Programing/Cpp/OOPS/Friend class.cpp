    #include <iostream>  
      
    using namespace std;  
      
    class A  
    {  
        int x =5;  
        friend class B;           // friend class.  
    };  
    class B  
    {  
      public:  
        void display(A &a)  
        {  
            cout<<"value of x is : "<<a.x;  
        }  
    };  
    int main()  
    {  
        A a;  
        B b;  
        b.display(a);  
        return 0;  
    }  
