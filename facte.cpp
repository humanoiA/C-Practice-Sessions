#include<stdio.h>
#include<conio.h>
main()
{
	int i=1,k=1,inp,temp,sum=0;
	scanf("%d",&temp);
	for(inp=1;inp<=temp;inp++)
	{
		
	while(i<=inp)
	{
		k=k*i;
		i++;
	}
		sum=sum+k;
	}
	printf("%d",sum);
}
