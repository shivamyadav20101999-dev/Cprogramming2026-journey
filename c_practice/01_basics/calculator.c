#include<stdio.h>
int main()
{
  int a,b;
  char op;

  printf("Enter First Number: ");
  scanf("%d",&a);

  printf("Enter Operation(+,-,*,/): ");
  scanf(" %c",&op);

  printf("Enter Secoand Number: ");
  scanf("%d",&b);

  if(op == '+')
  {
    printf("Answer: %d\n",a+b);
  }
  else if(op == '-')
  {
   printf("Answer: %d\n",a-b);
  }
  else if(op == '*')
  {
   printf("Answer: %d\n",a*b);
  }
  else if(op == '/')
  {
   if(b == 0)
    printf("Error: Not divide by zero");
   else
   printf("Answer: %d\n",a/b);
   }
  else
  {
   printf("Wrong Operation Enter");
  }
  return 0;
}
