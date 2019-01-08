#include<stdio.h>
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		int i,n,x,s;
		scanf("%d%d%d",&n,&x,&s);
		int arr[n];
		for(i=0;i<n;i++)
		arr[i]=5;
		arr[x-1]=3;
		while(s--)
		{
			int a,b,temp;
			scanf("%d%d",&a,&b);
			temp=arr[a-1];
			arr[a-1]=arr[b-1];
			arr[b-1]=temp;
		}
		for(i=0;i<n;i++)
		{
			if(arr[i]==3)
			{
				printf("%d",i+1);
			}
	}

}
return 0;
}
