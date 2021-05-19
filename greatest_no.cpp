#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout<<"Enter three numbers \na= ";
	cin>>a;
	cout<<"\nb= ";
	cin>>b;
	cout<<"\nc= ";
	cin>>c;
	if(a>b)
	{
		if(a>c)
			cout<<"\na is greatest";
		else
			cout<<"\nc is greatest";
	}
	else
	{
		if(b>c)
			cout<<"\nb is greatest";
		else
			cout<<"\nc is greatest";
	}
	return 0;
}
	
	
