#include<stdio.h>
main()
{
	int i,j,k;
	for(k=1;k<=5;k++)
	{
		for(j=1;j<k;j++)
		{
			printf(" ");
		}
			for(i=5;i>=k;i--)
		{	
			printf("* ");
		}
		printf("\n");
	}
}
