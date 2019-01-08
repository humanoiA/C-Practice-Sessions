#include<stdio.h>
int main()
{
	int test;
    scanf("%d",&test);
    while(test--)
    { int inp,count1=0;
     scanf("%d",&inp);
        int i=1;
	while(i>=1 && i<=10000)
	{
		int count=0,k=1;
		while(k<=i)
		{
			if(i%k==0)
			{
				count=count+1;
			}
			k++;
		}
	if(count==2)
	{
        count1=count1+1;
       // printf("%d",count1);
		if(count1==inp)
        {
            printf("%d\n",i);
        }
		}
		i++;	
	}
    }
	return 0;
}
