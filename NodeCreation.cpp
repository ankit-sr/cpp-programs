#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};

void in_fir(node **ps,int x)
{
	node *p=new node;
	p->data=x;
	p->next=NULL;
	if(*ps==NULL)
	{
		*ps=p;
			cout<<"\nNode added";	
	}
	else
	{
		p->next=*ps;
		*ps=p;
			cout<<"\nNode added";
	}
}

void in_last(node **ps,int x)
{
	node *p=new node;
	node *temp;
	p->data=x;
	p->next=NULL;
	if(*ps==NULL)
	{
		*ps=p;
		cout<<"\nNode added";
	}
	else
	{
		temp=*ps;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=p;
			cout<<"\nNode added";
	}
}

void display(node *p)
{
	if(p==NULL)
	{
		cout<<"\nList is empty.";
	}
	else
	{
		cout<<"List is : ";
		while(p!=NULL)
		{
			cout<<p->data<<"->";
			p=p->next;
		}
		cout<<"NULL";
	}
}

void insert(node **ps,int x)
{
	int pos;
	node *temp, *p;
	p=new node;
	p->data = x;
	p->next=NULL;
	cout<<"\nEnter the position of the element :";
	cin>>pos;
	if(*ps==NULL)
	{
		*ps=p;	
		cout<<"\nNode Added";
	}
	else
	{
		temp=*ps;
		for(int i=1; i<pos-1 && temp->next!=NULL;i++)
		{
			temp=temp->next;
		}
		p->next=temp->next;
		temp->next=p;
		cout<<"Node Added";
	}
}
void del(node **ps,int x)
{
	node *temp,*prev;
	if(*ps==NULL)
	{
		cout<<"\nList is empty";
	}
	else if((*ps)->data==x)
	{
		if((*ps)->next==NULL)
		{
			delete *ps;
			*ps=NULL;
			cout<<"\nNode Deleted.";
		}
		else
		{
			temp=*ps;
			*ps=temp->next;
			delete temp;
			cout<<"\nNode Deleted.";
		}
	}
	else
	{
		temp=*ps;
		while(temp->data!=x && temp!=NULL)
		{
			prev=temp;
			temp=temp->next;
		}
		if(temp==NULL)
		{
			cout<<"\nNode not found.";
		}
		else
		{
			prev->next=temp->next;
			delete temp;
			cout<<"\nNode Deleted.";
		}
	}
}
void reverse(node **ps)
{
	node *p,*q,*r;
	r=NULL;
	p=*ps;
	if(*ps==NULL)
	{
		cout<<"\nList is empty.";
	}
	else if((*ps)->next==NULL)
	{
		cout<<"\nList is reversed.";
	}
	else
	{
		while(p!=NULL)
		{
			q=p->next;
			p->next=r;
			r=p;
			p=q;
		}
		*ps=r;
		cout<<"\nList is Reversed.";
	}
}
int main()
{
	node *start=NULL;
	do
	{
		int n,m;
		cout<<"\n1.Create node at starting \n2.Create node at last \n3.Insert at specific location \n4.Delete \n5.Display \n6.Reverse \n7.Exit. \nEnter choice :";
		cin>>n;
		switch(n)
		{
			case 1:
				cout<<"Enter value to insert : ";
				cin>>m;
				in_fir(&start,m);
				break;
			case 2:
				cout<<"Enter value to insert : ";
				cin>>m;
				in_last(&start,m);
				break;
			case 3:
				cout<<"Enter value to insert : ";
				cin>>m;
				insert(&start,m);
				break;
			case 4:
				cout<<"Enter element to be deleted : ";
				cin>>m;
				del(&start,m);
				break;
			case 5:
				display(start);
				break;
			case 6: 
				reverse(&start);
				break;
			case 7:
				exit(0);
			default : 
				cout<<"Please enter a valid value : ";
				break;
		}
	}while(1);
	return 0;
}
