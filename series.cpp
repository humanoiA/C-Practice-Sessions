#include<stdio.h>
#include<conio.h>
int series(int);
main()
{
	int i,k;
	scanf("%d",&k);
	i=series(k);
	printf("%d",i);
}
int series(int x)
{
	int a=0,b,c,d;	
	while(a<=x)
	{
		a=1;
		b=a+series(x);
		a=b;
		a++;
	}
	if(a>=x)
	{
		return b;
	}
}
