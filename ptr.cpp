#include<stdio.h>
int main()
{
	int *p;
	int r=4;
	p=&r;
	//int f=65;
	printf("%d\t",r);
	printf("%d\t",&r);
	printf("%d\t",p);
	printf("%d\t",*p);
	printf("%d\t",*&p);
	printf("%d\t",&*p);
	printf("%d\t",&p);
	//printf("\n%c",f);
}
