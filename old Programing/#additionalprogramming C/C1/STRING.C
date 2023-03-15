#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

void my_strdisplay(const char *);
int my_strlen(const char *);
char *my_strupr(char *);
char *my_strlwr(char *);
char *my_strcpy(char *,const char *);
char *my_strcat(char *,const char *);
int my_strcmp(const char *,const char *);
int my_strcmpi(const char *,const char *);

void main(void)
  {
    char *str1="CAL",*str2="cal",str3[20];

    clrscr();

    my_strdisplay(str1);
    my_strdisplay(str2);

    printf("\n\n\t\tThe difference value is %d....",my_strcmp(str1,str2));
    printf("\n\n\t\tThe difference value is %d....",strcmp(str1,str2));
    printf("\n\n\t\tThe difference value is %d....",strcmpi(str1,str2));
    printf("\n\n\t\tThe difference value is %d....",my_strcmpi(str1,str2));

    getch();
  }

int my_strlen(const char *strr)
  {
    int i=0;

    while(*(strr+i)!='\x0')
      {
	i++;
      }

    return(i);
  }

void my_strdisplay(const char *strr)
  {
    int i=0;

    printf("\n\n\t\tSo the string is ");

    while(*(strr+i)!='\x0')
      {
	printf("%c",*(strr+i));
	i++;
      }

    printf("....");
  }

char *my_strlwr(char *strr)
  {
    int i=0;

    while(*(strr+i)!='\x0')
      {
	if(*(strr+i)>='A' && *(strr+i)<='Z') *(strr+i)+=32;
	i++;
      }

    return(strr);
  }

char *my_strupr(char *strr)
  {
    int i=0;

    while(*(strr+i)!='\x0')
      {
	if(*(strr+i)>='a' && *(strr+i)<='z') *(strr+i)-=32;
	i++;
      }

    return(strr);
  }

char *my_strcpy(char *dest,const char *src)
  {
    int i=-1;

    do
      {
	i++;
	*(dest+i)=*(src+i);
      }while(*(src+i)!='\x0');

    return(dest);
  }

char *my_strcat(char *dest,const char *src)
  {
    int i;
    int lendest,lensrc;

    lendest=my_strlen(dest);
    lensrc=my_strlen(src);

    for(i=0;i<=lensrc;i++)
      {
	*(dest+i+lendest)=*(src+i);
      }

    return(dest);
  }

int my_strcmp(const char *strr1,const char *strr2)
  {
    int diff=0,i;
    int len1,len2;

    len1=my_strlen(strr1);
    len2=my_strlen(strr2);

    for(i=0;i<=len1 && i<=len2 && diff==0;i++)
      {
	diff=*(strr1+i)-*(strr2+i);
      }

    return(diff);
  }

int my_strcmpi(const char *strr1,const char *strr2)
  {
    int diff=0,i;
    int len1,len2;

    len1=my_strlen(strr1);
    len2=my_strlen(strr2);

    for(i=0;i<=len1 && i<=len2 && diff==0;i++)
      {
	diff=toupper(*(strr1+i))-toupper(*(strr2+i));
      }

    return(diff);
  }

















































 //   a => 97  z => 122
 //   A => 65  Z => 90


































