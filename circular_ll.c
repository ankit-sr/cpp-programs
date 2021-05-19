#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct cnode
{
	int data;
	struct cnode *next;
};

void append(struct cnode **, int );
void display(struct cnode *);
void del_last(struct cnode **);

int main(void)
{
  struct cnode *start=NULL;
  int n,m;
  do
  {
    printf("\nEnter Choice \n1. Append \n2.Display \n3.Delete \n4.Quit            ");
    scanf("%d",&n);
    switch(n)
    {
      case 1:
	printf("\nEnter no. of your choice");
	scanf("%d",&m);
	append(&start,m);
	break;
      case 2:
	display(start);
	break;
      case 3:
	printf("\nEnter no. to delete from list");
	scanf("%d",&m);
	del_last(&start);
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
void append(struct cnode **ps, int x)
{
  struct cnode *p,*temp;
  p=(struct cnode*)malloc(sizeof(struct cnode));
  p->data=x;
p->next=p;
if(*ps==NULL)
{
	*ps=p;
	return;
}
temp=*ps;
while(temp->next!=*ps)
{
	temp=temp->next;
}
temp->next=p;
p->next=*ps;
}

void del_last(struct cnode **ps)
{
	struct cnode *temp, *prev;
	if(*ps==NULL)
	{
		printf("List is empty");
		return;
	}
	if((*ps)->next==*ps)
	{
		free(*ps);
		*ps=NULL;
		return;
	}
	temp=*ps;
	while(temp->next!=*ps)
	{
		prev=temp;
		temp=temp->next;
	}
	prev->next=temp->next;   //prev->next=*ps;
	free(temp);
}


void display(struct cnode *p)
{
	struct cnode *temp;
	if(p==NULL)
	{
		printf("\nList is Empty");
		return;
	}
	temp=p;
	do
	{
		printf("%d ", temp->data);
		temp=temp->next;
	}while(temp!=p);
}

/*void del_any(struct cnode **ps, int x)
{
	struct cnode *temp, *prev;
	if(*ps==NULL)
	{
		printf("\nLIst is empty");
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
		(*ps)=(*ps)->next;
		free(temp->next);
		temp->next=*ps;
		printf("\nNode Deleted");
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
		printf("\nNode Deleted ");
	}
	else
	{
		printf("Node not found in the list. ");
	}
} */
