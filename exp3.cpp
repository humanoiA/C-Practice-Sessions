#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	int i=258;
	int *iptr=&i;
	printf("%d,%d",*((char*)iptr),*((char*)iptr+1));
}

