#include<stdio.h>
#include<conio.h>
main()
{
	int k,i=0,j=1;
	do
	{  
	    j=1;
		i++;
	do
	{
		k=i*j;
		if(j==11)
		{
			printf("\n");
		}
		else
		{
			printf("%d  ",k);
		}
		j++;
	}
	 while(j<=11);
 }
  while(i<10);
} 
