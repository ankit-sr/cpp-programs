#include<iostream>
#include<stdlib.h>
using namespace std;

struct bst 
{
	struct bst *left;
	int data;
	struct bst *right;	
	int flag;
};

struct stack
{
	struct bst *arr[10];
	int tos;
};

void append( bst **,int);
void push( stack *p, bst *x);
 bst * pop( stack *p);
void inorder( bst *p);

int main()
{
	 bst *root = NULL;
	append(&root,10);
	append(&root,5);
	append(&root,20);
	append(&root,2);
	append(&root,7);
	append(&root,6);
	append(&root,9);
	append(&root,18);
	append(&root,22);
	inorder(root);
	return 0;
}
void append( bst **pr, int x)
{
	 bst *p,*temp,*prev;
	p=( bst *)malloc(sizeof( bst));
	p->data=x;
	p->left=p->right=NULL;
	if(*pr == NULL)
	{
		*pr=p;
		return;
	}
	temp=*pr;
	while(temp!=NULL)
	{
		prev=temp;
		if(temp->data < x)
			temp=temp->right;
		else
			temp=temp->left;
	}
	if(prev->data > x)
		prev->left=p;
	else
		prev->right=p;
}

void push( stack *p, bst *x)
{
	if(p->tos==4)
	{
		cout<<"Stack overflow.";
		return;
	}
	p->tos++;
	p->arr[p->tos]=x;
}

 bst * pop( stack *p)
{
	 bst *x;
	if(p->tos==-1)
	{
		cout<<"Stack Underflow";
		return NULL;
	}
	else
	{
		x=p->arr[p->tos];
		p->tos--;
		return x;	
	}
}


void inorder( bst *p)
{
	stack s;
	if(p==NULL)
	{
		cout<<"\nTree is empty.";
		return;
	}
	cout<<"\nTree in inorder form is : ";
		s.tos=-1;
		while(p!=NULL)
		{
			push(&s,p);
			p=p->left;
		}
		while(s.tos!=-1)
		{
			p=pop(&s);
			cout<<p->data<<" ";
			if(p->right!=NULL)
			{
				p=p->right;
				while(p!=NULL)
				{
					push(&s,p);
					p=p->left;
				}
			}
		}
}
