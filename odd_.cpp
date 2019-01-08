#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	printf("enter the range");
	scanf("%d,%d",&i,&j);
	if(i%2==0 && j%2==0)
	{
		int odd;
		printf("odd numbers are -");
		odd= i+1;
		if(i%3!=0 && j%5!=0)
		{
		while(odd<=j)
		{
		odd=odd+2;		
		}
	}
	}
	
	}
