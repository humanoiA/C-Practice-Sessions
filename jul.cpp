#include<stdio.h>
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		int length,i=0;
		scanf("%d",&length);
		char st[length],temp;
		scanf("%s",st);
		if (length%2==0)
		{
			while(i<length)
			{
				temp=st[i];
				st[i]=st[i+1];
				st[i+1]=temp;
				i=i+2;
			}
		}
		else if (length%2==1)
		{
			while(i+1<length)
			{
				temp=st[i];
				st[i]=st[i+1];
				st[i+1]=temp;
				i=i+2;
			}
		}
		for(i=0;i<length;i++)
		{
			if(st[i]=='a')
			st[i]='z';
			else if(st[i]=='b')
			st[i]='y';
			else if(st[i]=='c')
			st[i]='x';
			else if(st[i]=='d')
			st[i]='w';
			else if(st[i]=='e')
			st[i]='v';
			else if(st[i]=='f')
			st[i]='u';
			else if(st[i]=='g')
			st[i]='t';
			else if(st[i]=='h')
			st[i]='s';
			else if(st[i]=='i')
			st[i]='r';
			else if(st[i]=='j')
			st[i]='q';
			else if(st[i]=='k')
			st[i]='p';
			else if(st[i]=='l')
			st[i]='o';
			else if(st[i]=='m')
			st[i]='n';
			else if(st[i]=='n')
			st[i]='m';
			else if(st[i]=='o')
			st[i]='l';
			else if(st[i]=='p')
			st[i]='k';
			else if(st[i]=='q')
			st[i]='j';
			else if(st[i]=='r')
			st[i]='i';
			else if(st[i]=='s')
			st[i]='h';
			else if(st[i]=='t')
			st[i]='g';
			else if(st[i]=='u')
			st[i]='f';
			else if(st[i]=='v')
			st[i]='e';
			else if(st[i]=='w')
			st[i]='d';
			else if(st[i]=='x')
			st[i]='c';
			else if(st[i]=='y')
			st[i]='b';
			else if(st[i]=='z')
			st[i]='a';
		}
		printf("%s\n",st);
	}
	return 0;
}
