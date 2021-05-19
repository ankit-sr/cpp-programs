#include<iostream>
using namespace std;

struct stack{
	int data;
	stack *next;
};

void push(struct stack **ps, int x)
{
	struct stack *p;
	p=(struct stack *)malloc(sizeof(struct stack));
	if(p==NULL)
	{
		printf("\nStack overflow.")
		return;
	}
	p->data=x;
	p->next=*ps;
	*ps=p;
}

int pop(struct stack **ptos)
{
	int x;
	struct stack *temp;
	if(*ptos==NULL)
	{
		printf("\nStack underflow.");
		return -1;
	}
	int x=(*ptos)->data;
	temp=*ptos;
	*ptos=*ptos->next;
	free(temp);
	return x;
}
