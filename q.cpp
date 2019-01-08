#include<stdio.h>
main()
{
	int a=0;
	top:
		{
		printf("5\t");
		a++;
	}
	if(a<100)
	{
		goto top;
	}
}
