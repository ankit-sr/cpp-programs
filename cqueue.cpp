#include<iostream>
#include<stdlib.h>
using namespace std;

struct queue
{
    int arr[5];
    int front, rear;
};
void insert(struct queue*, int);
int rem(struct queue*);

int main()
{
    int x;
    struct queue q;
    q.front=q.rear=-1;
    do
    {
        cout<<"\nEnter your choice : \n1. Insert \n2. Delete \n3. Quit"<<endl;
        cin>>x;
        cout<<endl;
    switch(x)
    {
    case 1:
        int n;
        cout<<"Enter no. to insert ";
        cin>>n;
        insert(&q, n);
        break;
    case 2:
        int m;
        m=rem(&q);
        cout<<"deleted element is : "<<m;
        break;
    case 3:
        exit(0);
    default:
        cout<<"Wrong Input. \nPlease Try Again..";
    }

    }while(1);

    return 0;
}

void insert(struct queue *q, int x)
{
    if((q->front==0 && q->rear==4) || q->front==q->rear+1)         // if((q.rear+1)%5==q.front);
    {
        cout<<"\nqueue overflow";
        return;
    }
    q->rear+=1;
    q->arr[q->rear]=x;
    cout<<"\nInserted Element is: "<<x;
    if(q->front==-1)
        q->front=0;
}

int rem(struct queue *q)
{
    int x;
    if(q->front==-1)
       {
         cout<<"\nQueue Underflow";
         return 0;
       }
    x=q->arr[q->front];
    if(q->front==q->rear)
        q->front=q->rear=-1;
    else if(q->front==4)
        q->front = 0;
    else
        q->front+=1;
    return x;
}

