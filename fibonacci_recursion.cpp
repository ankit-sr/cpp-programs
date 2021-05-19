#include<iostream>
using namespace std;

int fibonacci(int m)
{
	if(m==0)
		return 0;
	else if(m==1)
		return 1;
	else
		return(fibonacci(m-1)+fibonacci(m-2));
}
int main()
{
	int n;
	cout<<"Enter number ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<fibonacci(i)<<" ";
	}
	
	
}


