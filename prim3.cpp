#include<stdio.h>
#include<conio.h>
main()
{
	int i=1;
	while(i>=1 && i<=10000)
	{
		int count=0,k=1;
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
		printf("%d\t",i);
		}
		i++;	
	}
//	return 0;
}
