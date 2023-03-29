    #include <stdio.h>  
    void main(){  
       FILE *fp;  
      
       fp = fopen("C:\\test\\myfile.txt","w+");  
       fputs("This is javatpoint", fp);  
        
       fseek( fp, 7, SEEK_SET );  
       fputs("Debasish Sahho", fp);  
       fclose(fp);  
    }  
