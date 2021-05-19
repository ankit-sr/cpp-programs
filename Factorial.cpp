#include<iostream>
using namespace std;

int factorial(int x)
{
	int fac=1;
	for(int i=x;i>=1;i--)
	{
		fac=fac*i;
	}
	return fac;
}
int main()
{
	int n;
	cout<<"Enter a number to find its factorial : ";
	cin>>n;
	cout<<"Factorial is : "<<factorial(n);
	return 0;
}

