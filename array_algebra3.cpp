#include<stdio.h>
#include<conio.h>
main()
{
	int A[3][3],B[3][3],C[3][3],i,j;
	printf("Value For Array 1\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter Value for row %d,column %d\n",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	printf("Value For Array 2\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter Value for row %d,column %d\n",i,j);
			scanf("%d",&B[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		
				C[i][j]=A[i][j]+B[i][j];
		}
	}
	printf("Addition of two arrays eauals =\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(j==2)
			{
				printf("%d\t\n",C[i][j]);
			}
			else
			{
			printf("%d\t",C[i][j]);
		    }
		}
	}
}
