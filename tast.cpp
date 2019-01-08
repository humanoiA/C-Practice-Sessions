#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 20
int arr[size];
int top=-1;
void push(void);
void pop(void);
void display(void);
void peek(void);
 main()
{
	while(1){
		int choice;
		printf("1.insert an element\n");
		printf("2.delete an element\n");
		printf("3.display an element\n");
		printf("4.peek an element\n");
		printf("5.exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			      push();
			      break;
			case 2:
			      printf("\n delete the element");
			      pop();
				  break;
			case 3:
			      printf("\n display the");
				  display();
				  break;
			case 4:
			      printf("\n peek item");
				  peek();
				  break;
			case 5:
			      exit(0);
				  break;
				  default:printf("\n option is not available");
			}
		}
	}
				  	void push()
				  	{
				  		int item;
				  		printf("\n enter item");
				  		scanf("%d",&item);
				  		if(top==size-1)
				  		   ("stack overflow");
				  		 else
						   top=top+1;
						   arr[top]=item;
						   printf("element inserted successful");		  
				  		
					  }
					     void pop()
					     {
					     	if(top==-1)
					     	("stack underflow");
					     	else
					     	printf("removed element %d",arr[top]);
					     	top=top-1;
						 }
						 	void display()
						 	{
						 		int i;
						 		if(top==-1)
						 		("stack underflow");
						 		else
						 		{
						 		for(i=0;i<=top;i++)
						 		{
						 		printf("%d",arr[i]);
							    }
							}
						}
						 	void peek()
						 	{
							 
						 	if(top==-1)
						 	("stack underflow");
						 	else
						 	printf("%d",arr[top]);
						 	
						 }
										  	  	  	        
		
		
	
