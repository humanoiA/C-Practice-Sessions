#include<stdio.h>
#include<string.h>
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		char str[50000],arr[4];
		int i,j,temp=0,countf=0,countc=0,counte=0,counth=0;
		scanf("%s",str);
		for(i=0;i<strlen(str);i++)
		{
			if(str[i]=='c')
			countc=countc+1;
			if(str[i]=='h')
			counth=counth+1;
			if(str[i]=='e')
			counte=counte+1;
			if(str[i]=='f')
			countf=countf+1;
		}
		arr[0]=countc;
		arr[1]=counth;
		arr[2]=counte;
		arr[3]=countf;
		for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			{
				if(arr[i]>arr[j])
				{
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
		}
		if(arr[0]!=0)
		printf("lovely %d\n",arr[0]);
		else if(arr[0]==0)
		printf("normal\n");
	}
	return 0;
}
