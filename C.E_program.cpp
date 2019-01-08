#include<stdio.h>
#include<conio.h>
float fact(float);
int main()
{
float i;
float n=1;
float j;
float sum=0;
scanf("%f",&i);
while(n<=i)
{
	j=fact(n);
	sum=sum+(1/j);
	n++;
}
printf("value is %f",sum);
getch();
return 0;
}
float fact(float x)
{
float f;
if(x==0)
{
	f=1;
}
else
{
	f=1;
	for(int i=1;i<=x;i++)
	{
		f=i*f;
	}
	}
	return f;
}
