#include<stdio.h>
#include<conio.h>
main()
{
	int d,num,sum=0,rev;
	scanf("%d",&num);
	while(num!=0)
	{
		d=num%10;
		rev=(rev*10)+d;
		num=num/10;
	}
	printf("reverse is %d",rev);
}
