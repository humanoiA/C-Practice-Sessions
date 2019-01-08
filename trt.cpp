#include<stdio.h>
#include<string.h>
main()
{
 char a[20],b[20];
 gets(a);
 printf("entr2");
 gets(b);
 if(strcmp(a,b)==0)
 {
 	printf("yes");
 }
 else
 printf("no");
}
