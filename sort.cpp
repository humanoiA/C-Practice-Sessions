#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;
	int a[5];
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			if(a[i]<a[j])
			a[j+1]=a[i];
		}
	}
	for(i=0;i<=4;i++)
	{
		printf("%d",a[i]);
	}
}
