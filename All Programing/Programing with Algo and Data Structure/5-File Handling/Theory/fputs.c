    #include<stdio.h>  
    #include<conio.h>  
    void main(){  
    FILE *fp;  
    //clrscr();  
      
    fp=fopen("C:\\test\\myfile2.txt","w");  
    fputs("hello c programming",fp);  
      
    fclose(fp);  
    getch();  
    }  
