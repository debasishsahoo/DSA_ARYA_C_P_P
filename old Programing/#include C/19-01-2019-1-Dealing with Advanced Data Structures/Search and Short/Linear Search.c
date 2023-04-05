    #include<stdio.h>   
    void main ()  
    {  
        int a[10] = {10, 23, 40, 1, 2, 0, 14, 13, 50, 9}; ///-----O(1)x 
        int item, i,flag;///------------n(1) 
        printf("\nEnter Item which is to be searched\n");//-----O(1)x
        scanf("%d",&item); ///-------------------O(1)x


        for (i = 0; i< 10; i++)  //1ms+1ms+1ms+2ms this for 1 iteration of forloop
        {  
            if(a[i] == item)   
            {  
                flag = i+1;  
                break;  
            }   
            else   
            flag = 0;  
        }   






        if(flag != 0)  
        {  
            printf("\nItem found at location %d\n",flag);  
        }  
        else  
        {  
            printf("\nItem not found\n");   
        }  
    }   
