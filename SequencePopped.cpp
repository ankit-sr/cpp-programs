#include<iostream>
using namespace std;
struct stack
{
	int arr[10];
	int tos;
};
void push(stack &p,int x)
{
	if(p.tos==9)
		cout<<"\nStack Overflow";
	else
	{
		p.tos+=1;
		p.arr[p.tos]=x;
	}
}
int pop(stack &p)
{
	int x;
	if(p.tos==-1)
		cout<<"\nStack Underflow";
	else
	{
		x=p.arr[p.tos];
		p.tos-=1;
		return x;
	}
}
int main()
{
	stack s;
	s.tos=-1;
	int a[10],i=0;
	push(s,1);
	push(s,2);
	a[i]=pop(s);
	i++;
	push(s,1);
	push(s,2);
	a[i]=pop(s);
	i++;
	a[i]=pop(s);
	i++;
	a[i]=pop(s);
	i++;
	push(s,2);
	a[i]=pop(s);
	i++;
	cout<<"\nSequence of popped out elements is : \n";
	for(i=0;a[i]!='\0';i++)
	{
		cout<<a[i]<<endl;
	}
}

