    #include <stdio.h>  
    main(){  
       FILE *fp;  
       fp = fopen("C:\\test\\file1.txt", "w");//opening file  
       fputc('a',fp);//writing single character into file  
       fclose(fp);//closing file  
    }  
