#include<stdio.h>
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		int a,b,c,d,e,sum;
		scanf("%d%d",&a,&b);
		if(a<10||b<10)
		{
		
		c=a/10;
		d=(a%10)+b;
		e=((c*10)+d%10);
		
	}
	else if(a>9&&b>9)
	{
		
	}
		printf("%d\n",e);
	}
	return 0;
}
