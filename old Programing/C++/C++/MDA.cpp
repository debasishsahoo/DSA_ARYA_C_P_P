#include <iostream>  
using namespace std;  
int main()  
{  
  int test[3][3];  //declaration of 2D array   
    test[0][0]=10;  //initialization   
    test[0][1]=20;   
    test[1][1]=30;  
    test[1][2]=50;  
    test[2][0]=60;  
    test[2][2]=70;  
    //traversal    
    for(int i = 0; i < 3; ++i)  
    {  
        for(int j = 0; j < 3; ++j)  
        {  
            cout<< test[i][j]<<" ";  
        }  
        cout<<"\n"; //new line at each row   
    }  
    return 0;  
}  
