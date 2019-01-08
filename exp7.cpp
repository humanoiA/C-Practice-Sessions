#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		{
			if(j>=i)
			{
			printf("%d",j);
		    }
		    else
		    {
		    printf(" ");
			}
		}
		printf("\n");
	}
}
