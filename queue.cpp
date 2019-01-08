#include<stdio.h>
#include<stdlib.h>
#define  MAX 5
void push(int);
void pop(void);
void display(void);
void peep(void);
int i,j,array[MAX],option,number,k;
	int front=-1,rear=-1;
	
int main()
{
	
	while(1)
	{
		printf("\n1.Insert an element\n2.Delete an element\n3.Dislpay array\n 4.Peep\n5.Exit\n");
		scanf("%d",&option);
		switch(option)
	{
		case 1:
			printf("enter the number\n");
			scanf("%d",&number);
			push(number);
			break;
		case 2:
			pop();
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
	return 0;
		
	}
	
void push(int item)
{	
if(rear==MAX-1){

		printf("OVERFLOW\n");
		return;}
	if(front==-1)
	{
		front=0;
	}
		rear=rear+1;
		//	rear=rear+1;
			array[rear]=item;
			printf("element inserted successfully\n");
		
	}	
void pop(void)
{
	if(front == -1 || front==rear+1)
	{
		printf("UNDERFLOW\n");
		return;
		}
			printf("element deleted is %d\n",array[front]);
	//		array[front]=NULL;
		    front=front+1;
				}
void display(void)
{
	if(front == -1 || front==rear+1)
	{
		printf("UNDERFLOW\n");
		return;
		}

	printf("Elements  of array are:\n");
	for(i=front;i<=rear;i++)
	{
		printf("%d\t",array[i]);
	}
								}
			
void peep()
{
	if(front == -1 || front==rear+1)
	{
		printf("queue is empty\n");
		}
	
	printf("the front element is:\n");

	printf("%d",array[front]);
		
		}				
