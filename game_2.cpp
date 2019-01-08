#include<stdio.h>
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		int N=0,K=0,i=0,j=0,len=0,k=0;
		int arr[1001];
		scanf("%d%d",&N,&K);
		len=N+K;
		for(i=0;i<N;i++)
		{
			scanf("%d",&arr[i]);
		}
	k=N;
		while(k--)
	{
		
		for(i=0;i<k;i++)
		{
			if(arr[i]>arr[i+1])
			{
					j=arr[i];
					arr[i]=arr[i+1];
					arr[i+1]=j;
			}
		}
	}
	len=(len/2);
	printf("%d\n",arr[len]);

	}
	return 0;
}
