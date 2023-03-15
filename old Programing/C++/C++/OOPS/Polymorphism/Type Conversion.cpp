    #include<iostream>  
    using namespace std;  
    void fun(int);  
    void fun(float); 
	 
    void fun(int i)  
    {  
        std::cout << "Value of i is : " <<i<< std::endl;  
    }  
    void fun(float j)  
    {  
        std::cout << "Value of j is : " <<j<< std::endl;  
    }  
    int main()  
    {  
        fun(12);  
        fun(1.2);  
        return 0;  
    }  
