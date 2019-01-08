#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,a[40],sum=0;
	scanf("%d",&i);
	for(j=0;j<i;j++)
	{
		scanf("%d",&a[j]);
		}
		for(j=0;j<i;j++)
		{
			sum=sum+a[j];
			}	
			
			printf("%d",sum/i);
}
