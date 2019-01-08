#include<stdio.h>
struct base{
	int i;
	char c;
}t;
int main()
{
	struct base t;
	t.i=43;
	t.c='d';
	printf("%d%c",t.i,t.c);
}
