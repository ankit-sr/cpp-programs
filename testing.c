#include<stdio.h>
#include<stdlib.h>

struct bst
{
	struct bst *left;
	int data;
	struct bst *right;
	int flag;
};
void append(struct bst **,int);
void push(struct stack *p,struct bst *x);
struct bst * pop(struct stack *p);
void postorder(struct bst *p);
int main(void)
{
	struct bst *root = NULL;
	append(&root,10);
	append(&root,5);
	append(&root,20);
	append(&root,2);
	append(&root,7);
	append(&root,6);
	append(&root,9);
	append(&root,18);
	append(&root,22);
	postorder(root);
	return 0;
}
void append(struct bst **pr, int x)
{
	struct bst *p,*temp,*prev;
	p=(struct bst *)malloc(sizeof(struct bst));
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

void push(struct stack *p,struct bst *x)
{
	if(p->tos==4)
	{
		printf("Stack overflow.");
		return;
	}
	p->tos++;
	p->arr[p->tos]=x;
}

struct bst * pop(struct stack *p)
{
	struct bst *x;
	if(p->tos==-1)
	{
		printf("Stack Underflow");
		return NULL;
	}
	else
	{
		x=p->arr[p->tos];
		p->tos--;
		return x;	
	}
}
void postorder(struct bst *p)
{
	struct stack s;
	if(p==NULL)
	{
		printf("\nTree is empty.");
		return;
	}
	while(p!=NULL)
	{
		p->flag=1;
		push(&s,p);
		if(p->right!=NULL)
		{
			p->right->flag=-1;
			push(p->right);
		}
		p=p->left;
	}
	
	while(s.tos!=-1)
	{
		p=pop(&s);
		if(p->flag==1)
		{
			printf("%d ",p->data);
		}
		else
		{
			p->flag=1;
			while(p!=NULL)
			{
				push(&s,p);
				if(p->right!=NULL)
				{
					p->right->flag=-1;
					push(&s,p->right);
				}
				p=p->left;
			}
		}
	}
} 
