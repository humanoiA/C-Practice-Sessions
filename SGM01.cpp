#include<stdio.h>
#include<string.h>
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		char str[100001];
		int i,j,count1=0,count2=0,count3=0,count4=0;
		scanf("%s",&str);
		for(i=0;i+1<strlen(str);i++)
		{
			if((str[i]=='1'&&str[i+1]=='1'))
			{
				count1=count1+1;
			}
			if((str[i]=='1'&&str[i+1]=='0'))
			{
				count2=count2+1;
			}
			if((str[i]=='0'&&str[i+1]=='1'))
			{
				count3=count3+1;
			}
		}
			printf("%d %d %d",count1,count2,count3);
		if((((count2>1)||(count3>1))||count1==0))
		{
			printf("NO\n");
		}
		else if((count2==1)||(count3==1))
		{
			if((str[0]=='0')&&(str[strlen(str)-1]=='0'))
			{
				printf("YES\n");
			}
			else if((str[0]=='0')&&(str[strlen(str)-1]=='1'))
			{
				printf("YES\n");
			}
			else if((str[0]=='1')&&(str[strlen(str)-1]=='0'))
			{
				printf("YES\n");				
			}
			else
			{
				printf("NO\n");
			}
		}
		else 
		{
			printf("YES\n");
		}
	}
	return 0;
}
