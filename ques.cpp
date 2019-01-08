#include<stdio.h>
#include<string.h>
#include<ctype.h>
 int main()
{
	int t;
	int i,j,k;
	scanf("%d\n",&t);
	
	//for(p=0;p<=t;p++)
	//{

while(t--)
{
	
	j=0;
	k=0;
	char name[100001];
	char hawk[100001];	
	gets(name);

for(i=0;i<strlen(name)-1;i++)
   		if(name[i]==' ')
		{
			j=j+1;
		}
	}
	if(j==2)
	{
		hawk[100001]='0';
		hawk[1]='.';
hawk[2]=' ';
hawk[0]=toupper(name[0]);
hawk[4]='.';
hawk[5]=' ';
j=0;
	for(i=0;i<strlen(name)-1;i++)
	{
		if(name[i]==' ')
		{
			j=j+1;
		}
		if(j==1)
		{	
		 	hawk[3]=toupper(name[i+1]);
		 	break;
		}
				}
	j=0;
		for(i=0;i<strlen(name)-1;i++)
	{  
		if(name[i]==' ')
		{
			j=j+1;
		}
		if(j==2)
		{
			hawk[6]=toupper(name[i+1]);
			break;
		}
	}
	j=0;
			for(i=0;i<strlen(name)-1;i++)
	{  
		if(name[i]==' ')
		{
			j=j+1;
		}
		
			if(j==2)
			{
			hawk[7+k]=tolower(name[i+2]);
			k=k+1;
		}
		
	}

}
if(j==1)
{
	hawk[100001]='0';
	hawk[0]=toupper(name[0]);
	hawk[1]='.';
hawk[2]=' ';
j=0;
k=0;
		for(i=0;i<strlen(name);i++)
	{  
		if(name[i]==' ')
		{
			j=j+1;
		}
		if(j==1)
		{
			hawk[3]=toupper(name[i+1]);
			break;		}
	}
	j=0;
		for(i=0;i<strlen(name)-1;i++)
	{  
		if(name[i]==' ')
		{
			j=j+1;
		}
		
			if(j==1)
			{
			hawk[4+k]=tolower(name[i+2]);
			k=k+1;
		}
}
}
if(j==0)
{
	hawk[100001]='0';
	hawk[0]=toupper(name[0]);
	for(i=1;i<strlen(name);i++)
	{
		hawk[i]=tolower(name[i]);
	}
}
		
printf("%s\n",hawk); 
}
return 0;
}
