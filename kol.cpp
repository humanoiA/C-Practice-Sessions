#include<stdio.h>
#include<conio.h>
main()
{
	int A[5],i,j;
	printf("Enter Array Elements");
	for(i=0;i<5;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<5;i++)
	
	{
		for(j=i+1;j<=5;j++)
		{
			if(A[i]==A[j])
			{
				A[i]=0;
			}
		}
		printf("%d",A[i]);
	}
	printf("\nArray Without Duplicate Elements is- \n");
	for(i=0;i<5;i++)
	{
		if(A[i]!=0)
		printf("%d",A[i]);
	}
	getch();
}
