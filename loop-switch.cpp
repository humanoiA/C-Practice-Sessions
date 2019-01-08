#include<stdio.h>
#include<conio.h>
main()
{
	int a=20,b=30,c,d;
	int X;
	printf("1. +\n");
	printf("2. *\n");
	scanf("%d", &X);  
	switch(X)
	{
		case (1):
	    	c=a+b;
    		printf("%d",c);
        	break;
		
		case (2):
			d=a*b;
			printf("%d",d);
			break;
			
	}
	getch();
}
