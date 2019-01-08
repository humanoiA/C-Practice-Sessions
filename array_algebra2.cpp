#include<stdio.h>
#include<conio.h>
main()
{
	int A[3][3],B[3][3],C[3][3],i,j;
	printf("enter data for array 1\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter element of row %d\n",i);
			printf("enter element of column %d\n",j);
			scanf("%d",&A[i][j]);
		}
	}
	printf("enter data for array 2\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter element of row %d\n",i);
			printf("enter element of column %d\n",j);
			scanf("%d",&B[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==0&&j==0)
			{
				C[i][j]=A[i][j]*B[i][j]+A[i+1][j]*B[i][j+1]+A[i+2][j]*B[i][j+2];
				printf("%d\t",C[i][j]);
			}
			else if(i==0&&j==1)
			{
			C[i][j]=A[i][j-1]*B[i+1][j-1]+A[i+1][j-1]*B[i+1][j]+A[i+2][j-1]*B[i+1][j+1];	
			printf("%d\t",C[i][j]);
		    }
		    else if(i==0&&j==2)
		    {
		    	C[i][j]=A[i][j-2]*B[i+2][j-2]+A[i+1][j-2]*B[i+2][j-1]+A[i+2][j-2]*B[i+2][j];
		    	printf("%d\n",C[i][j]);
			}
			else if(i==1&&j==0)
			{
				C[i][j]=A[i-1][j+1]*B[i-1][j]+A[i][j+1]*B[i-0][j+1]+A[i+1][j+1]*B[i-1][j+2];
				printf("%d\t",C[i][j]);
			}
			else if(i==1&&j==1)
			{
				C[i][j]=A[i-1][j]*B[i][j-1]+A[i][j]*B[i][j]+A[i+1][j]*B[i][j+1];
				printf("%d\t",C[i][j]);
			}
			else if(i==1&&j==2)
			{
				C[i][j]=A[i-1][j-1]*B[i+1][j-2]+A[i][j-1]*B[i+1][j-1]+A[i+1][j-1]*B[i+1][j];
				printf("%d\n",C[i][j]);
			}
			else if(i==2&&j==0)
			{
				C[i][j]=A[i-2][j+2]*B[i-2][j]+A[i-1][j+2]*B[i-2][j+1]+A[i][j+2]*B[i-2][j+2];
				printf("%d\t",C[i][j]);
			}
			else if(i==2&&j==1)
			{
				C[i][j]=A[i-2][j-1]*B[i-1][j-1]+A[i-1][j+1]*B[i-1][j]+A[i][j+1]*B[i-1][j+1];
				printf("%d\t",C[i][j]);
			}
			else
			{
				C[i][j]=A[i-2][j]*B[i][j-2]+A[i-1][j]*B[i][j-1]+A[i][j]*B[i][j];
				printf("%d\n",C[i][j]);
			}
		}
	}
} 
