#include<stdio.h>
#include<conio.h>
int main()
{int a,b,c,k,sum=0,i;
printf("enter the value");
scanf("%d",&a);
k=a;
while(a!=0)
{
b=a%10;
c=b*b*b;
sum=sum+c;
a=a/10;
}
if(sum==k)
{
	printf("armstrong");
 } 
 else 
 {
 	printf("not armstrong");
 }	
return(0);
getch();
}
