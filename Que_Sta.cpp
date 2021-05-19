#include<iostream>
using namespace std;

struct stack
{
	char data[10];
	int tos;
};
struct queue
{
	char data[10];
	int front;
	int rear;
};
void push(stack *s,char x)
{
	if(s->tos==9)
		cout<<"\nStack Overflow";
	else
	{
		s->tos+=1;
		s->data[s->tos]=x;
	}
}
char pop(stack *s)
{
	if(s->tos==-1)
		cout<<"\nStack Underflow";
	else
	{
		char x;
		x=s->data[s->tos];
		s->tos-=1;
		cout<<"\nElement popped "<<x;
		return x;
	}
}

void inqueue(queue *q,char x)
{
	if(q->rear==9)
		cout<<"\nQueue is full.";
	else
	{
		q->rear+=1;
		q->data[q->rear]=x;
	}
}
char dequeue(queue *q)
{
	if(q->front>q->rear)
		cout<<"\nQueue is empty.";
	else
	{
		char x;
		x=q->data[q->front];
		q->front+=1;
		cout<<"\nElement deleted "<<x;
		return x;
	}
}
void display(queue q)
{
	if(q.rear==-1)
	{
		cout<<"\nQueue is empty";
	}
	else
	{
		int x=0;
		cout<<"\nQueue is : ";
		while(x<=q.rear)
		{
			cout<<q.data[x]<<" ";
			x++;
		}
	}
}
int main()
{
	char ch;
	stack s;
	s.tos=-1;
	queue q;
	q.front=0;
	q.rear=-1;
	push(&s,'G');
	push(&s,'F');
	push(&s,'E');
	push(&s,'D');
	push(&s,'C');
	push(&s,'B');
	push(&s,'A');
	inqueue(&q,pop(&s));
	inqueue(&q,pop(&s));
	inqueue(&q,pop(&s));
	inqueue(&q,pop(&s));
	inqueue(&q,pop(&s));
	display(q);
	push(&s,dequeue(&q));
	push(&s,dequeue(&q));
	pop(&s);	
}

