#include<iostream>
using namespace std;
int main()
{
	int a[20],k,n,i;
	for(i=0;i<8;i++)
	{
		cout<<"\nEnter number to insert at position "<<i+1<<" : ";
		cin>>a[i];
	}
	cout<<"\nEnter number to insert in the array : ";
	cin>>n;
	cout<<"\nEnter the position at which the element is to be placed : ";
	cin>>k;
	for(i=10;i>=k;i--)
	{
		a[i]=a[i-1];
	}
	a[k-1]=n;
	for(i=0;a[i+1]!='\0';i++)
	{
		cout<<a[i]<<endl;;
	}
}

