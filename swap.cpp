#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Provide two numbers :\na=";
	cin>>a;
	cout<<"\nb=";
	cin>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"\nAfter swapping \na="<<a<<"\nb="<<b;
	return 0;
}
