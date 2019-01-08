#include<stdio.h>
#include<conio.h>
main()
{
int a[10],x,n;
scanf("%d",&n);
for(x<n;x>0;x--)
{
	a[n]=a[n]*6-x;
}
printf("%d",a[n]);
getch();
}
