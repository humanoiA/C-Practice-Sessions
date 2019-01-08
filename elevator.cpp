#include<stdio.h>
#include<conio.h>
main()
{
	int k;
	int n,v1,v2,a,b;
	scanf("%d\n",&k);
	while(k--)
	{	a=0,b=0,n=0,v1=0,v2=0;
		scanf("%d",&n);
		scanf("%d",&v1);
		scanf("%d",&v2);
	
	a=(2*n)/v2;
	b=(1.414*n)/v1;
	if(a>b)
	{
		printf("Elevator");
	}
	else
	{
		printf("Stairs");
	}
}
}
