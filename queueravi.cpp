#include<stdio.h>
#include<stdlib.h>
#define MAX 10
void push(int);
void pop(void);
void display(void);
void peep(void);
int i,j,k,n,array[MAX],choice,item;
int front=-1;
int rear=-1;
int main()
{
	while(1)
	{
printf("\n1.enter  element\n 2.delete the element.\n 3.display\n.4.peep.\n 5.Exit\n");
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
{if(front==-1&&rear==-1)
	front=front+1;
	rear=rear+1;
	array[rear]=item;
	printf("successfully iserted\n");
	
}
void pop(void)
{
	if(front==-1&&rear==-1)
	printf("Underflow");
	else{
	printf("%d elements deleted is",array[rear]);
	array[rear]=NULL;
	rear=rear-1;
}
}
void display()
{  if(front==-1&&rear==-1)
	printf("underflow\n");
	else
	{for(i=front;i<=rear;i++)
	{
		printf("%d\t",array[i]);
	}
	}
}
void peep(void)
{
	if(front==-1&&rear==-1)
	printf("Underflow\n");
	else{
	printf("%d",array[rear]);
}
}
