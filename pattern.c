#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,k=0;
	for(i=1;i<=9;i++)
	{
		i<=4?k++:k--;
		for(j=k+1;j<=4;j++)
		{
			if(i<=i)
			{
				printf("*");
			}
			if(j>=2*k-1)
			{
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
		
	}
}
