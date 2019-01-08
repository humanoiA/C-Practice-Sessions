#include<stdio.h>
int main()
{
	int i,t,k,p,count,b,c;
	int arr[100];
	scanf("%d",&t);
	while(t--)
	{	k=0,p=0,count=0,b=0,c=0;
		scanf("%d",&k);
		for(i=0;i<k;i++)
		{
			scanf("%d",&arr[i]);
		}
		for(i=k;i<100;i++)
		{
			arr[i]='0';
		}
		if(k%2!=0)
		{
			if(arr[0]==1)
			{
				
		b=k/2;
		for(i=0;i<b;i++)
		{
			if(arr[i]+1==arr[i+1])
			{
				count=count+1;
			}
			}
			p=k/2;
		for(i=p;i<k;i++)
		{
			if(arr[i]-1==arr[i+1])
			{
				count=count+1;
			}
				}		
				c=k-1;
				if(count==c)
						{
							printf("yes\n");
						}
						else
				{
					printf("no\n");
					}

			}
			else
			printf("no\n");
					}
		else
		{
			printf("no\n");
		}
		}
	}
