    #include <iostream>    
    using namespace std;    
    class Cal {    
        public:    
    static int add(int a,int b){      
            return a + b;      
        }      
    static int add(int a, int b, int c)      
        {      
            return a + b + c;      
        }      
    };     
    int main(void) {    
        Cal C;                                                    //     class object declaration.   
        cout<<C.add(10, 20)<<endl;      
        cout<<C.add(12, 20, 23);     
       return 0;    
    }    
