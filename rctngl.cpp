#include<stdio.h>
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		int arr[4];
		int i,count1=0,count2=0,count3=0,count4=0;
		for(i=0;i<4;i++)
		{
			scanf("%d",&arr[i]);
		}
		for(i=0;i<4;i++)
		{
			if(arr[0]==arr[i])
			{
				count1=count1+1;
			}
			if(arr[1]==arr[i])
			{
				count2=count2+1;
			}
			if(arr[2]==arr[i])
			{
				count3=count3+1;
			}
			if(arr[3]==arr[i])
			{
				count4=count4+1;
			}
		}
	
		if((count1==2||count1==4)&&(count2==2||count2==4)&&(count3==2||count3==4)&&(count4==2||count4==4))
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}
