#include<stdio.h>
main()
{
	int *i;
	int a=10;
	//i=(int *) malloc(sizeof(a));
	i=&a;
	printf("%d",*i);
}
