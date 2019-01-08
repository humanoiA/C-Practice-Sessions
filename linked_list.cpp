#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct list{
	int data;
	struct node *link;
};
struct node *insertion(struct node,int data);
struct node *deletion(struct node,int data);
void display(struct node *start);
int main()
{
	struct node *start=NULL;
	int x,info;
	while(1)
	{
		printf("\n1. Insert a data\n2.Delete  data\n3.Display Data\n.4.Exit\n\tEnter Your Choice\n");
		scanf("%d",&x);
		switch(x)
		{
			case 1:
				{
					printf("Enter element to be inserted\n");
					scanf("%d",&info);
					start=insertion(info,start);
					break;
				}
			case 2:
				{
					printf("\nEnter th element to be deleted");
					scanf("%d",&info);
					start=deletion(start,info);
					break;
				}	
			case 3:
				{
					display(start);
					break;
				}
			case 4:
				{
					exit(0);
				}
		}
		
	}
}
struct node *insertion(struct node *start,int info)
{
	struct node *newnode;
	newnode=(structnode*)malloc(sizeof(structnode*));
	if(start==NULL)
	{
		newnode->data=info;
		newnode->link=NULL;
		start=newnode;
	}
	else
	{
		newnode->data=info;
		newnode->link=start;
		start=newnode;
	}
	return start;
}
void display(struct node *start)
{
	stuct node *newnode;
	if(start==NULL)
	{
		printf("\n list is empty");
		return;
	}
	newnode=start;
	printf("\n List is:\n");
	while(p!=NULL)
	{
		printf("%d",newnode->data);
		newnode=newnode->link;
	}
	printf("\n\n");
}
struct node *deletion(struct node,int info)
{
	struct node *newnode,*tmp;
	if(start==NULL)
	{
		printf("\n List is empty");
		return start;
		
	}
	if(start->data==info)
	{
		tmp=start;
		start=start->link;
		free(tmp);
		return start;
	}
	newnode=start;
	while(newnode->link!=NULL)
	{
		if(newnode->link->data==info)
		{
			tmp=newnode->link;
			newnode->link=tmp->link;
			free(tmp);
			return start;
		}
		newnode=newnode->link;
	}
	return start;
}
