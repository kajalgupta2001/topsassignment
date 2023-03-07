// reverse numbers:

#include<stdio.h>
int main()
{
	int n,r;
	printf("enter number:");
	scanf("%d",&n);
	
	while(n>0)// 1234>0  123>0,  12>0, 1>0,  0>0 false
	{
		r=n%10;        //n=1234 1234%10=4 r=4,  123%10=3 r=3, r=12%10=2, 1%10= r=1
		printf("%d",r); //r=4,r=3,r=2
		n=n/10;     //1234/10=123 n=123, 123/10=12 n=12,  n=12/10=1  n=1,  n=1/10=0 n=0
	}
	return 0;
}

