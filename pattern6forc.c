/*
     *
    ***
   *****
  *******
 *********
*/

#include<stdio.h>
int i,j,g;
int main()
{
	for(i=1;i<=5;i++)
	{
		for(g=5;g>=i;g--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}

