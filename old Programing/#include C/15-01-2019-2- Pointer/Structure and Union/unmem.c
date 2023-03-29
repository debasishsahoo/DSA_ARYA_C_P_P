#include <stdio.h>
union Job
{
   float salary;
   int workerNo;
} j;

int main()
{
   j.salary = 12.3;
   j.workerNo = 100;

   printf("Salary = %.1f\n", j.salary);
   printf("Number of workers = %d", j.workerNo);
   return 0;
}
