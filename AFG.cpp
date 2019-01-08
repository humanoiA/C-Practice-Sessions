#include<stdio.h>
#include<stdlib.h>
int main()
{
int size,i,j;
scanf("%d",&size);
int number;
scanf("%d",&number);
int rem=number;
int rem1,rem2;
int sum1=0;
int sum2=0;
for(i=1;i<=size/2;i++)
{

    rem1=rem%10;
    if (rem1==4 || rem1==7)
        sum1+=rem1;
    else{
	
        printf("NO");
        exit(0);
    }
    rem=rem/10;
  }
for (j=(size/2+1);j<=size;j++) 
{

    rem2=rem%10;
    if (rem2==4 || rem2==7)
        sum2+=rem2;
    else{
	
        printf("NO");
        exit(0);
    }
    rem=rem/10;}
	if(sum1==sum2)
	printf("YES");
	else
	printf("NO");
	return 0;
}
