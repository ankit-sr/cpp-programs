#include<iostream>
using namespace std;

struct stack
{
	int arr[5];
	int tos;
};

void push(stack *p,int x)
{
	if(p->tos==4)
	{
		cout<<"\nStack Overflow.";
	}
	else
	{
		p->tos++;
		p->arr[p->tos]=x;
		
	}
}

void pop(stack *p)
{
	int x;
	if(p->tos==-1)
	{
		cout<<"\nStack Overflow.";
	}
	else
	{
		cout<<p->arr[p->tos]<<" ";
		p->tos--;
	}
}
int main()
{
	stack s;
	s.tos=-1;
	push(&s,1);
	push(&s,2);
	pop(&s); push(&s,1);
	push(&s,2);
	pop(&s);
	pop(&s);
	pop(&s);
	push(&s,2);
	return 0;
}
