#include<stdio.h>
#include<stdlib.h>
void push(int);
void pop(void);
void display(void);
void peep(void);
int i,j,array[100],option,number,k;
	int top=-1;
	
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
	//	else
		{
			top=top+1;
			array[top]=item;
			printf("element inserted successfully\n");
		}
	}	
void pop(void)
{
	if(top==-1)
	{
		printf("stack is empty\n");
		}
		else{
			printf("element deleted is %d\n",array[top]);
			array[top]=NULL;
			top=top-1;
		}
				}
void display(void)
{
	if(top==-1)
	{
		printf("stack is empty\n");
		}

else{
	printf("Elements  of array are:\n");
	for(i=0;i<=top;i++)
	{
		printf("%d\t",array[i]);
	}
								}
			}
void peep()
{
	if(top==-1)
	{
		printf("stack is empty\n");
		}
	else
	{
	printf("the topmost element is:\n");

	printf("%d",array[top]);

}				}				
