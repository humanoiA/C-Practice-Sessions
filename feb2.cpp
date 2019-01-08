#include<stdio.h>
#include<string.h>
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		int n,m,x,k,p=1,i,counte=0,counto=0;
		scanf("%d%d%d%d",&n,&m,&x,&k);
		char str[k];
		scanf("%s",str);
		for(i=0;i<k;i++)
		{
			if(str[i]=='E')
			counte=counte+1;
			else
			counto=counto+1;
		}
		for(p=1;n>=0&&counte>=x&&counto>=x;p++)
		{
			if(p%2==0)
			{	
					n=n-x;
					counte=counte-x;	
			}
			else
			{		
					n=n-x;
					counto=counto-x;		
			}
		}
		if(p<=m)
		printf("yes\n");
		else
		printf("no\n");
	}
	return 0;
}
