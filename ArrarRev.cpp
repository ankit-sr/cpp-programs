#include<iostream>
using namespace std;

int main()
{
	int n,i,j,temp;
	cout<<"How many numbers you want to enter : ";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Before Reversal : ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	for(i=0,j=n-1; i<n/2,j>n/2;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	cout<<"\nAfter Reversal : ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
