#include<stdio.h>
#include<string.h>
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		int N=0,P=0,cakewalk=0,hard=0;
		int j;
		scanf("%d%d",&N,&P);
		j=N;
		while(j--)
		{
			int ques;
			scanf("%d",&ques);
			if(ques>=(P/2))
			{
				cakewalk=cakewalk+1;
			}
			else if(ques<=(P/10))
			{
				hard=hard+1;
			}
		}
		if(cakewalk==1&&hard==2)
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}
	}
	return 0;
}
