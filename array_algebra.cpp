#include<stdio.h>
#include<conio.h>
main()
{
	int A[3][3],i,j;
	printf("enter array data\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(j==2)
			{
				printf("%d\t\n",A[i][j]);
			}
			else
			{
			printf("%d\t",A[i][j]);
		    }
		}
	}
}
