#include<stdio.h>
#include<stdlib.h>
void create(int data);
void display();
struct node
{
	int info;
	struct node *next;
	
}*list=NULL;
main()
{
int ch,data,n,i;
while(1)
{
printf("\n1for create");
printf("\n2 for display");
printf("\n3 for display");
scanf("%d",&ch);

  switch(ch)
    {
    	case 1:printf("\nhow many");
scanf("%d",&n);
for(i=0;i<n;i++)
    {
    	printf("\nenter data");
    	scanf("\n%d",&data);
	    create(data);
}
	break;
	
case 2:
display();
break;	
	
case 3:exit(0);	
  }
 }
}
void create(int data)
   {
   	 struct node *p,*q;
   	 p=(struct node *)malloc(sizeof(struct node));
   	 p->info=data;
   	 p->next=NULL;
   	     if(list==NULL)
   	        list=p;
   	     else
   	     {
			 for(q=list;q->next!=NULL;q=q->next);
			   q->next=p;  
		}
   }
   
   
   
   
   void display()
   {
   	struct node *q;
   	   	     if(list==NULL)
   	        printf("void");
   	     else
   	     {
			 for(q=list;q!=NULL;q=q->next)
			 printf("\n%d",q->info);
   }
}
