#include<stdio.h>
main()
{
	int a[4],i=0;
	while(i!=5)
	{
		scanf("%d",&a[i]);
		i++;
	}
	i=0;
	while(i!=3)
	{
		printf("%d\n",a[i]);
		i++;
	}
}
