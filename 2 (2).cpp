#include<stdio.h>
int main()
{
	int i,t,k,p,count,b,c,l;
	int arr[100];
	scanf("%d",&t);
	while(t--)
	{	k=0,p=0,count=0,b=0,c=0,l=0;
		scanf("%d",&k);
		for(i=0;i<k;i++)
		{
			scanf("%d",&arr[i]);
		}
	///	for(i=k;i<100;i++)
	//	{
	//		arr[i]='0';
	//	}
		if(k%2!=0)
		{
			if(arr[0]==1)
			{
				
		b=k/2;
		p=k-1;
		for(i=0;i<k;i++)
		
		{
			
		//	
			{
				/*if(arr[i]==arr[l])
				{
					count=count+1;
				}
				if(arr[l]-arr[l-1]==-1)
				{
					count=count+1;
				}
				if(arr[l]==arr[l-1])
				{
					count=count+1;
				}
			}
			if(arr[i]+1==arr[i+1])
			{
				count=count+1;
			}
			if(arr[i]==arr[i+1])
			{
				count=count+1;
			}*/
			if(arr[i]==arr[b])
			{
				count=count+1;
			}
				}
			}
			if(count==1)
			{
				int a;
				count=0;
				for(a=0,l=p;a<=p,l>=0;a++,l--)
				{
				if(arr[a]==arr[l])
				{
					count=count+1;
				}
				if(arr[l]==arr[l-1],arr[a]==arr[a+1],arr[i]+1==arr[i+1],arr[l]-arr[l-1]==-1)
				{
					count=count+1;
				}
			}
		printf("%d",count);
		}
	}
			//	c=k/2+1;
			/*	if(count%k==0)
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
	*/	}
		}
	}



