#include<stdio.h>
#include<conio.h>
int gcd(int,int);
main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=gcd(a,b);
	printf("%d",c);
}
gcd(int i ,int j)
{   
	if(i!=0&&j!=0)
	{
		if(i>j)
		{
			if(j!=0)
			{
				i=i%j;
				gcd(j,i);
			}
		}
		else
		{
			if(i!=0)
			{
				j=j%i;
				gcd(i,j);
			}
		else if(i==0)
		{
			return j;
		}
		else if(j==0)
		{
			return i;
		}
	}
}
}
	
