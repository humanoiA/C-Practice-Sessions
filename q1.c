#include<stdio.h>
#include<string.h>
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		char a[20];
		int count,i,j;
		scanf("%s",a);
		for(i=0;i<strlen(a);i++)
		{
			if(a[i]!=3){
			
			count=1;
			for(j=i+1;j<strlen(a);j++)
			{
				if(a[i]==a[j] && a[i]!=3)
				{
					count+=1;
					a[j]=3;
				}
			}
			printf("%c-%d\n",a[i],count);
		}
		else 
		continue;
		}
	}
	return 0;
}
