#include<stdio.h>
#include<string.h>
int main()
{	int i,count=0,len;
	scanf("%d",len);
	char str[len];
	scanf("%s",str);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
			{
			if(str[i+1]=='a'||str[i+1]=='e'||str[i+1]=='i'||str[i+1]=='o'||str[i+1]=='u')
			{
				count=count+1;
			}
			}
		}
	}
	printf("%d",count);
	return 0;
}
