#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d;
	printf("Value PLease!");
	scanf("%d,%d",&a,&b);
	fumes:
		{
			c=a*b;
			printf("%d",c);
		
	    }
	tricks:
	    {
			d=a+b;
			printf("%d",d);
	    }
		if (a>b)
		{
			goto tricks;
		}
		else
		{
			goto fumes;
			
		}
		getch();
}
