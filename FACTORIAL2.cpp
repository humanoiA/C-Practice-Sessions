#include<stdio.h>
#include<conio.h>
main()
{
	int k=1,n,i;
	scanf("%d",&n);
	for(i=1;i<=n;++i)
	{
		k*=i;
	}
		printf("%d",k);
	getch();
}
