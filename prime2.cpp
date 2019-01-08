#include<stdio.h>
#include<conio.h>
int main()
{
	int i=10,k,count=0;
	for(i=10;i<=100;i++)
	{
		k=1;
	while(k<=i)
	{
		if(i%k==0)
			{ 
				count=count+1;
				}	
				k++;
	}
	if(count==2)
	{
				printf("%d",i);
			}
}
	return 0;
}
