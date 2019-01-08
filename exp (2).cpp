#include<stdio.h>
#include<conio.h>
main()
{
	int x,y=0,p=0;
	scanf("%d",&x);
	p:
	while(p<x && y<x)
	{
	y=y^2+1;
	p=p+1;
	printf("y=%d\n",y);
	printf("p=%d",p);	
	goto p;
	}
	getch();
}
