#include<iostream>
using namespace std;

struct queue
{
	int data[5];
	int front;
	int rear;
};

void inqueue(queue *q, int x)
{
	if((q->rear==4&&q->front==0) || (q->front==q->rear+1))
	{
		cout<<"\nQueue Overflow.";
	}
	else
	{
		if(q->rear==4)
			q->rear = 0;
		else
			q->rear+=1;
			
		q->data[q->rear]=x;
		if(q->front==-1)
			q->front=0;
	}
}

void dequeue(queue *q)
{
	if(q->front==-1)
	{
		cout<<"\nQueue Underflow.";
	}
	else
	{
		int x;
		x = q->data[q->front];
		if(q->front==q->rear)
			q->front=q->rear=-1;
		else if(q->front==4)
			q->front=0;
		else
			q->front+=1;
		cout<<"\nDeleted Element is : "<<x;
	}
	
}
void display(queue q)
{
	if(q->front==-1)	
	{
		cout<<"No element inserted.";	
	}
	else
	{
		
	}
}
int main()
{
	queue q;
	q.front = q.rear = -1; 	
	int n,m;
	do
	{
		cout<<"\n1. Insert \n2. Delete \n3.Display \n4. Quit \nEnter your choice : ";
		cin>>n;
		switch(n)
		{
			case 1:
				cout<<"Enter the data you want to insert : ";
				cin>>m;
				inqueue(&q , m);
				break;
			case 2:
				dequeue(&q);
				break;
			case 3:
				display(q);
				break;
			case 4:
				exit(0);
			default:
				cout<<"Please enter a valid choice : ";
		}
	}while(1);
}
