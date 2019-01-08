#include<stdio.h>
#include<conio.h>
int main ()

{
int no,rem,sum=0,i;
printf("enter the no\n");
scanf("%d",&no);
for(i=1;i<=(no-1);i++)
{
	rem=no%i;
	if(rem==0)
{ 
sum=sum+i;
}
}
if(sum==no)
printf("no is perfect");
else
printf("no is not perfect");
return 0;
}
