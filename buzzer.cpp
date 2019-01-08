#include<stdio.h>
#include<conio.h>
 int a=10;
 void exp(void);
int main()
{
	char c='m';
	a=a+1;
	printf("%c%d",c,a);
	exp();
	getch();
	return 0;
}
void exp()
{
	a=a+1;
	printf("%d",a);
}
