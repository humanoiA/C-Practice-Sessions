#include<stdio.h>
#include<stdlib.h>
#define MAX 10
void push(int);
void pop(void);
void display(void);
void peep(void);
int i,j,k,n,array[MAX],choice,top=-1,item;
int main()
{
	while(1)
	{
printf("1.enter  element\n 2.delete the element.\n 3.display\n.4.peep.\n 5.Exit\n");
scanf("%d",&choice);
switch(choice)
{
	case 1:
		scanf("%d",&item);
		push(item);
		break;
	case 2:
		pop();
		printf("The deleted element is:",item);
		break;
	case 3:
		display();
		break;
	case 4:
		peep();
		break;
	case 5:
		exit(0);
		
}
}
}
void push(int item)
{
	top=top+1;
	array[top]=item;
	printf("successfully iserted\n");
	
}
void pop(void)
{
	if(top==-1)
	printf("stack is empty");
	else{
	printf("%d elements deleted is",array[top]);
	array[top]=NULL;
	top=top-1;
}
}
void display()
{  if(top==-1)
	printf("stack is empty\n");
	else
	{for(i=0;i<=top;i++)
	printf("%d\t",array[i]);
	}
}
void peep(void)
{
	if(top==-1)
	printf("stack is empty\n");
	else{
	printf("%d",array[top]);
}
}
