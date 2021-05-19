#include<iostream>
using namespace std;

void insert(int,int,int[]);
void display(int[]);
void search(int,int []);
inline void update(int,int,int[]);
void del(int,int[]);
int main()
{
	int a[20],n,m;
	for(int i=0;i<20;i++)
	{
		a[i]=0;
	}
	cout<<"Please note that the maximum size of the array can be 20";
	do
	{
		cout<<"\n1.Insert \n2.Display \n3.Search \n4.Update \n5.Delete \n6.Exit \nEnter your choice : ";
		cin>>n;
		switch(n)
		{
			case 1:
				cout<<"Enter data to insert :";
				cin>>n;
				cout<<"Enter the index number : ";
				cin>>m;
				insert(n,m,a);
				break;
			case 2:
				display(a);
				break;
			case 3:
				cout<<"Enter the element to search :";
				cin>>m;
				search(m,a);
				break;
			case 4:
				cout<<"Enter the data to update :";
				cin>>n;
				cout<<"Enter index : ";
				cin>>m;
				update(n,m,a);
				break;
			case 5:
				cout<<"Enter element to delete : ";
				cin>>m;
				del(m,a);
				break;
			case 6:
				exit(0);
			default:
				cout<<"Please enter a valid choice : ";
				break;
		}
	}while(1);
	return 0;	
}

void insert(int x,int y,int a[])	//x-data   y-index
{
	if(a[y]==0)
	{
		a[y]=x;
	}
	else
	{
		for(int i=19;i<y;i--)
		{
			a[i]=a[i-1];
		}
		a[y]=x;
	}
}
void display(int a[])
{
	cout<<"\nArray is :\n";
	for(int i=0;i<20;i++)
	{
		cout<<a[i]<<" ";
	}
}
void search(int x,int a[])\
{
	int i=0;
	while(i<20)
	{
		if(a[i]==x)
		{
			cout<<"Element founded at index "<<i;
			break;
		}
		else
		{
			i++;
		}
	}
}
void update(int x,int y,int a[])
{
	a[y]=x;
}
void del(int x,int a[])
{
	int i=0;
	while(i<20)
	{
		if(a[i]==x)
		{
			for (int j=i;j<20;j++)
			{
				a[j]=a[j+1];
			}
		}
		else
			i++;
	}
}

