    #include <iostream>  
    using namespace std;  
    class A  
    {  
        public:  
        int display()  
        {  
            std::cout << "Class A" << std::endl;  
        }  
    };  
    class B  
    {  
        public:  
        void display()  
        {  
            std::cout << "Class B" << std::endl;  
        }  
    };  
    class C : public A, public B  
    {  
        void view()  
        {  
            display();  
        }  
    };  
    int main()  
    {  
        C c;  
        c.display();  
        return 0;  
    } 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
//	
//	class C : public A, public B  
//{  
//    void view()  
//    {  
//        A :: display();         // Calling the display() function of class A.  
//        B :: display();         // Calling the display() function of class B.  
//  
//    }   



//class A  
//{  
//   public:  
//void display()  
//{  
//   cout<<?Class A?;  
//}   
//} ;  
//class B  
//{   
//  public:  
// void display()  
//{  
// cout<<?Class B?;  
//} 












//    int main()  
//    {  
//        B b;  
//       b.display();               // Calling the display() function of B class.  
//       b.B :: display();       // Calling the display() function defined in B class.  
//    }   
