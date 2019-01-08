#include<stdio.h>
#include<conio.h>
int main()
{int a,b,c,k,sum=0;
for(a=1;a<=200;a++)
{
k=a;
while(a!=0)
{
b=a%10;
c=b*b*b;
sum=sum+c;
a=a/10;
if(k==sum)
{
	printf("armstromg no:%d,k");
 }
}
 
}
return(0);
}
