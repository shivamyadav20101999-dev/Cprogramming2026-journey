#include<stdio.h>
int main()
{
   char name[] = "Shivam";
   int age = 28;
   char grade = 'A';
   double salary = 80000;

   printf("Name : %s\n",name);
   printf("Age : %d\n",age);
   printf("Grade : %c\n",grade);
   printf("Salary : %.2f\n" ,salary);

   return 0;
}
