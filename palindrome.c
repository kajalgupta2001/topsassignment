//palindrome:

#include<stdio.h>
#include<conio.h>
int main()
{
	char str[100];
	printf("enter any string:");
	scanf("%s",str);
	
	printf("reverse string is:-%s",strrev(str));
	
	return 0;
}
