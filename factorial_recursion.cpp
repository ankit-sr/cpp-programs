#include<iostream>
using namespace std;

factorial(int x)w
{
	if(x==1 || x==0)
	{
		return 1;
	}
	else
	{
		return (factorial(x-1) * x);
	}
}

int main()
{
	cout<<"Enter number to calculate its factorial : ";
	int n;
	cin>>n;
	cout<<"factorial is : "<<factorial(n);
	return 0;
}
