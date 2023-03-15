    #include<stdio.h>  
    #include<conio.h>  
    void main(){  
    FILE *fp;  
    char c;  
    clrscr();  
    fp=fopen("C:\\test\\file.txt","r");  
      
    while((c=fgetc(fp))!=EOF){  
    printf("%c",c);  
    }  
      
    rewind(fp);//moves the file pointer at beginning of the file  
      
    while((c=fgetc(fp))!=EOF){  
    printf("%c",c);  
    }  
      
    fclose(fp);    
    getch();    
    }    
