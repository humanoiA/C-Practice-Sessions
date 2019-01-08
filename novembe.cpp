#include<stdio.h>
#include<string.h>
main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
	int l,i,countA,countB;
	char arr[1001];
		gets(arr);
		l=strlen(arr);
		for(i=0;i<l;i++)
		{
			if(arr[i]=='A')
			{
				countA=countA+1;
			}
		}
	}
}
