#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"How many numbers you want to enter : ";
	cin>>n;
	int a[n],i,j,b[n],k=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		j=2;
		while(a[i]%j!=0)
		{
			j++;
		}
		if(a[i]==j)
		{
			b[k]=j;
			k++;	
		}
	}
	int temp;
	for(int i=0;i<k;i++)
	{
		if(b[i]>b[i+1])
		{
			temp=b[i];
			b[i]=b[i+1];
			b[i+1]=temp;
		}
	}
	cout<<"The primes in the given numbers are : ";
	for(i=0;i<=k;i++)
	{
		cout<<b[i]<<" ";
	}
}
