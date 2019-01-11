#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *link;
};
struct node *create_list(struct node *start);
void display(struct node *start);
void count(struct node *start);
void search(struct node *start,int data);
struct node *addatbeg(struct node *start,int data);
struct node *addatend(struct node *start,int data);
struct node *addafter(struct node *start,int data,int item);
struct node *addbefore(struct node *start,int data,int item);
struct node *addatpos(struct node *start,int data,int pos);
struct node *del(struct node *start,int data);
int main()
{
	struct node *start=NULL;
	int choice,item,data,pos;
	while(1)
	{
		printf("\n1.Create\n ");
		printf("2.Display\n ");
		printf("3.Count\n ");
		printf("4.Search\n ");
		printf("5.Add At Beg\n ");
		printf("6.Add At End\n ");
		printf("7.Add after node\n ");
		printf("8.Add before node\n ");
		printf("9.Add At Pos\n ");
		printf("10.Delete\n ");
		printf("11.Quit\n ");
		printf("Enter Choice\n ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				start=create_list(start);
				break;
			case 2:
				display(start);
				break;
			case 3:
				count(start);
				break;
			case 4:
				printf("Enter element to search :");
				scanf("%d",&data);
				search(start,data);
				break;
			case 5:
				printf("Enter element to insert :");
				scanf("%d",&data);
				start=addatbeg(start,data);
				break;
			case 6:
				printf("Enter element to insert :");
				scanf("%d",&data);
				start=addatend(start,data);
				break;
			case 7:
				printf("Enter element to insert: ");
				scanf("%d",&data);
				printf("Enter element after which u want to insert: ");
				scanf("%d",&item);
				start=addafter(start,data,item);
				break;
			case 8:
				printf("Enter element to insert: ");
				scanf("%d",&data);
				printf("Enter element before which u want to insert: ");
				scanf("%d",&item);
				start=addbefore(start,data,item);
				break;
			case 9:
				printf("Enter element to insert: ");
				scanf("%d",&data);
				printf("Enter pos: ");
				scanf("%d",&pos);
				start=addatpos(start,data,pos);
				break;
			case 10:
				printf("Enter Element to delete:");
				scanf("%d",&data);
				start=del(start,data);
				break;
			case 11:
				exit(1);
			default:
				printf("wrong choice\n");
		}
	}
	return 0;
}
void display(struct node *start)
{
	struct node *p;
	if(start==NULL)
	{
		printf("Empty\n");
	}
	p=start;
	printf("List is-\n");
	while(p!=NULL)
	{
		printf("%d\t",p->info);
		p=p->link;
	}
	printf("\n");
}
void count(struct node *start)
{
	struct node *p;
	int cnt=0;
	p=start;
	while(p!=NULL)
	{
		p=p->link;
		cnt++;
	}
	printf("Total elemnts are-%d\n",cnt);
}
void search(struct node *start,int item)
{
	struct node *p=start;
	int pos=1;
	while(p!=NULL)
	{
		if(p->info==item)
		{
			printf("Item is at %d\n",pos);
			return;
		}
		p=p->link;
		pos++;
	}
	printf("Item not found\n");
}
struct node *addatbeg(struct node *start,int data)
{
	struct node *tmp;
	tmp = (struct node *)malloc(sizeof(struct node));
	tmp->info=data;
	tmp->link=start;
	start=tmp;
	return start;
}
struct node *addatend(struct node *start,int data)
{
	struct node *p,*tmp;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp->info=data;
	p=start;
	while(p->link!=NULL)
		p=p->link;
	p->link=tmp;
	tmp->link=NULL;
	return start;
}
struct node *addafter(struct node *start,int data,int item)
{
	struct node *tmp,*p;
	p=start;
	while(p!=NULL)
	{
		if(p->info==item)
		{
			tmp=(struct node *)malloc(sizeof(struct node));
			tmp->info=data;
			tmp->link=p->link;
			p->link=tmp;
			return start;
		}
		p=p->link;
	}
	printf("Can't insert, element not present\n");
	return start;
}
struct node *addbefore(struct node *start,int data,int item)
{
	struct node *tmp,*p;
	if(start==NULL)
	{
		printf("List is Empty\n");
		return start;
	}
	if(item==start->info)
	{
		tmp=(struct node *)malloc(sizeof(struct node));
		tmp->info=data;
		tmp->link=start;
		start=tmp;
		return start;
	}
	p=start;
	while(p->link!=NULL)
	{
		if(p->link->info==item)
		{
			tmp=(struct node *)malloc(sizeof(struct node));
			tmp->info=data;
			tmp->link=p->link;
			p->link=tmp;
			return start;
		}
		p=p->link;
	}
	printf("Can't insert, element not present\n");
	return start;
}
struct node *addatpos(struct node *start,int data,int pos)
{
	struct node *tmp,*p;
	int i;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp->info=data;
	if(pos==1)
	{
		tmp->link=start;
		start=tmp;
		return start;
	}
	p=start;
	for(i=1;i<pos-1&&p!=NULL;i++)
	{
		p=p->link;	
	}
	if(p==NULL)
	{
		printf("There are less alements\n");
	}		
	else{
		tmp->link=p->link;
		p->link=tmp;
	}
	return start;
}
struct node *create_list(struct node *start)
{
	int i, n,data;
	printf("Enter no. of nodes\n");
	scanf("%d",&n);
	start=NULL;
	if(n==0)
	{
		return start;
	}
	printf("Enter Element to insert\n");
	scanf("%d",&data);
	start=addatbeg(start,data);
	for(i=2;i<=n;i++)
	{
	printf("Enter Element to insert\n");
	scanf("%d",&data);
	start=addatend(start,data);
		
	}
	return start;
}
struct node *del(struct node *start,int data)
{
	struct node *tmp,*p;
	if(start==NULL)
	{
		printf("List is empty\n");
		return start;
	}
	if(start->info==data)
	{
		tmp=start;
		start=start->link;
		free(tmp);
		return start;
	}
	p=start;
	while(p->link!=NULL)
	{
		if(p->link->info==data)
		{
			tmp=p->link;
			p->link=tmp->link;
			free(tmp);
			return start;
		}
	p=p->link;
	}
	printf("Element not found\n");
	return start;
}
