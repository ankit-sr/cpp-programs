#include<iostream>
using namespace std;

int main()
{
	int a[50],n,m;
	for(int i=0;i<8;i++)
	{
		cout<<"Enter element at index "<<i<<" : ";
		cin>>a[i];
	}	
	cout<<"Enter the element : ";
	cin>>n;
	cout<<"Enter the position of the element : ";
	cin>>m;
	for(int j=9;j<=m;j--)
	{
		a[j]=a[j-1];
	}
	a[m]=n;
	for(int i=0;i<9;i++)
	{
		cout<<"\n"<<a[i];
	}
}
