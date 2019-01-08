#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	scanf("%d",&i);
//	while(i>=1 && i<=1000)
//	{
		int count=0,k=1;
				while(k<=i)
		{
			if(i%k==0)
			{
				count=count+1;
			}
			k++;
		}
	if(count==2)
	{
		printf("prime");
		}
		else 
		{
			printf("not prime");
		}
//		i++;	
	}
//	return 0;
