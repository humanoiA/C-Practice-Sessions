#include<stdio.h>
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		int i,r,n,k,s,count=0,buy=1;
		scanf("%d%d%d",&n,&k,&s);
		r=n;
		
		if(n<k)
			{
				count=count+1;
			}
			n=n-k;
		for(i=1;i<=s;i++)
		{
		
		//	n=n-k;
	//	printf("%d--%d\n",i,n);
			if(i%7!=0)
			{
				if(n<k)
				{
					n=n+r;
					buy=buy+1;
				}
			}
			else if(i%7==0)
			{
				if(n<k||n==0)
				{
					count=count+1;
				}
			}
			
			n=n-k;
			
			
		}
		if(count>=1)
		{
			printf("-1\n");
		}
		else if(count==0)
		{
			printf("%d\n",buy);
		}
	}
	return 0;
}
