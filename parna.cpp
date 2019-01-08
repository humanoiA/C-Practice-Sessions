#include<stdio.h>
#define parna main
parna()
{
int a,b;
printf("enter the value of a");
scanf("%d",&a);
printf("enter the value of b");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("after swaping the value ofa= %d \tvalue of b=%d",a,b);

}
	
