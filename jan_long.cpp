#include<stdio.h>
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		int dim,dim1,dim2,i,j,k,temp=0,sum=0,count=0;
		scanf("%d",&dim);
		dim1=dim2=dim;
		int arr[dim1][dim2];
		int arr2[dim];
			for(i=0;i<dim1;i++)
			{
				for(j=0;j<dim2;j++)
			{
				scanf("%d",&arr[i][j]);
			}
		}
		
		 for (i = 0; i < dim1; ++i)
    {
        for (j = 0; j < dim2; ++j)
        {
            for (k =(j + 1); k < dim2; ++k)
            {
                if (arr[i][j] > arr[i][k])
                {
                    temp = arr[i][j];
                    arr[i][j] = arr[i][k];
                    arr[i][k] = temp;
                }
            }
        }
    }	
	for(i=0;i<dim1;i++)
		{
				arr2[i]=arr[i][dim2-1];
		}
		for(i=0;i+1<dim;i++)
		{
		if(arr2[i]>arr2[i+1])
		{							
		count=count+1;
		}
	}
	for(i=dim-1;i>=1;i--)
	{
		if(arr2[i]==arr2[i-1])
		{
		
			for(j=dim-1;j>=0;j--)
			{
				if(arr[i-1][j]<arr2[i-1])
				{
					arr2[i-1]=arr[i-1][j];
					break;
				}
			}
		}
	}
	for(i=0;i<dim;i++)
		{
			sum=sum+arr2[i];
		}
	if(count>=1||sum==0)
	{
			printf("-1\n");
	
	}
	else
	{
		
		printf("%d\n",sum);		
	}
	}
	return 0;
}
