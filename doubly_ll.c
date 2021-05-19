#include<stdio.h>
#include<stdlib.h>
struct doubly
{
	struct doubly *prev;
	int data;
	struct doubly *next;	
};
void append(struct doubly **,int);
void display(struct doubly *);
void del(struct doubly **,int );
void max(struct doubly **);

int main(void)
{
  struct doubly *start=NULL;
  int n,m;
  do
  {
    printf("\nEnter Choice \n1. Append \n2.Display \n3.Delete \n4.Maximum Number \n5.Quit            ");
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
	del(&start,m);
	break;
	case 4:
		max(&start);
		break;   	
    case 5:
		exit(0);
    default:
	 printf("\nplease enter a valid choice");
	 break;

    }
  } while(1);
return 0;
}
void append(struct doubly **ps, int x)
{
	struct doubly *temp,*p;
	p=(struct doubly *)malloc(sizeof(struct doubly));
	p->data=x;
	p->next=p->prev=NULL;
	if(*ps==NULL)
	{
		*ps=p;
		return;
	}
	if((*ps)->next==NULL)
	{
		(*ps)->next=p;
		p->prev=*ps;
		return;
	}
	temp=*ps;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=p;
	p->prev=temp;
}

void display(struct doubly *p)
{
	if(p==NULL)
	{
		printf("List is empty.");
		return;
	}
	printf("\nList is : ");
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
}
void del(struct doubly **ps, int x)
{
	struct doubly *temp;
	if(*ps==NULL);
	{
		printf("\nList is empty");
	}
	if((*ps)->next==NULL)
	{
		free(*ps);
		*ps=NULL;
		printf("\nNode Deleted.");
	}
	else
	{
	temp=*ps;
	while(temp->data!=x && temp->next!=NULL)
	{
		temp=temp->next;
	}
	if(temp->data==x)
	{
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
		free(temp);
		printf("\nNode Deleted.");
	}
	else
	{
		printf("\nData not found in the list.");
	}
	}
}

void max(struct doubly **ps)
{
	if(*ps == NULL)
	{
		printf("\nList is empty.");
	}
	else{
		if((*ps)->next == *ps)
			printf("Maximum : %d",(*ps)->data);
		else{
			int max = (*ps)->data;
			struct doubly *temp;
			temp = *ps;
			while(temp!=NULL)
			{
				if(temp->data > max)
					max = temp->data;
				temp= temp->next;
			}
			printf("\nMaximum data in the list is %d",max);
		}
	}
}
