#include<iostream>
#include<stdlib.h>
#include<string>
#include<fstream>
using namespace std;

struct customer
{
	string name;
	string dob;
	string email;
	int contact;
	string username;
	string password;
	customer *next;
};
int main()
{
	customer *first=NULL;
	int log;
	cout<<"Welcome ! ";
	MoveUp:
	cout<<"\n1.Register \n2.Login \nEnter your choice:";
	cin>>log;
	switch(log)
	{
		case 1: 
			customer_reg(&first);
				break;
		case 2:
			customer_login(&first);
			break;
		default:
			cout<<"Invalid choice !!";
			goto MoveUp;
	}
}

void customer_reg(customer **ps)
{
	customer *p = new customer;
	cout<<"\nEnter company name : ";
	cin>>p->companyname;
	cout<<"\nEmail id : ";
	cin>>p->email;
	cout<<"\nContact Number :";
	cin>>p->contact;
	cout<<"\nUsername : ";
	cin>>p->username;
	cout<<"\nPassword : ";
	cin>>p->password;
	
	if(*ps==NULL)
	{
		*ps=p;
	}
	else if((*ps)->next==NULL)
	{
		*ps->next=p;
	}
	else
	{
		customer *temp = *ps;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=p;
	}
	cout<<"Reistered Successfully.\n"
}
