#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct cnode
{
	int data;
	struct cnode *next;
};

void insert(struct cnode **, int);
void display(struct cnode *);
void del(struct cnode **,int);

int main(void)
{
	struct cnode *start=NULL;
	int n,m;
	printf("\nEnter your choice \n1.Insert \n2,Display \n3,Delete \n4.Quit     ");
	scanf("%d",n);
	do
	{
		switch(n)
		{
			case 1:
				printf("\nEnter number to insert : ");
				scanf("%d",m);
				insert(&start,m);
				break;
			case 2:
				display(start);
				break;
			case 3:
				printf("\nEnter number to delete from list : ");
				scanf("%d",m);
				break;
			case 4:
				exit(0);
			default:
				printf("\nInvaid Choice ");
				break;			
		}
	}while(1);
	return 0;
}

void insert(struct cnode **ps, int x)
{
	struct cnode *temp, *p;
	p=(struct cnode *)malloc(sizeof(struct cnode));
	p->data=x;
	p->next=p;
	if(*ps==NULL)
	{
		*ps=p;
		printf("\nNode added ");
		return;
	}
	temp=*ps;
	if((*ps)->next==(*ps))
	{
		if((*ps)->data<p->data)
		{
			temp->next=p;
			p->next=*ps;
		}
		else
		{
			*ps=p;
			p->next=temp;
			temp->next=*ps;

			/*temp->next=p;
			p->next=temp;
			*ps=p;*/
		}
		return;
	}
	while(temp->data<p->data && temp->next!=*ps)
	{
		temp=temp->next;
	}
	p->next=temp->next;
	temp->next=p;
}

void display(struct cnode *p)
{
	struct cnode *temp;
	if(p==NULL)
	{
		printf("\nList is empty");
		return;
	}
	printf("\nList is empty ");
	do
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}while(temp!=p);
}
void del(struct cnode **ps,int x)
{
	struct cnode *temp, *prev;
	if(*ps==NULL)
	{
		printf("\nList is empty ");
		return;
	}
	temp=*ps;
	if((*ps)->data==x)
	{
		if((*ps)->next==*ps)
		{
			free(*ps);
			*ps=NULL;
			printf("\nNode Deleted");
			return;
		}
		while(temp->next!=*ps)
		{
			temp=temp->next;
		}
		*ps=(*ps)->next;
		free(temp->next);
		temp->next=*ps;
		printf("\nNode Deleted ");
		return;
	}
	while(temp->data!=x&&temp->next!=*ps)
	{
		prev=temp;
		temp=temp->next;
	}
	if(temp->data==x)
	{
		prev->next=temp->next;
		free(temp);
		printf("\nNode Deleted");
	}
	else
	{
		printf("\nNode not found in the list. ");
	}
	
}

