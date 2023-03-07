//swap two numbers
#include<stdio.h>
int main()
{

int a,b;
printf("before swapping:\n");

printf("enter the value of a:");
scanf("%d",&a);


printf("enter the value of b:");
scanf("%d",&b);

a=a+b;
b=a-b;
a=a-b;

printf("a=%d\n",a);
printf("b=%d",b);

return 0;

}

