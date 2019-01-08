#include<stdio.h>
/*struct A{
	int a;
	char b;
}e1,e2;*/
main()
{
	/*e1.a=7;
	e1.b='f';
	e2.a=54;
	e2.b='j';*/
	int a=5;
	int *t;
	t=&a;
	//printf("%d  %c\n%d  %c\n",e1.a,e1.b,e2.a,e2.b);
	printf("%p,%d",t,*t    );
}
