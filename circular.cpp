#include<stdio.h>
#include<stdlib.h>
#define MAX 5
void insert(int);
void display(void);
void peep(void);
void del(void);
int front=-1,rear=-1;
int arr[MAX];
int main()
{
	int i,j,x;
	
	while(1)
	{
		printf("\n1.Insert an element in queue.\n2.Delete an element from queue\n3.Display elements of queue.\n4.Peep\n5.Exit\n");
		scanf("%d",&x);
		switch(x)
		{
			case 1:
				{
					printf("enter the element you want to insert\n");
					scanf("%d",&i);
					insert(i);
					break;
				}
			case 2:
				{
					del();
					break;
				}
			case 3:
				{
					display();
					break;
					}
			case 4:
			{
				peep();
				break;
						}			
			case 5:
				{
				exit(0);
				}
				}
				}
	}
void insert(int e)
{
	if((front==0&&rear==MAX-1)||(front==rear+1))
	{
		printf("Overflow");
		return;
	}
	if(front==-1)
	{
		front=0;
	}
	if(rear==MAX-1)
	{
		rear=0;
	}
	else
	{
		rear=rear+1;
		
	}
	arr[rear]=e;
}
void display(void)
{ int i;
if(front==-1)
	{
		printf("queue underflow\n");
		return;
	}
	printf("Queue elements are: \n");
	i=front;
	if(front<=rear)
	{
		while(i<=rear)
		printf("%d",arr[i++]);
	}
	else
	{
		while(i<=MAX-1)
		printf("%d",arr[i++]);
		i=0;
		while(i<=rear)
		printf("%d",arr[i++]);
	}
	printf("\n");
}
void peep(void)
{
	if(front==-1)
	{
		printf("queue underflow\n");
		return;
	}
	printf("\nThe front element is:\n");
	printf("%d",arr[front]);
}
void del()
{
	
	printf("Element deleted is %d",arr[front]);
	if(front== rear)
	{
			front=-1;
			rear=-1;
	}
	else if(front==MAX-1)
	front=0;
	else
	front+=1;
	return;
	
}
