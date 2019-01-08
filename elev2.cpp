#include<stdio.h>
main()
{
	int k,r,i;
	int c;
	scanf("%d\n",&k);
	while(k--)
	{
		int arr[100];
		r=0,c=0;
		scanf("%d\n",&r);
		for(i=0;i<r;i++)
	{
		arr[i]=NULL;
	}
		
		for(i=0;i<r;i++)
		{
			scanf("%d",&arr[i]);
		}
		for(i=0;i<r;i++)
		{
			arr[i+1]=arr[i]|arr[i+1];
			c=arr[i+1];
		}
printf("%d\n",c);

}
}
