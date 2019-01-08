#include<stdio.h>
//#include<stdlib.h>
void tower(int,char,char,char);
int main()
{
	int n;
	printf("enter number of disks\n");
	scanf("%d",&n);
	tower(n,'A','C','B');
	return 0;	
}
void tower(int n,char source,char dest,char spare)
{
	if(n==1)
	{
		printf("%c->%c\n",source,dest);
	}
	else
	{
		tower(n-1,source,spare,dest);
		printf("%c->%c\n",source,dest);
		tower(n-1,spare,dest,source);
	}
}
