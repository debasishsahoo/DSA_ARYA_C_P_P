#include <iostream>  
using namespace std;  
int main () {  
       int num;  
       cout<<"Enter a number to check grade:";    
       cin>>num;  
            if (num <0 || num >100)    
            {    
                cout<<"wrong number";    
            }    
            else if(num >= 0 && num < 50){    
                cout<<"Fail";    
            }    
            else if (num >= 50 && num < 60)    
            {    
                cout<<"D Grade";    
            }    
            else if (num >= 60 && num < 70)    
            {    
                cout<<"C Grade";    
            }    
            else if (num >= 70 && num < 80)    
            {    
                cout<<"B Grade";    
            }    
            else if (num >= 80 && num < 90)    
            {    
                cout<<"A Grade";    
            }    
            else if (num >= 90 && num <= 100)    
            {    
                cout<<"A+ Grade";  
            }    
    }    
