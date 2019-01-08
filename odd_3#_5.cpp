#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,i;
	scanf("%d,%d",&x,&y);
	for(i=x;i<=y;i++)
	{
		if(i%2!=0)
		{
			if(i%5!=0 && i%3!=0)
			{
				printf("%d",i);
			}
			printf(" ");
		}
	}
}
