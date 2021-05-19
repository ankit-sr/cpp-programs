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
	cout<<"\nEnter number to delete from the array : ";
	cin>>n;
	i=0;
	while(a[i]!=n && a[i]!='\0')
	{
		i++;
	}
	if(a[i]==n)
	{
		for(k=i;a[k]!='\0';k++)
		{
			a[k]=a[k+1];
		}
		cout<<"\nElement Deleted.\n";
		for(i=0;a[i+1]!='\0';i++)
		{
			cout<<a[i]<<endl;
		}
	}
	else
	{
		cout<<"\nElement not found.";
	}

}
