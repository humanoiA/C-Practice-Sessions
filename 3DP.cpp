#include<stdio.h>
int main()
{
	int n,i,j ,k=0,count=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			//if(i<j)
			{
				k=arr[j]+arr[i];
		if(k%2==1)
		{
			count=count+1;
		}
			}
		}
	}
	printf("%d",count);
	return 0;
	}
