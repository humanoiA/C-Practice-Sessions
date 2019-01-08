#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,t;
	scanf("%d\n",&t);
	while(t--)
	{   int k,count;
	
	//count=0;
		int arr[100];
		scanf("%d\n",&k);
	//	if(k%2==0)
	//	{
	//		for(i=0;i<k-1;i++)
	//		{
	//		scanf("%d\n",&arr[k]);
	//	}
	//	for(i=0;i<k;i++,k--)
	//	{
	//		if(arr[i]==arr[k])
	//		count=count+1;
	//	}
	//}
	//	if(k%2!=0)
		{
		for(i=0;i<k-1;i++)
		{
			scanf("%d\n",&arr[k]);
		}
		for(i=0;i<k-1;i++,k--)
		{
			if(arr[i]==arr[k])
			count=count+1;
		}
		}
		if(count==0)
		{
			printf("no\n");
		}
		else
		{
		printf("yes\n");
	}
		count=0;
		k=0;
	}
	return 0;
}
