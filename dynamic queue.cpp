#include<iostream>
#include<stdlib.h>
using namespace std;

struct queue {
	int data;
	queue *next;
};

void inqueue(queue **pf, queue **pr, int x)
{
	queue *p = new queue;
	if(p==NULL)
	{
		cout<<"\nQueue Overflow";
	}
	else{
		p->data = x;
		p->next = NULL;
		if(*pf == NULL)
			*pf = p;
		else
			(*pr)->next = p;
		*pr = p;
	}
}
queue* dequeue(queue **pf, queue **pr)
{
	if(*pf == NULL)
	{
		cout<<"\nQueue Underflow";
		return NULL;
	}
	else{
		queue *temp = *pf;
		if(*pf == *pr)
			*pf = *pr = NULL;
		else
			*pf = (*pf)->next;
		return(temp);	
	}
}

int main()
{
	queue *front, *rear;
	front = rear = NULL;
	int n,m;
	do{
		cout<<"\n1.Insert \n2.Delete \n3.Exit \nEnter your choice : ";
		cin>>n;
		switch(n)
		{
			case 1:
				cout<<"Enter number to insert into queue : ";
				cin>>m;
				inqueue(&front,&rear,m);
				break;
			case 2:
				queue *temp;
				temp = dequeue(&front, &rear);
				if(temp!=NULL)
				{
					cout<<"Deleted Element is : "<<temp->data;
					free(temp);
				}
				break;
			case 3:
				exit(0);
			default:
				cout<<"Please enter a valid choice!!";
		}
	}while(1);

}
