#include <stdio.h>
#include <conio.h>

int main(void)
  {
    FILE *in, *out;
    char ch;

    clrscr();

    if ((in = fopen("c:\\tcwork\\data.dat", "rt")) == NULL)
      {
	fprintf(stderr, "Cannot open input file.\n");
	return 1;
      }

    if ((out = fopen("c:\\tcwork\\data.bak", "wt")) == NULL)
      {
	printf("Cannot open output file.\n");
	return 1;
      }

    while (!feof(in))
      {
	ch=fgetc(in);

	//if (ch>='A' && ch<='Z') ch+=32;
	//else if (ch>='a' && ch<='z') ch-=32;

	if ((ch>='A' && ch<='W') || (ch>='a' && ch<='w')) ch+=3;
	else if ((ch>='X' && ch<='Z') || (ch>='x' && ch<='z')) ch-=23;

	fputc(ch,out);
      }

    fclose(in);
    fclose(out);

    printf("\n\n\t\tThe output file has been created successfully....");

    getch();

    return 0;
  }















