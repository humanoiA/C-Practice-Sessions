#include<stdio.h>
main()
{
	int A[7];
	int i,lc=0,sc=0,k,l,p;
	for(i=0;i<=7;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<=7;i++)
	{ lc=0,sc=0;
		for(k=0;k<=7;k++)
		{
			if(A[i]<A[k])
			{
				lc=lc+1;
			}
			if(A[i]>A[k])
			{
				sc=sc+1;
			}
		}
		if(lc==0){
		A[i]=k;	
		printf(" great%d\n",A[i]);
		}
		if(sc==0)
		{A[i]=l;
		printf("small%d",A[i]);
}
	}
	for(i=0;i<=7;i++)
	{
		if(A[i]==k)
		{
			
		}
	
}
}
