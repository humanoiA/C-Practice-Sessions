#include<stdio.h>
#include<conio.h>
int main()
{
	int i,k=1,count=0;
	scanf("%d",&i);
	while(k<=i)
	{
		if(i%k==0)
			{ 
				count=count+1;
				}	
				k++;
	}
	if(count>1)
				printf("prime");
				else
				printf("not prime");
	return 0;
}
