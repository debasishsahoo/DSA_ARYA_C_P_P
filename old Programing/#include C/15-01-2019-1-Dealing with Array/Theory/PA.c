    #include <stdio.h>  
    void main ()  
    {  
        int marks[6] = {56,78,88,76,56,89};  
        int i;    
        float avg;  
        for (i=0; i<6; i++ )   
        {  
            avg = avg + marks[i];   
        }    
        printf("the avg is:%f",avg);   
    }   
