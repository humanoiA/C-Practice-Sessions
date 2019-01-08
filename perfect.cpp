#include<stdio.h>
#include<conio.h>
main()
{
	int sum=0,i,j,k=1;
//	scanf("%d",&i);
//	p=i;
	for(i=2;i<=1000;i++)
	{
		sum=0;
		for(k=1;k<i;k++)
		{
			j=i%k;
			if(j==0)
			{
				sum=sum+k;
			
			}
		}
	if(sum==i)
	printf("%d\n",i);
	}
}
