    #include <iostream>  
    using namespace std;  
    void fun(int);  
    void fun(int &);   
    int main()  
    {  
    int a=10;  
    fun(a); // error, which f()?  
    return 0;  
    }  
    void fun(int x)  
    {  
    std::cout << "Value of x is : " <<x<< std::endl;  
    }  
    void fun(int &b)  
    {  
    std::cout << "Value of b is : " <<b<< std::endl;  
    }  
