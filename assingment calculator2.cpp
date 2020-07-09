

#include<stdio.h>
int main()
{
char op;
int a, b;
printf("enter an Operator = ");
scanf("%c",&op);
printf("enter first number in = ");
scanf("%d",&a);
printf("enter second number in = ");
scanf("%d",&b);
switch(op)
{
case '+':
printf("SUM is = %d\n", a+b);
break;
case '-':
printf("DIFFERENCE is = %d\n", a-b);
break;
case '*':
printf("PRODUCT is = %d\n", a*b);
break;
case '/':
printf("REMAINDER is = %d\n", a%b);
break;
default:
printf("Oops TRY AGAIN!!!");
}
return 0;
}
