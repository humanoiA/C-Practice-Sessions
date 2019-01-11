#include<stdio.h>
#include<conio.h>
#include<string.h>
#define max 20
int top=-1;
 void push(char);
 int pop();
 char st[max];
int match(char ,char);
int check(char []);
main()
{
char ch[20];
int x;
scanf("%s",ch);
 x=check(ch);
	if(x==1)
	{
		printf("the expression is  correct");
	}
		else
		{
		printf("expression is incorrect");	
		}
	
}
void push(char c)
{
	if(top==max-1)
	{
		printf("the stack is full");
	}
	else
	{	
	st[top]=c;
	top=top+1;
	}
}
int	check(char ch[])
{
	int i,val;
	char temp;
	for(i=0;i<strlen(ch);i++)
	{
		if(ch[i]=='{'||ch[i]=='('||ch[i]=='[')
		push(ch[i]);
		else if((ch[i]==')'||ch[i]=='}'||ch[i]==']'))
		{	
			if(top==-1)
			{
				return 0;
			}
			else
			{
				temp=pop();
				if(match(temp,ch[i])==1)
				return 1;
				else 
				return 0;
			}
		}
	}
}
char pop(char)
{
	char i;
	if(top==-1)
	{
		printf("the stack is empty");
	}
	else
	{
		i=st[top];
		top=top-1;
		return i;
	}
}
int match(char a,char b)
{
	if(a=='('&&b==')')
	return 1;
	else if(a=='{'&&b=='}')
	return 1;
	else if(a=='['&&b==']')
	return 1;
	else
	return 0;
}
