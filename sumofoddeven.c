
//sum of even or odd numbers:

#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	
	printf("even number:\n");
	for(i=2;i<=n;i=i+2)
	{
		printf("%d\n",i);
		sum=sum+i;
	}
	printf("addition of even number:%d\n",sum);
	
	int a,add,v;
	printf("enter the no:");
	scanf("%d",&v);
	
	printf("odd no:");
	
	for(a=1;a<=v;a=a+2)
	{
		printf("%d\n",a);
		add=add+a;
     }
		printf("addition of two no :%d",add);


		return 0;
	
}
