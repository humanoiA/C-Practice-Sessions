#include<stdio.h>
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		int num,rem;
		scanf("%d",&num);
		rem=num%8;
		if(rem==1||rem==2||rem==3)
		{
			num=num+3;
		}
		else if(rem==4||rem==5||rem==6)
		{
			num=num-3;
		}
		else if(rem==7)
		{
			num=num+1;
		}
		else if(rem==0)
		{
			num=num-1;
		}
		printf("%d",num);
		if(rem==3||rem==6)
		{
			printf("UB\n");
		}
		if(rem==2||rem==5)
		{
			printf("MB\n");
		}
		if(rem==1||rem==4)
		{
			printf("LB\n");
		}
		if(rem==7)
		{
			printf("SU\n");
		}
		if(rem==0)
		{
			printf("SL\n");
		}
	}
	return 0;	
}
