#include<stdio.h>
#include<conio.h>
main()
{ 
int k,a,b,sum=0,i;
printf("enter the value");
scanf("%d",&a);
k=a;
while(a!=0)
{
b=a%10;
sum=(sum*10)+b;
a=a/10;
}
if(sum==k)
{
	printf("palindrome");
 } 
 else 
 {
 	printf("not palindrome");
 }
getch();
}
