#include<iostream>
using namespace std;

void even_odd(int x)
{
	if(x%2==0)
		cout<<"\nNumber is even";
	else
		cout<<"\nNumber is odd";
}

int main()
{
	int a;
	cout<<"Enter number : ";
	cin>>a;
	even_odd(a);
	return 0;
}
