    #include <iostream>  
    using namespace std;  
    template<class T>  
    class A   
    {  
        public:  
        T num1 = 5;  
        T num2 = 6;  
        void add()  
        {  
            std::cout << "Addition of num1 and num2 : " << num1+num2<<std::endl;  
        }  
          
    };  
      
    int main()  
    {  
        A<int> d;  
        d.add();  
        return 0;  
    }  
