#include<iostream>
#include<stdlib.h>
using namespace std;

struct cnode
{
	int data;
	  cnode *next;
};

void append( cnode **, int );
void display( cnode *);
void del_last( cnode **);

void central_node(cnode **ps)
{
	if(*ps == NULL)
	{
		cout<<"List is empty.";
	}
	else{
		if((*ps)->next==*ps)
			cout<<"Central node is "<<(*ps)->data;
		else{
			cnode *temp = *ps;
			cnode *p = temp;
			while(temp->next!=*ps && temp->next->next !=*ps)
			{
				p=p->next;
				temp=temp->next->next;
			}
			cout<<"Central node is "<<p->data;
		}
	}
}

int main(void)
{
  cnode *start=NULL;
  int n,m;
  do
  {
    cout<<"\nEnter Choice \n1. Append \n2.Display \n3.Delete \n4.Quit   \n5.Central node         ";
    cin>>n;
    switch(n)
    {
      case 1:
	cout<<"\nEnter no. of your choice : ";
	cin>>m;
	append(&start,m);
	break;
      case 2:
	display(start);
	break;
      case 3:
	cout<<"\nEnter no. to delete from list : ";
	cin>>m;
	del_last(&start);
	break;	
      case 4:
	exit(0);
	  case 5:
	central_node(&start);
	break;
      default:
	 cout<<"\nplease enter a valid choice";
	

    }
  } while(1);
return 0;
}
void append(cnode **ps, int x)
{
  cnode *p,*temp;
  p=(cnode*)malloc(sizeof(cnode));
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

void del_last(  cnode **ps)
{
	  cnode *temp, *prev;
	if(*ps==NULL)
	{
		cout<<"List is empty";
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


void display(  cnode *p)
{
	  cnode *temp;
	if(p==NULL)
	{
		cout<<"\nList is Empty";
		return;
	}
	temp=p;
	do
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}while(temp!=p);
}
