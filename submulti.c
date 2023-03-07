//add sub multi using 2d arrey
#include<stdio.h>
int main()
{
	int r,c;
	printf("enter the size of row's:-");
	scanf("%d",&r);
	printf("enter the size of collom:-");
	scanf("%d",&c);
	
	int a[r][c],i,j;
	printf("enter first matrix element:-");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("matrix is:-\n");
	for(i=0;i<r,i++)
	{
		for(j=0;j<;j++)
		{
			printf("%d",a[i][j]);
		}
		print("\n");
	}
	int b[r][c];
	printf("enter second matrix element:-");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("second matrix is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
	int res;
	printf("addition is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			res=a[i][j]+b[i][j];
			printf("%d",res);
		}
		printf("\n");
	}
	printf("subtraction is :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			res=a[i][j]-b[i][j];
			printf("%d",res);
		}
		printf("\n");
	}
	
	printf("multiplication is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			res=a[i][j]*b[i][j];
			printf("%d",res);
		}
		printf("\n");
	}
	return 0;
	
	
	
	
	
	
	
	
	
	
}
