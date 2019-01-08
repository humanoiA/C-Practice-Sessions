#include<stdio.h>
main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		{
			printf("*");
		}
			for(j=1;j<i;j++)
		{
		printf(" ");
		}
			for(j=1;j<i;j++)
		{
		printf(" ");
		}
		for(j=5;j>=i;j--)
		{
			printf("*");
		}
	//	if(i==5)
	//	printf(" ");
	//	else
		printf("\n");
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		for(j=5;j>i;j--)
		{
			printf(" ");
		}
		for(j=5;j>i;j--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
