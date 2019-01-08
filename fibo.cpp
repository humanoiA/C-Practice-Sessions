#include<stdio.h>
main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		int a,b,c,count=0,inp,sum=0;
	scanf("%d",&inp);
	a=0;
	b=1;
	while(count<inp)
	{
		c=a+b;
		if(c<inp)
		{
			
		if(c%2==0)
		{
			sum=sum+c;
		}
		a=b;
		b=c;
		}
		count=count+1;
	}
	printf("%d\n",sum);
	
	}
}
