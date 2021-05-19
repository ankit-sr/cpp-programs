#include<iostream>
using namespace std;
int main()
{
	int a=0,b=1,temp=0, n;
	cout<<"Enter the number of terms of fabonacci series to be printed ";
	cin>>n;
	cout<<a<<" "<<b<<" ";
	for(int i=0;i<n-2;i++)
	{
		temp = a+b;
		a=b;
		b=temp;
		cout<<temp<<" ";
	}
	return 0;
	
}
