#include<stdio.h>
#include<stdlib.h>

struct doubly
{
	struct doubly *prev;
	int data;
	struct doubly *next;
};

void insert(struct doubly **ps,int);
void display(struct doubly *);
void del(struct doubly **,int);

int main()
{
	int m,n;
	struct doubly *start = NULL;
	do
	{
	printf("\n1.Insert \n2.Display \n3.Delete \n4.Quit \nEnter your choice : ");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("\nEnter element to insert : ");
			scanf("%d",&m);
			insert(&start,m);
			break;
		case 2:
			display(start);
			break;
		case 3:
			printf("\nEnter element to delete : ");
			scanf("%d",&m);
			del(&start,m);
			break;
		case 4:
			exit(0);
		default:
			printf("\nPlease enter a valid choice.");
			break;
	}
	}while(1);
	
}

void insert(struct doubly **ps,int x)
{
	struct doubly *p,*temp;
	p=(struct doubly *)malloc(sizeof(struct doubly));
	p->data=x;
	p->prev=p->next=NULL;
	if(*ps==NULL)
	{
		*ps=p;
		return;
	}
	if((*ps)->data>x)
	{
		p->next=*ps;
		(*ps)->prev=p;
		*ps=p;
		return;
	}
	temp=*ps;
	while(temp->data<x && temp->next!=NULL)
	{
		temp=temp->next;
	}
	if(temp->data>x)
	{
		p->next=temp;
		p->prev=temp->prev;
		temp->prev->next=p;
		temp->prev=p;
	}
	else
	{
		temp->next=p;
		p->prev=temp;
	}
}

void display(struct doubly *ps)
{
	if(ps==NULL)
	{
		printf("\nList is empty.");
	}
	else
	{
		printf("\nList is : ");
		while(ps!=NULL)
		{
			printf("%d ",ps->data);
			ps=ps->next;
		}
	}
}
void del(struct doubly **ps, int x)
{
	struct doubly *temp;
	if(*ps==NULL)
	{
		printf("\nList is empty. ");
	}
	else if((*ps)->data==x)
	{
		if((*ps)->next==NULL)
		{
			free(*ps);
			*ps=NULL;
			printf("\nNode Deleted.");
		}
		else
		{
			*ps=(*ps)->next;
			free((*ps)->prev);
			(*ps)->prev = NULL;
			printf("\nNode Deleted.");
		}
	}
	else 
	{
		temp = *ps;
		while(temp->data!=x && temp->next!=NULL)
		{
			temp=temp->next;
		}
		if(temp->data==x)
		{
			temp->prev->next=temp->next;
			temp->next->prev=temp->prev;
			free(temp);
			printf("\nNode Deleted.");

		}
		else
		{
			printf("\nNode not found in the list.");
		}
	}
}
