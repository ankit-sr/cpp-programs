#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct stack 
{
	int arr[20];
	int tos;
};
void append(struct node **, int );
void display(struct node *);
void del(struct node **,int);
void push(struct stack *, int);
int pop(struct stack*);

int main(void)
{
  struct node *start=NULL;
  int n,m;
  do
  {
    printf("\nEnter Choice \n1. Append \n2.Display \n3.Delete \n4. Quit            ");
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

void push(struct stack *p, int x)
{
	p->tos+=1;
	p->arr[p->tos]=x;
	
}
int pop(struct stack *p)
{
	int x;
	if(p->tos==-1)
		return -1;
	else
	{
		x=p->arr[p->tos];
		p->tos-=1;
		return x;
	}
}
void display(struct node *p)
{
	struct stack s;
	s.tos=-1;
	if(p==NULL)
	{
		printf("List is empty");
		return;
	}	
	while(p!=NULL)
	{
		push(&s,p->data);
		p=p->next;
	}
	while(s.tos!=-1)
	{
		printf("%d ",pop(&s));
	}
}
