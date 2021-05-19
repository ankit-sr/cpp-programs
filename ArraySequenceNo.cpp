#include<iostream>
using namespace std;

int main()
{
	int n,count=1,i=0,arr[20];
	cout<<"Enter number of digits to insert";
	cin>>n;
	int a[n];
	for(i=0; i<n;i++)
	{
		cin>>a[i];
	}
	i=0;n=0;
	while(a[i]!='\0')
	{
		while(a[i]<a[i+1])
		{
			count++;
			i++;
		}
		arr[n]=count;
		n++;
		count=1;
		i+=1;
	}
	i=0;
	int max=0;
	while(arr[i]!='\0')
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	cout<<"Maximum number of consecutive terms are : "<<max;
	return 0;
}
