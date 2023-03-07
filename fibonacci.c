//fibonacci:

#include<stdio.h>
int main()
{
	int n,a=0,b=1,i,c;
	printf("enter the term of number:");//4
	scanf("%d",&n);//1 2 3 4 
	for(i=1;i<=n;i++)
	{
		printf("%d",a);//0
		c=a+b;//c=0+1 //c=1=1=2  c=1+2=3
		a=b;//a=1 a=1  a=2
		b=c;//b=1 b=2 b=3
	}
	return 0;
}
