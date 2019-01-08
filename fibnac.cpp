#include<stdio.h>
#include<conio.h>
main()
{
	int i=0,j=1,sum=i,num;
	printf("\nENTER THE LIMIT FOR THE SERIES");
	scanf("%d",&num);
	while(sum<num)
	{
		printf("%d ",sum);
		i=j;
		j=sum;
		sum=i+j;
	}
}
