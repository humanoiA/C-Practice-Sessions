#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	int b[80],j=0,k,i,count=0,temp,a;
	scanf("%d",&i);
	while(i!=1)
	{
		k=i%2;
		b[j]=k;
		i=i/2;
		j++;
		++count;
	}
	a=j-1;
	j=0;
	while(j<a)
	{
		temp=b[j];
		b[j]=b[a];
		b[a]=temp;
		j++;
		a--;
	}
	printf("1\n"); 
	for(j=0;j<count;j++)
	{
		printf("%d\n",b[j]);
	}
}
