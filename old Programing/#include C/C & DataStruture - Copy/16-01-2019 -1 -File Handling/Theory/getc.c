    #include<stdio.h>  
    #include<conio.h>  
    void main(){  
    FILE *fp;  
    char c;  
    //clrscr();  
    fp=fopen("C:\\test\\myfile.txt","r");  
      
    while((c=fgetc(fp))!=EOF){  
    printf("%c",c);  
    }  
    fclose(fp);  
    getch();  
    }  
