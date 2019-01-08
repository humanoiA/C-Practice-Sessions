#include<stdio.h>
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		int n,i,j;
		int count=0,cnt=0;
		int arr[100];
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		if(n%2!=0)
		{
		for(i=0,j=(n)/2;i<=((n)/2),j<n;i++,j++)
		{
			if((arr[i]==arr[i+1]||arr[i]==(arr[i+1]+1))&&(arr[j]==arr[j+1]||arr[j]==(arr[j+1]-1)))
			{
				count = count+1;
			}
		}
		if(count==(n/2))
		{
			for(i=0,j=(n-1);i<=((n-1)/2),j>=((n-1)/2);i++,j--)
			{
				if(arr[i]==arr[j])
				cnt=cnt+1;
			}
		}
		printf("%d and %d",count,cnt);
	}
	}
}
