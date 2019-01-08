#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int t,n,k,i=0,j=0,l=0,temp;
    int a[1000];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&n,&k);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        for(j=0;j<n;j++)
        {
            for(l=j+1;l<n;l++)
            {
                if(a[j]>a[l])
                {
                    temp=a[j];
                    a[j]=a[l];
                    a[l]=temp;
                }
            }
        }
 
        printf("%d\n",a[(n+k)/2]);
    }
    return 0;
}
 
