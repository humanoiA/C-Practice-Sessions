#include<stdio.h>
main()
{
	char *ch,*lo;
	char to,loop;
	to='pointer';
	ch=&to;
	loop='enter';
	lo=&loop;
	printf("%c\n%c",ch,lo);
}
