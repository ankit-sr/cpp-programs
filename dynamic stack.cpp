#include<iostream>
#include<stdlib.h>
using namespace std;

struct stack{
	int data;
	stack *next;
};

void push( stack **ptos, int x)
{
	stack *p = new stack;
	if(p==NULL)
	{
		cout<<"\nStack overflow.";
		return;
	}
	p->data=x;
	p->next=*ptos;
	*ptos=p;
	cout<<"Element Pushed.";
}

stack* pop( stack **ptos)
{
	stack *temp;
	if(*ptos==NULL)
	{
		cout<<"\nStack underflow.";
		return NULL;
	}
	temp=*ptos;
	*ptos=temp->next;
	return temp;
}

int main()
{
	stack *tos = NULL;
	int n,m;
	do{
		cout<<"\n1.Push \n2.Pop \n3.Exit \nEnter your choice : ";
		cin>>n;
		switch(n)
		{
		case 1:
			cout<<"Enter number to push into stack : ";
			cin>>m;
			push(&tos , m);
			break;
		case 2:
			stack *temp;
			temp = pop(&tos);
			if(temp!=NULL)
			{
				cout<<"\nPopped out element is :"<<temp->data;
				free(temp);
			}
			break;
		case 3:
			exit(0);
		default:
			cout<<"Please enter a valid value!!";
		}
	}while(1);
}
