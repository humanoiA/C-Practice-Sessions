#include<stdio.h>
#include<string.h>
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		char str[8];
		int i,j,count2=0;
		scanf("%s",&str);
		for(i=0;i<8;i++)
		{
			if((str[0]=='0'&&str[8]=='1'))
			{
				count2=count2+1;
			}
			if((str[0]=='1'&&str[8]=='0'))
			{
				count2=count2+1;
			}
			if((str[i]=='1'&&str[i+1]=='0'))
			{
				count2=count2+1;
			}
			if((str[i]=='0'&&str[i+1]=='1'))
			{
				count2=count2+1;
			}
		}
		if(count2>2)
		{
			printf("non-uniform\n");
		}
		else if(count2<=2)
		{
			printf("uniform\n");
		}
		}
	
	return 0;
}
