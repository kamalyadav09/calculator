#include <stdio.h>
int main()
{
int a,b;
char op;
printf("enter the a");
scanf("%d",&a);
printf("enter the b");
scanf("%d",&b);
printf("enter the operator");
scanf(" %c",&op);
switch(op)
  {
   case '+':
   printf("result is:- %d",a+b);
   break;
   case '-':
   printf("result is:- %d",a-b);
   break;
   case '*':
   printf("result is:- %d",a*b);
    break;
    case '%':
    printf("result is:- %d",a%b);
    break; 
    default:
    printf("invalid result");
  }
  return 0;
}

