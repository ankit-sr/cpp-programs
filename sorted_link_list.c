#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};
void insert(struct node **, int );
void display(struct node *);
void del(struct node **,int);

int main(void)
{
  struct node *start=NULL;
  int n,m;
  do
  {
    printf("\nEnter Choice \n1. insert \n2.Display \n3.Delete \n4. Quit            ");
    scanf("%d",&n);
    switch(n)
    {
      case 1:
	printf("\nEnter no. of your choice : ");
	scanf("%d",&m);
	insert(&start,m);
	break;
      case 2:
	display(start);
	break;
      case 3:
	printf("\nEnter no. to delete from list");
	scanf("%d",&m);
	del(&start,m);
	break;
      case 4:
	exit(0);
      default:
	 printf("\nplease enter a valid choice");
	 break;

    }
  } while(1);
return 0;
}

void insert(struct node **ps,int x)
{
	struct node *p,*temp ,*prev;
	p=(struct node *)malloc(sizeof(struct node));
	p->data=x;
	p->next=NULL;
	if(*ps==NULL)
	{
		*ps=p;
		return;
	}
	temp=*ps;
	/*if((*ps)->next==NULL)
	{
		if(p->data<temp->data)
		{
			p->next=temp;
			*ps=p;
		}
		else
		{
			temp->next=p;
		}
		return;
	}*/
	if(temp->data>p->data)
	{
		p->next=temp;
		*ps=p;
		return;
	}
		while(temp!=NULL && p->data>temp->data)
		{
			prev=temp;
			temp=temp->next;
		}
		if(temp==NULL)
		{
			prev->next=p;
		}
		else
		{
			p->next=temp;
			prev->next=p;
		}
}
void display(struct node *p)
{
	if(p==NULL)
	{
		printf("\nList is empty");
	}
	else
	{
		printf("\nList is ");
		while(p!=NULL)
		{
			printf("%d ",p->data);
			p=p->next;
		}
	}
}
void del(struct node **ps, int x)
{
	struct node *temp, *prev;
	if(*ps==NULL)
	{
		printf("\nList is empty");
		return;
	}
	temp=*ps;
	if((*ps)->data==x)
	{
		*ps=temp->next;
		free(temp);
		printf("Node deleted");
		return;
	}
	while(temp!=NULL && temp->data!=x)
	{
		prev=temp;
		temp=temp->next;
	}
	if(temp==NULL)
	{
		printf("\nNode not found in the list");
	}
	else
	{
		prev->next=temp->next;
		free(temp);
		printf("Node deleted");
	}
}
