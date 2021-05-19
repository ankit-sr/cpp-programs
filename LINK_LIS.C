#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};

void append(struct node **, int );
void display(struct node *);
void del(struct node **,int);
void reverse(struct node **);

int main(void)
{
  struct node *start=NULL;
  int n,m;
  do
  {
    printf("\nEnter Choice \n1. Append \n2.Display \n3.Delete \n4. Reverse Order \n5.Quit            ");
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
	reverse(&start);
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
void append(struct node **ps, int x)
{
  struct node *p, *temp;
  p=(struct node *)malloc(sizeof(struct node));
  p->data = x;
  p->next = NULL;
  if(*ps == NULL)
  {
    *ps=p;
  }
  else
  {
    temp=*ps;
    while(temp->next!=NULL)
    {
      temp=temp->next;
    }
    temp->next=p;
  }
}
void display(struct node *p)
{
  int count=1;
  if(p==NULL)
  {
    printf("\nlist is empty");
  }
  else
  {
  	printf("\nList is : ");
    while(p !=NULL)
    {
      count++;
      printf("%d ",p->data);
      p=p->next;
    }
  }
}

void del(struct node **ps, int x)
{
  struct node *temp, *p;
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
    printf("\nNode Deleted ");
    return;
  }
  while(temp!=NULL && temp->data!=x)
  {
    p=temp;
    temp=temp->next;
  }
  if(temp==NULL)
  {
    printf("\nData is not availaible in the list ");
  }
   else
  {
     p->next=temp->next;
     free(temp);
     printf("\nNode Deleted");
  }
  
}

void reverse(struct node **ps)
{
	struct node *p,*q,*r;
	q=r=NULL;
	p=*ps;
	if(*ps==NULL)
	{
		printf("\nList is empty");
		return;
	}
	if((*ps)->next==NULL)
	{
		return;
	}
	while(p!=NULL)
	{
		q=p->next;
		p->next=r;
		r=p;
		p=q;
	}
	*ps=r;
}

