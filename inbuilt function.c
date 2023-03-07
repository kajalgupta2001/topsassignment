//inbuilt function:

#include<stdio.h>
#include<conio.h>
int main()
{
	char s[100];
	printf("enter the string:");
	scanf("%s",&s);
	int i=0;
	while(s[i]!='\0')
	{
		i++;
	}
	printf("length of string is:%d",i);
	
	getch();
	return 0;
}
